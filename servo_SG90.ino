/*
 * SG90 servo motor
 * 
 * library is built in
 * 
 * wires:
 * brown - GND 
 * red - VCC (3.3 or 5VDC)
 * orange - signal
 * 
 * min/max angles are 0 to 180
 */
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards


void setup() {  // start serial port
  Serial.begin(115200);
  Serial.print(F("\n\n SG90 servo motor test\n\n"));

  // attaches the servo on D1 to the servo object
  myservo.attach(5);
  myservo.write(0);
  delay(2000);
}


void loop() {
  Serial.println("180");
  myservo.write(180);
  delay(2000);
  
  Serial.println("0");
  myservo.write(0);
  delay(2000);
}
