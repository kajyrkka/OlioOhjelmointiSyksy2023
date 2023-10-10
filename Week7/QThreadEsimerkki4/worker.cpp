#include "worker.h"
#include <QThread>
#include <QDebug>

Worker::Worker()
{

}

void Worker::doWork()
{
   while(!stopNow)
   {
       qDebug()<<"Working in thread:"<< QThread::currentThread();
       QThread::sleep(1);
   }
   emit workFinished();
}

void Worker::stopRequested()
{
    qDebug()<<"Worker thread got stop signal!!!";
    stopNow = true;
}
