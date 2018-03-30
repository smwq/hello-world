#include <SoftwareSerial.h>
#include <Servo.h>
int Finger1 = 0;
int Finger2 = 1;
int Finger3 = 2;
int Finger4 = 3;
int Finger5 = 4;
void setup()
{
  Serial.begin(9600);
}
 void loop()
 {
  byte servoValue1;
  byte servoValue2;
  byte servoValue3;
  byte servoValue4;
  byte servoValue5;
  int FingerV1 = analogRead(Finger1);
  int FingerV2 = analogRead(Finger2);
  int FingerV3 = analogRead(Finger3);
  int FingerV4 = analogRead(Finger4);
  int FingerV5 = analogRead(Finger5);
  byte servoVal1 = map(FingerV1,550, 700, 0, 180);
  byte servoVal2 = map(FingerV2,550, 700, 0, 180);
  byte servoVal3 = map(FingerV3,550, 700, 0, 180);
  byte servoVal4 = map(FingerV4,550, 700, 0, 180);
  byte servoVal5 = map(FingerV5,550, 700, 0, 180);
  Serial.write(servoVal1);
  Serial.write(servoVal2);
  Serial.write(servoVal3);
  Serial.write(servoVal4);
  Serial.write(servoVal5);
  delay(100);
}
