#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{
    pDeviceMouse = new DeviceMouse;
}

MyDeviceUI::~MyDeviceUI()
{
   delete pDeviceMouse;
   pDeviceMouse = nullptr;
}

void MyDeviceUI::uiShowMenu()
{
    short valinta;
    cout << "DEVICE MENU" <<endl;
    cout << "===========" <<endl;
    cout << "1 = Set Mouse Information "<< endl;


    cout << "choose:"<< endl;
    cin >> valinta;

    cout<< "valitsit"<<valinta<<endl;
}
