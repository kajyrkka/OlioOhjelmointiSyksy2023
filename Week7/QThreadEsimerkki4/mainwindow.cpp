#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::clickHandler);
    connect(ui->stop,&QPushButton::clicked,this,&MainWindow::stopHandler);
    connect(ui->start,&QPushButton::clicked,this,&MainWindow::startHandler);

    QTimer * timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&MainWindow::updateUI);

    timer->start(2000);




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateUI()
{
    qDebug()<<"updating UI in thread"<<QThread::currentThread();
}

void MainWindow::clickHandler()
{
    qDebug()<<"updating UI in clickHandler function "<<QThread::currentThread();
}

void MainWindow::stopHandler()
{
    emit stopThread();  // ei toimi, koska threadin event loop ei mukamas ole käynnissä!!!

    worker->stopRequested(); // kutsutaan sitten suoraan näin
    qDebug()<<"Trying to stop thread at thread "<<QThread::currentThread();

}

void MainWindow::startHandler()
{
    thread = new QThread;
    worker = new Worker;
    worker->moveToThread(thread);

    connect(thread,&QThread::started,worker,&Worker::doWork);           // tämä käynnistää doWork funktion heti, kun thread on käynnistetty.
    connect(worker,&Worker::workFinished,thread,&QThread::quit);        // tämä sammuttaa QThread run funktion
    connect(worker,&Worker::workFinished,worker,&QObject::deleteLater); // tämä tuhoaa Worker olion, kun workFinished on lähetetty
    connect(thread,&QThread::finished,thread,&QThread::deleteLater);    // tämä tuhoaa QThread olion, kun finished signaali on vastaanotettu
    connect(this,&MainWindow::stopThread,worker,&Worker::stopRequested);// Ja tämä ei jostain syystä toimi
    //connect(this,SIGNAL(stopThread()),worker,SLOT(stopRequested()));
    thread->start();
}

