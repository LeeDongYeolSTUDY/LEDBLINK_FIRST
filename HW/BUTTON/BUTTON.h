#ifndef BUTTON_H
#define BUTTON_H

#pragma once
#include <wiringPi.h>

enum {NO_ACTIVE, PUSH_ACTIVE, RELEASE_ACTIVE};

class BUTTON
{
public:
    BUTTON(int pin);
    virtual ~BUTTON();
    int getState();

private:
    const int PUSHED = 0;
    const int RELEASED = 1;
    int prevstate;
    int pinNum;

};

#endif