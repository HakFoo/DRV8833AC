/*
 * DRV8833 - Library for the DRV8833 AC dual motor driver carrier.
 *
 * Library: DRV8833AC
 * File: DRV8833AC.h
 *
 * Created January 17, 2021, by HakFoo Chen
 */

#include "DRV8833AC.h"

DRV8833AC::DRV8833AC() {
    // Does nothing.
    // Use Attach().
}


void DRV8833AC::Reverse(){
    if (this->Attached) {
        // A
        digitalWrite(this->Ain1, LOW);
        digitalWrite(this->Ain2, HIGH);
        digitalWrite(this->Ain3, HIGH);
        digitalWrite(this->Ain4, HIGH);
        // b
        digitalWrite(this->Bin1, HIGH);
        digitalWrite(this->Bin2, HIGH);
        digitalWrite(this->Bin3, HIGH);
        digitalWrite(this->Bin4, LOW);
        delay(5);

        digitalWrite(this->Ain1, HIGH);
        digitalWrite(this->Ain2, HIGH);
        digitalWrite(this->Ain3, LOW);
        digitalWrite(this->Ain4, HIGH);

        digitalWrite(this->Bin1, HIGH);
        digitalWrite(this->Bin2, LOW);
        digitalWrite(this->Bin3, HIGH);
        digitalWrite(this->Bin4, HIGH);
        delay(5);

        digitalWrite(this->Ain1, HIGH);
        digitalWrite(this->Ain2, LOW);
        digitalWrite(this->Ain3, HIGH);
        digitalWrite(this->Ain4, HIGH);

        digitalWrite(this->Bin1, HIGH);
        digitalWrite(this->Bin2, HIGH);
        digitalWrite(this->Bin3, LOW);
        digitalWrite(this->Bin4, HIGH);

        delay(5);

        digitalWrite(this->Ain1, HIGH);
        digitalWrite(this->Ain2, HIGH);
        digitalWrite(this->Ain3, HIGH);
        digitalWrite(this->Ain4, LOW);

        digitalWrite(this->Bin1, LOW);
        digitalWrite(this->Bin2, HIGH);
        digitalWrite(this->Bin3, HIGH);
        digitalWrite(this->Bin4, HIGH);

        delay(5);
    }
}
void DRV8833AC::Reverse(int speed){
    if (this->Attached) {
        // A
        digitalWrite(this->Ain1, LOW);
        digitalWrite(this->Ain2, HIGH);
        digitalWrite(this->Ain3, HIGH);
        digitalWrite(this->Ain4, HIGH);
        // b
        digitalWrite(this->Bin1, HIGH);
        digitalWrite(this->Bin2, HIGH);
        digitalWrite(this->Bin3, HIGH);
        digitalWrite(this->Bin4, LOW);
        delay(speed);

        digitalWrite(this->Ain1, HIGH);
        digitalWrite(this->Ain2, HIGH);
        digitalWrite(this->Ain3, LOW);
        digitalWrite(this->Ain4, HIGH);

        digitalWrite(this->Bin1, HIGH);
        digitalWrite(this->Bin2, LOW);
        digitalWrite(this->Bin3, HIGH);
        digitalWrite(this->Bin4, HIGH);
        delay(speed);

        digitalWrite(this->Ain1, HIGH);
        digitalWrite(this->Ain2, LOW);
        digitalWrite(this->Ain3, HIGH);
        digitalWrite(this->Ain4, HIGH);

        digitalWrite(this->Bin1, HIGH);
        digitalWrite(this->Bin2, HIGH);
        digitalWrite(this->Bin3, LOW);
        digitalWrite(this->Bin4, HIGH);

        delay(speed);

        digitalWrite(this->Ain1, HIGH);
        digitalWrite(this->Ain2, HIGH);
        digitalWrite(this->Ain3, HIGH);
        digitalWrite(this->Ain4, LOW);

        digitalWrite(this->Bin1, LOW);
        digitalWrite(this->Bin2, HIGH);
        digitalWrite(this->Bin3, HIGH);
        digitalWrite(this->Bin4, HIGH);

        delay(speed);
    }
}

