#include "mainwindow.h"

#include <QApplication>
#include <QThread>
int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    MainWindow w;


    w.show();

    //QThread *mainThread = QThread::currentThread();
    //mainThread->setPriority(QThread::HighPriority);

    QThread::currentThread()->setPriority((QThread::HighPriority));

    return a.exec();
}
