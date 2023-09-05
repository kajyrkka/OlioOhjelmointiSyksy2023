#include <iostream>
#include "microwaveowen.h"


using namespace std;

int main()
{

    MicroWaveOwen M;
    M.setHeatingPower(100);
    M.setHeatingTime(30);
    M.showOwenStatus();


    return 0;
}
