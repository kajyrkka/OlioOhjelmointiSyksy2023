#include "microwaveowen.h"

MicroWaveOwen::MicroWaveOwen()
{

}

void MicroWaveOwen::setHeatingPower(int p)
{
    heatingPower = p;
}

void MicroWaveOwen::setHeatingTime(int t)
{
    heatingTime = t;
}

void MicroWaveOwen::showOwenStatus()
{

     std::time(&currentTime);

     // Convert the time to a string format
     std::tm* timeInfo = std::localtime(&currentTime);
     char timeString[80];
     std::strftime(timeString, sizeof(timeString), "%Y-%m-%d %H:%M:%S", timeInfo);

     // Print the formatted time
     std::cout << "Current time: " << timeString << std::endl;
}

bool MicroWaveOwen::startHeating()
{
   return true;
}

int MicroWaveOwen::getHeatingPower()
{
    return heatingPower;
}

int MicroWaveOwen::getHeatingTime()
{
    return heatingTime;
}
