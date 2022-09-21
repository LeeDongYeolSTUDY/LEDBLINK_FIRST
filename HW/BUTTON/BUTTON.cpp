#include "BUTTON.h"
#include "wiringPi.h"

BUTTON::BUTTON(int pin)
{
    pinNum = pin;
    prevstate = RELEASED;
    wiringPiSetup();
    pinMode(pinNum, INPUT);

}

BUTTON::~BUTTON()
{
}

int BUTTON::getState()
{
    int curstate = digitalRead(pinNum);

    if (curstate == PUSHED && prevstate == RELEASED)
    {
        prevstate = PUSHED;
        return PUSH_ACTIVE;
    }
    if (curstate == RELEASED && prevstate == PUSHED)
    {
        prevstate = RELEASED;
        return RELEASE_ACTIVE;
    }
    return NO_ACTIVE;
}