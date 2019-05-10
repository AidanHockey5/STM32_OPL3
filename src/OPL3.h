#ifndef __OPL3_H__
#define __OPL3_H__
#include <Arduino.h>

class OPL3
{
private:
    uint8_t IC = PA8;
    uint8_t CS = PA15;
    uint8_t A0 = PB3;
    uint8_t A1 = PB4;
    uint8_t WR = PB6;
    uint8_t RD = PB7;
public:
    OPL3(/* args */);
    ~OPL3();
    void Send(uint8_t addr, uint8_t data, bool setA1);
    void Reset();
};


#endif

/*
PB8   -   D0
PB9   -   D1
PB10 -   D2
PB11 -   D3
PB12 -   D4
PB13 -   D5
PB14 -   D6
PB15 -   D7

PB3   -   A0
PB4   -   A1

PB6   -  WR
PB7   -  RD

PA8   -   IC
PA15 -   CS
*/