#ifndef PLAYER1_H
#define PLAYER1_H
#include <QThread>
#include <QDebug>
#include <cstdlib>
#include <ctime>


class Player1:public QThread
{
    Q_OBJECT
public:
    Player1();
    virtual void run() override;

public slots:
    void teeSiirtosi(bool);
signals:
    void siirtoYritysTehty(QString);

private:
    bool minunVuoro = false;

};

#endif // PLAYER1_H
