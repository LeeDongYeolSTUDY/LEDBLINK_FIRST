#include <iostream>
#include <wiringPi.h>
#include "BUTTON.h"
#include "LED.h"

int main()
{
    LED modeLight(21);  //LED Class안에서 modeLight라고 21번핀을 지정하겠다.
    LED playLight(22);
    LED *warningLight = new LED(23);

    BUTTON modeButton(27);
    BUTTON playButton(28);
    BUTTON warningButton(29);

    std::cout << "led1 object\n";
    
    while(1)
    {
        if (modeButton.getState() == RELEASE_ACTIVE)
        {
            modeLight.toggle();
        }
        if (playButton.getState() == RELEASE_ACTIVE)
        {
            playLight.toggle();
        }
        if (warningButton.getState() == PUSH_ACTIVE)
        {
            warningLight->toggle();
        }
        delay(50);
    }
    delete warningLight;
    return 0;

}