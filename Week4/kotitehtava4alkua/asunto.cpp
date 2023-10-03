#include "asunto.h"

Asunto::Asunto()
{
    cout << "asunto luotu"<<endl;
}

void Asunto::maarita(int a, int n)
{
    asukasmaara = a;
    neliot = n;
    cout << "Asunto maaritetty asukkaita= "<<asukasmaara<<"nelioita= "<< neliot << endl;
}

double Asunto::laskeKulutus(double h,bool printOrNot)
{
    double kulutus = h*asukasmaara * neliot;
    if(printOrNot==true)
    {
      cout << "asunnon kulutus, kun hinta="<<h<<" on "<< kulutus << endl;
    }
    return kulutus;
}
