//
//  LedIndicator.h
//  
//
//  Created by Alex Noyanov on 11/10/15.
//  Mail: alex.noyanov@gmail.com
//

// All files is under GNU license

#ifndef ____LedIndicator__
#define ____LedIndicator__

//#include <iostream>


#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class LedIndicator
{

public:
    // Numbers:
    void One();
    void Two();
    void Three();
    void Four();
    void Five();
    void Six();
    void Seven();
    void Eight();
    void Nine();
    void Zero();
    void Off();
    // Letters:
    void A();
    void b();
    void C();
    void d();
    void E();
    void f();
    void G();
    void P();
    void H();
    void J();
    void U();
    void L();
    // Small "o" or degree symbol:
    void oUp();
    void oDn();
    // For setup and simple usage:
    void PinsOut();        // Set pins
    void PrintNum(int i);  // For printing numbers
    void setPins(int Rup , int Rdwn, int Dwn,int Mdl, int Lup,int Lwnd,int Up);   // To set up pins
};

#endif /* defined(____LedIndicator__) */

