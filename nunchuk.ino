#include <Wiichuck.h>
#include <Wire.h>

Wiichuck chuck;

void setup(){
  chuck.init(0,0);
  chuck.calibrate();

  Serial.begin(9600);
}

void loop(){
  if(chuck.poll()){
    /*
    Serial.print("x: ");
    Serial.print(chuck.accelX());
    Serial.print(" y: ");
    Serial.print(chuck.accelY());
    Serial.print(" z: ");
    Serial.println(chuck.accelZ());
    */
    /*
    Serial.print("x: ");
    Serial.print(chuck.joyX());
    Serial.print(" y: ");
    Serial.println(chuck.joyY());*/

    Serial.print("C: ");
    Serial.print(chuck.buttonC());
    Serial.print(" Z: ");
    Serial.println(chuck.buttonZ());
  }
  delay(100);
}
