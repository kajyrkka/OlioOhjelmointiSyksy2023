#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QThread>
#include "myworkerclass.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(clickHandler()));
    connect(ui->Strat,SIGNAL(clicked(bool)),this,SLOT(threadHandler()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clickHandler()
{
    for(int i = 0;i<1000;i++)
    {
        qDebug()<<"clickHandler()"<<i;
    }
}

void MainWindow::threadHandler()
{
    QThread thread1;
    myWorkerClass myWorker;
    myWorker.moveToThread(&thread1);
    thread1.start(QThread::IdlePriority);
    //thread1.start();
    myWorker.executeTask();
}

