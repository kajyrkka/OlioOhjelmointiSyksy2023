#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QDebug>

class Worker :public QObject
{
    Q_OBJECT
public:
    Worker(QString);

public slots:
    void executeTask();

signals:
    void done();

private:
    QString name;
};

#endif // WORKER_H
