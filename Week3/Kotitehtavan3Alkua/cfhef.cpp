#include "cfhef.h"



Cfhef::Cfhef(string s)
{
    name = s;
    cout<<"Chef "<<name<<" konstruktori"<<endl;
}

void Cfhef::makeSalad()
{
    cout<<"Chef "<<name<<" makes salad"<<endl;
}

void Cfhef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup"<<endl;
}
