#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H
#include "devicebaseclass.h"
#include <iostream>
using namespace std;

enum displayTyypit
{
    HD,
    SD
};

class DeviceDisplay:public DeviceBaseClass
{
public:
    DeviceDisplay();
    void setDisplayResolution();
    short getDisplayResolution();

private:
    short displayResolution;
    displayTyypit displayType;
};

#endif // DEVICEDISPLAY_H