void DRV8833AC::Forward(){
    if (this->Attached){
        digitalWrite(this->Ain1, HIGH);
        digitalWrite(this->Ain2, HIGH);
        digitalWrite(this->Ain3, HIGH);
        digitalWrite(this->Ain4, LOW);

        digitalWrite(this->Bin1, LOW);
        digitalWrite(this->Bin2, HIGH);
        digitalWrite(this->Bin3, HIGH);
        digitalWrite(this->Bin4, HIGH);

        delay(5);

        digitalWrite(this->Ain1, HIGH);
        digitalWrite(this->Ain2, LOW);
        digitalWrite(this->Ain3, HIGH);
        digitalWrite(this->Ain4, HIGH);

        digitalWrite(this->Bin1, HIGH);
        digitalWrite(this->Bin2, HIGH);
        digitalWrite(this->Bin3, LOW);
        digitalWrite(this->Bin4, HIGH);

        delay(5);

        digitalWrite(this->Ain1, HIGH);
        digitalWrite(this->Ain2, HIGH);
        digitalWrite(this->Ain3, LOW);
        digitalWrite(this->Ain4, HIGH);

        digitalWrite(this->Bin1, HIGH);
        digitalWrite(this->Bin2, LOW);
        digitalWrite(this->Bin3, HIGH);
        digitalWrite(this->Bin4, HIGH);

        delay(5);

        digitalWrite(this->Ain1, LOW);
        digitalWrite(this->Ain2, HIGH);
        digitalWrite(this->Ain3, HIGH);
        digitalWrite(this->Ain4, HIGH);

        digitalWrite(this->Bin1, HIGH);
        digitalWrite(this->Bin2, HIGH);
        digitalWrite(this->Bin3, HIGH);
        digitalWrite(this->Bin4, LOW);

        delay(5);
    }
}
void DRV8833AC::Forward(int speed){
    if (this->Attached){
        digitalWrite(this->Ain1, HIGH);
        digitalWrite(this->Ain2, HIGH);
        digitalWrite(this->Ain3, HIGH);
        digitalWrite(this->Ain4, LOW);

        digitalWrite(this->Bin1, LOW);
        digitalWrite(this->Bin2, HIGH);
        digitalWrite(this->Bin3, HIGH);
        digitalWrite(this->Bin4, HIGH);

        delay(speed);

        digitalWrite(this->Ain1, HIGH);
        digitalWrite(this->Ain2, LOW);
        digitalWrite(this->Ain3, HIGH);
        digitalWrite(this->Ain4, HIGH);

        digitalWrite(this->Bin1, HIGH);
        digitalWrite(this->Bin2, HIGH);
        digitalWrite(this->Bin3, LOW);
        digitalWrite(this->Bin4, HIGH);

        delay(speed);

        digitalWrite(this->Ain1, HIGH);
        digitalWrite(this->Ain2, HIGH);
        digitalWrite(this->Ain3, LOW);
        digitalWrite(this->Ain4, HIGH);

        digitalWrite(this->Bin1, HIGH);
        digitalWrite(this->Bin2, LOW);
        digitalWrite(this->Bin3, HIGH);
        digitalWrite(this->Bin4, HIGH);

        delay(speed);

        digitalWrite(this->Ain1, LOW);
        digitalWrite(this->Ain2, HIGH);
        digitalWrite(this->Ain3, HIGH);
        digitalWrite(this->Ain4, HIGH);

        digitalWrite(this->Bin1, HIGH);
        digitalWrite(this->Bin2, HIGH);
        digitalWrite(this->Bin3, HIGH);
        digitalWrite(this->Bin4, LOW);

        delay(speed);
    }
}

void DRV8833AC::Right() {
    digitalWrite(this->Ain1, HIGH);
    digitalWrite(this->Ain2, HIGH);
    digitalWrite(this->Ain3, HIGH);
    digitalWrite(this->Ain4, LOW);

    digitalWrite(this->Bin1,HIGH);
    digitalWrite(this->Bin2,HIGH);
    digitalWrite(this->Bin3,HIGH);
    digitalWrite(this->Bin4,HIGH);

    delay(5);

    digitalWrite(this->Ain1, HIGH);
    digitalWrite(this->Ain2, LOW);
    digitalWrite(this->Ain3, HIGH);
    digitalWrite(this->Ain4, HIGH);

    digitalWrite(this->Bin1,HIGH);
    digitalWrite(this->Bin2,HIGH);
    digitalWrite(this->Bin3,HIGH);
    digitalWrite(this->Bin4,HIGH);

    delay(5);

    digitalWrite(this->Ain1, HIGH);
    digitalWrite(this->Ain2, HIGH);
    digitalWrite(this->Ain3, LOW);
    digitalWrite(this->Ain4, HIGH);

    digitalWrite(this->Bin1,HIGH);
    digitalWrite(this->Bin2,HIGH);
    digitalWrite(this->Bin3,HIGH);
    digitalWrite(this->Bin4,HIGH);

    delay(5);

    digitalWrite(this->Ain1, LOW);
    digitalWrite(this->Ain2, HIGH);
    digitalWrite(this->Ain3, HIGH);
    digitalWrite(this->Ain4, HIGH);

    digitalWrite(this->Bin1,HIGH);
    digitalWrite(this->Bin2,HIGH);
    digitalWrite(this->Bin3,HIGH);
    digitalWrite(this->Bin4,HIGH);

    delay(5);
}

