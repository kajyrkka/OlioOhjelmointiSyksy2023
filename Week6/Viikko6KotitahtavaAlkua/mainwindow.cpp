#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pmyClass = new myClass(this);
    num = 0;
    connect(ui->Count,SIGNAL(clicked(bool)),this,SLOT(handleCount()),Qt::QueuedConnection);
    connect(ui->Reset,SIGNAL(clicked(bool)),this,SLOT(handleReset()),Qt::QueuedConnection);
    connect(pmyClass,SIGNAL(sendTimerUpdate()),this,SLOT(handleSignal()),Qt::QueuedConnection);
    connect(ui->Start,SIGNAL(clicked(bool)),this,SLOT(handleStart()),Qt::QueuedConnection);
}

MainWindow::~MainWindow()
{
    delete ui;
    //delete pmyClass;


}

void MainWindow::handleCount()
{
    num++;
    ui->lineEdit->setText(QString::number(num));
}

void MainWindow::handleReset()
{
    num = 0;
    ui->lineEdit->setText(QString::number(num));
}

void MainWindow::handleSignal()
{
    num++;
    ui->lineEdit->setText(QString::number(num));
    qDebug()<<"Nyt ollaan Mainwindow handleSignal slotissa";
}

void MainWindow::handleStart()
{
    pmyClass->startTimer();
}




