#include "myclass.h"
#include <QDebug>

myClass::myClass(QObject *parent)
    : QObject{parent}
{
    qDebug()<<"Nyt ollaan myClass konstruktorissa";

    pQTimer = new QTimer(this);
    connect(pQTimer,SIGNAL(timeout()),this,SLOT(handleTimeOut()),Qt::QueuedConnection);
    //pQTimer->start(1000);
}

myClass::~myClass()
{
    qDebug()<<"Nyt ollaan myClass dekonstruktorissa";
    //delete pQTimer;
    //pQTimer = nullptr;
}

void myClass::startTimer()
{
    pQTimer->start(2000);
}

void myClass::handleTimeOut()
{
    qDebug()<<"Nyt ollaan myClass handleTimeout slotissa";
    emit sendTimerUpdate();
    qDebug()<<"lahetettin signaali MainWindowille";
}
