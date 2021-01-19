#include <DRV8833AC.h>

DRV8833AC driver = DRV8833AC();

// Left motor A,Right B.
const int Ain1, Ain2, Ain3, Ain4, Bin1, Bin2, Bin3, Bin4;

void setup(){
    Serial.begin(115200);

    while (!Serial);

    driver.Attach(Ain1,Ain2,Ain3,Ain4,Bin1,Bin2,Bin3,Bin4);

    delay(200);
}

void loop(){
    driver.Forward();

}
