#ifndef WORKER_H
#define WORKER_H

#include <QObject>

class Worker : public QObject
{
    Q_OBJECT
public:
    Worker();

public slots:
    void doWork();
    void stopRequested();
signals:
    void workFinished();

private:
    bool stopNow = false;
};

#endif // WORKER_H
