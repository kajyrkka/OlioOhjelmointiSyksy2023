#ifndef MICROWAVEOWEN_H
#define MICROWAVEOWEN_H
#include <iostream>
#include <ctime>
using namespace std;

class MicroWaveOwen
{
public:
    MicroWaveOwen();
    void setHeatingPower(int);
    void setHeatingTime(int);
    void showOwenStatus();
    bool startHeating();




private:
    int getHeatingPower();
    int getHeatingTime();

    int heatingPower;
    int heatingTime;


protected:
    std::time_t currentTime;

};

#endif // MICROWAVEOWEN_H
