#include "LED.h"
#include "wiringPi.h"

LED::LED(int pin)
{
    pinNum = pin;
    ledstate = 0;
    wiringPiSetup();
    pinMode(pinNum, OUTPUT);
}

LED::~LED()
{
}

void LED::on()
{
    ledstate = 1;
    digitalWrite(pinNum, ledstate);
}

void LED::off()
{
    ledstate = 0;
    digitalWrite(pinNum, ledstate);
}

void LED::toggle()
{
    ledstate = ledstate^1;
    digitalWrite(pinNum, ledstate);
}