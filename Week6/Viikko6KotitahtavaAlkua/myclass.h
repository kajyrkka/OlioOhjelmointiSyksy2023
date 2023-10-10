#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QTimer>


/*
 * 1. Peritään QObject
 * 2. Lisätään private osaan Q_OBJECT
 * 3. Muutetaan konstruktori sellaiseksi, että se välittää pointterin QObjectille
 * 4. Lisäätään joko public slots tai signals luokkaan.
 *
 *
 *
 * */


class myClass : public QObject
{
    Q_OBJECT
public:
    myClass(QObject *parent = nullptr);
    ~myClass();
    void startTimer();

signals:
    void sendTimerUpdate();

public slots:
    void handleTimeOut();

private:
    QTimer * pQTimer;

};

#endif // MYCLASS_H
