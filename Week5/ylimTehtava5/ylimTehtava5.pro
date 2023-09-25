TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        devicebaseclass.cpp \
        devicemouse.cpp \
        main.cpp \
        mydeviceui.cpp

HEADERS += \
    devicebaseclass.h \
    devicemouse.h \
    mydeviceui.h
