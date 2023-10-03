#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "cfhef.h"

class ItalianChef:public Cfhef
{
public:
    ItalianChef(string s);
    string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
