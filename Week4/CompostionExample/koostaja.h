#ifndef KOOSTAJA_H
#define KOOSTAJA_H
#include <iostream>
using namespace std;
#include "osa.h"

class Koostaja
{
public:
    Koostaja();
    ~Koostaja();

    Osa osaPinosta;

    static void staticFunctionExample();

    Osa * pOsa;
private:
    //Osa osaPinosta;


    void kaytetaanPointteriaFunctio();

};

#endif // KOOSTAJA_H
