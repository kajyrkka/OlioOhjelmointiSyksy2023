#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->nappi,SIGNAL(clicked(bool)),this,SLOT(handleClick()));

    pQTimer = new QTimer(this); // tuhoutuu nyt automaattisesti, kun mainwindow tuhoutuu.
    pQTimer->setSingleShot(false); // antaa varmasti jatkuvasti timeoutteja

    connect(pQTimer, SIGNAL(timeout()),this,SLOT(handleTimeout()));
    pQTimer->start(1000);
    qDebug()<<"huuhaa";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick()
{
    QString numero = ui->lineEdit->text();
    int luku = numero.toInt();
    ui->progressBar->setMaximum(100);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setValue(luku);
    //qDebug()<<"handleTimeout";
}

void MainWindow::handleTimeout()
{
   //qDebug()<< "handleTimeout";

   // ui->lineEdit->setText(QString::number(num));
   //num++;
}

