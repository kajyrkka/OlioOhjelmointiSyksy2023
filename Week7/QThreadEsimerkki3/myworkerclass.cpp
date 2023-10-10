#include "myworkerclass.h"
#include <QDebug>
#include <QThread>

myWorkerClass::myWorkerClass()
{

}

void myWorkerClass::executeTask()
{
    while(true)
    {
        //for(int i = 0;i<5;i++)
        while(true)
        {
            qDebug()<<"Thread1 executing";
            QThread::sleep(1);
        }
        emit done();
    }
}
