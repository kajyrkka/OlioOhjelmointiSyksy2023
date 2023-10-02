#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pmyClass = new myClass;
    num = 0;
    connect(ui->Count,SIGNAL(clicked(bool)),this,SLOT(handleCount()));
    connect(ui->Reset,SIGNAL(clicked(bool)),this,SLOT(handleReset()));
    connect(pmyClass,SIGNAL(sendTimerUpdate()),this,SLOT(handleSignal()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pmyClass;
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
}




