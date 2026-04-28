#include <Servo.h>

Servo barrier;

int ir1 = 2;
int ir2 = 3;

void setup() {
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  barrier.attach(9);
  barrier.write(0);
}

void loop() {
  if (digitalRead(ir1) == LOW) {
    barrier.write(90);
    delay(3000);
  }
  if (digitalRead(ir2) == LOW) {
    barrier.write(0);
    delay(3000);
  }
}
