#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , Worker1("First T")
    , Worker2("Second T")
{
    ui->setupUi(this);


    connect(ui->Stop,SIGNAL(clicked(bool)),this,SLOT(shutDownThreads()));
    connect(ui->Testi,SIGNAL(clicked(bool)),this,SLOT(testHandler()));



    //connect(&Worker1,SIGNAL(done()),this,SLOT(testHandler()));

    Worker1.moveToThread(&myThread1);
    connect(&myThread1,SIGNAL(finished()),&Worker1,SLOT(deleteLater()));
    connect(ui->Start,SIGNAL(clicked(bool)),&Worker1,SLOT(executeTask()));
    myThread1.start(QThread::IdlePriority);


    Worker2.moveToThread(&myThread2);
    connect(&myThread2,SIGNAL(finished()),&Worker2,SLOT(deleteLater()));
    connect(ui->Start,SIGNAL(clicked(bool)),&Worker2,SLOT(executeTask()));
    myThread2.start(QThread::IdlePriority);





}

MainWindow::~MainWindow()
{
    delete ui;
    myThread1.quit();
    myThread1.wait();

    myThread2.quit();
    myThread2.wait();
}

void MainWindow::shutDownThreads()
{
    qDebug()<<"Shutting down both threads";
    myThread1.quit();
    myThread1.wait();

    myThread2.quit();
    myThread2.wait();
}

void MainWindow::testHandler()
{
    qDebug()<<"At testhandler() function";
    for(int i = 0;i<500;i++)
    //while(true)
    {
        qDebug()<<"Now doing loop with hight priority at testhandler() ";
    }

}

