#include "mainwindow.h"

#include <QApplication>
#include <QThread>
#include "myworkerclass.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    QThread thread1;
    myWorkerClass myWorker;
    myWorker.moveToThread(&thread1);
    //thread1.start(QThread::LowPriority);
    thread1.start();
    myWorker.executeTask();


    return a.exec();
}
