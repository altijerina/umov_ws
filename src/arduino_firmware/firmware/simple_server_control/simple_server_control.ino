#include <Servo.h>

Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;
Servo motor5;

void setup() {
  // put your setup code here, to run once:
  motor1.attach(2);
  motor1.write(0);
  delay(1000);

  motor2.attach(3);
  motor2.write(0);
  delay(1000);

  motor3.attach(4);
  motor3.write(0);
  delay(1000);

  motor4.attach(5);
  motor4.write(0);
  delay(1000);

  motor5.attach(6);
  motor5.write(0);
  delay(1000); 

  Serial.begin(115200);
  Serial.setTimeout(1);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    int angle = Serial.readString().toInt();
    motor1.write(angle);
    delay(1000);
    motor2.write(angle);
    delay(1000);
    motor3.write(angle);
    delay(1000);
    motor4.write(angle);
    delay(1000);
    motor5.write(angle);
    delay(1000);
  }

  delay(0.1);
}
