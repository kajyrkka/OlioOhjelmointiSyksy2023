#include "koostaja.h"

int main()
{





    Koostaja * ptr;


    ptr = new Koostaja;
    ptr->pOsa->printLuku(); // 10
    ptr->osaPinosta.printLuku(); // 20
    Koostaja::staticFunctionExample();

    delete ptr;
    ptr = nullptr;
    return 0;
}
