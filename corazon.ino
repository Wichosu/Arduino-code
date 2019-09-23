#include<Servo.h>

Servo tendon1;
Servo tendon2;
Servo tendon3;
Servo tendon4;
Servo tendon5;

void setup() {
  tendon1.attach(3);
  tendon2.attach(4);
  tendon3.attach(5);
  tendon4.attach(6);
  tendon1.write(0);
  tendon2.write(0);
  tendon3.write(0);
  tendon4.write(0);
  tendon5.write(0);
}

void loop() {
  tendon1.write(180);
  delay(1000);
  tendon2.write(180);
  delay(1000);
  tendon3.write(180);
  delay(1000);
  tendon4.write(180);
  delay(1000);
  tendon5.write(180);
  delay(1000);
  tendon1.write(0);
  delay(1000);
  tendon2.write(0);
  delay(1000);
  tendon3.write(0);
  delay(1000);
  tendon4.write(0);
  delay(1000);
  tendon5.write(0);
  delay(1000);

}
