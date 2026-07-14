#include <Servo.h>

Servo myServo;

void setup() {
  Serial.begin(9600);
  myServo.attach(11);
  Serial.println("Servo Control");
  Serial.println("Enter angle (0~180):");
}

void loop() {
  if (Serial.available()) {
    int angle = Serial.parseInt();
         // 입력 버퍼 비우기
      while (Serial.available()) {
      Serial.read();
    }
    if (angle >= 0 && angle <= 180) {
      myServo.write(angle);
      Serial.print("Move to : ");
      Serial.print(angle);
      Serial.println(" deg");
    } else {
      Serial.println("Invalid angle! (0~180)");
    }
  }
}
