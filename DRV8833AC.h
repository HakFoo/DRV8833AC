/*
 * DRV8833 - Library for the DRV8833 AC dual motor driver carrier.
 *
 * Library: DRV8833AC
 * File: DRV8833AC.h
 *
 * Created January 17, 2021, by HakFoo Chen
 */

#ifndef _DRV8833AC_H_
#define _DRV8833AC_H_

#include <Arduino.h>

class DRV8833AC{

public:
    // Constructor for the class.
    DRV8833AC();

    // Motor control functions.
    void Reverse();
    void Reverse(int speed);

    void Forward();
    void Forward(int speed);

    void Left();
    void Right();

    void Stop();

    // Functions to attach motors.
    void Attach(int Ain1,int Ain2,int Ain3, int Ain4,int Bin1,int Bin2,int Bin3,int Bin4);

private:
    // Fields for the class.
    int Ain1,Ain2,Ain3,Ain4,Bin1,Bin2,Bin3,Bin4;
    boolean Attached = false;

};

#endif //_DRV8833AC_H_