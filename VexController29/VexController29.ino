#include <Servo.h>

int MotorPin = 11; //Vex29 controller is connected to this pin

Servo Motor;

void setup() {
  // put your setup code here, to run once:
  pinMode(MotorPin, OUTPUT);
  Motor.attach(MotorPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  MotorControl(100);
  delay(1000);
  MotorControl(-100);
  delay(1000);
}

int MotorControl(int value){
  Motor.write(map(value,-100,100,1000,2000));
}
