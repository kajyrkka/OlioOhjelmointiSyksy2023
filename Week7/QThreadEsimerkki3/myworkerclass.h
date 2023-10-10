#ifndef MYWORKERCLASS_H
#define MYWORKERCLASS_H

#include <QObject>

class myWorkerClass:public QObject
{
    Q_OBJECT
public:
    myWorkerClass();

public slots:
    void executeTask();

signals:
    void done();

};

#endif // MYWORKERCLASS_H
