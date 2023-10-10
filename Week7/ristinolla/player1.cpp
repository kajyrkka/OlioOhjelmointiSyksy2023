#include "player1.h"


Player1::Player1()
{
    srand(time(0)); // alustetaan satunnaislukugeneraattori
}

void Player1::run()
{
    while(1)
    {
        if(minunVuoro == true)
        {
          qDebug()<<"teen siirtoani...";
          int satunnainenLuku = rand()%9 +1;
          QString siirto = "B"+QString::number(satunnainenLuku);
          emit siirtoYritysTehty(siirto);
          minunVuoro = false;
        }
        else
        {
           qDebug()<<"odottelen vuoroani";
        }

        sleep(1);
    }

}

void Player1::teeSiirtosi(bool value)
{
    minunVuoro = value;
}