void DRV8833AC::Left() {
    digitalWrite(this->Ain1,HIGH);
    digitalWrite(this->Ain2,HIGH);
    digitalWrite(this->Ain3,HIGH);
    digitalWrite(this->Ain4,HIGH);

    digitalWrite(this->Bin1, LOW);
    digitalWrite(this->Bin2, HIGH);
    digitalWrite(this->Bin3, HIGH);
    digitalWrite(this->Bin4, HIGH);

    delay(5);

    digitalWrite(this->Ain1,HIGH);
    digitalWrite(this->Ain2,HIGH);
    digitalWrite(this->Ain3,HIGH);
    digitalWrite(this->Ain4,HIGH);

    digitalWrite(this->Bin1, HIGH);
    digitalWrite(this->Bin2, HIGH);
    digitalWrite(this->Bin3, LOW);
    digitalWrite(this->Bin4, HIGH);


    delay(5);

    digitalWrite(this->Ain1,HIGH);
    digitalWrite(this->Ain2,HIGH);
    digitalWrite(this->Ain3,HIGH);
    digitalWrite(this->Ain4,HIGH);

    digitalWrite(this->Bin1, HIGH);
    digitalWrite(this->Bin2, LOW);
    digitalWrite(this->Bin3, HIGH);
    digitalWrite(this->Bin4, HIGH);

    delay(5);

    digitalWrite(this->Ain1,HIGH);
    digitalWrite(this->Ain2,HIGH);
    digitalWrite(this->Ain3,HIGH);
    digitalWrite(this->Ain4,HIGH);

    digitalWrite(this->Bin1, HIGH);
    digitalWrite(this->Bin2, HIGH);
    digitalWrite(this->Bin3, HIGH);
    digitalWrite(this->Bin4, LOW);


    delay(5);

}


void DRV8833AC::Stop() {
    if (this->Attached){
        digitalWrite(this->Ain1, HIGH);
        digitalWrite(this->Ain2, HIGH);
        digitalWrite(this->Ain3, HIGH);
        digitalWrite(this->Ain4, HIGH);
        digitalWrite(this->Ain1, HIGH);
        digitalWrite(this->Bin2, HIGH);
        digitalWrite(this->Bin3, HIGH);
        digitalWrite(this->Bin4, HIGH);
    }
}

void DRV8833AC::Attach(int Ain1, int Ain2, int Ain3, int Ain4,int Bin1,int Bin2,int Bin3,int Bin4) {
    // If motor is NOT attached...
    if (!this->Attached) {
        // ...Attach motor to the input pins.
        pinMode(Ain1, OUTPUT);
        pinMode(Ain2, OUTPUT);
        pinMode(Ain3, OUTPUT);
        pinMode(Ain4, OUTPUT);
        pinMode(Bin1, OUTPUT);
        pinMode(Bin2, OUTPUT);
        pinMode(Bin3, OUTPUT);
        pinMode(Bin4, OUTPUT);
        this->Ain1 = Ain1;
        this->Ain2 = Ain2;
        this->Ain3 = Ain3;
        this->Ain4 = Ain4;
        this->Bin1 = Bin1;
        this->Bin2=Bin2;
        this->Bin3=Bin3;
        this->Bin4=Bin4;

        // Show the motor is attached.
        this->Attached = true;

        // Initialize as LOW,
        digitalWrite(this->Ain1, LOW);
        digitalWrite(this->Ain2, LOW);
        digitalWrite(this->Ain3, LOW);
        digitalWrite(this->Ain4, LOW);
        digitalWrite(this->Ain1, LOW);
        digitalWrite(this->Bin2, LOW);
        digitalWrite(this->Bin3, LOW);
        digitalWrite(this->Bin4, LOW);
    }
}