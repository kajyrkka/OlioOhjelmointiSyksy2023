#include "koostaja.h"

Koostaja::Koostaja():osaPinosta(20)
{
    cout<<"Koostaja luotu"<<endl;
    pOsa = new Osa(10);

}

Koostaja::~Koostaja()
{
    delete pOsa;
    pOsa = nullptr;
    cout<<"Koostaja tuhottu"<<endl;
}

void Koostaja::staticFunctionExample()
{
    cout<<"staattinen functio"<<endl;
}

void Koostaja::kaytetaanPointteriaFunctio()
{
    pOsa->printLuku();
}
