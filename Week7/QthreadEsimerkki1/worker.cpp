#include "worker.h"



Worker::Worker(QString n)
{
    name = n;
}

void Worker::executeTask()
{
    while(true)
    {
        for(int i = 0;i<5;i++)
        //while(true)
        {
            qDebug()<<"This thread name is "<<name;
        }
        emit done();
    }

}
