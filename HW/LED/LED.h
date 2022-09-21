#ifndef LED_H
#define LED_H

#pragma once

class LED
{
public:
    LED(int pin);
    virtual ~LED();
    void on();
    void off();
    void toggle();

private:
    int pinNum;
    int ledstate;

};

#endif