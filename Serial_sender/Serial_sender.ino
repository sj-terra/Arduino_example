int buttonPin = 2;
void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}
void loop() {
  int state = digitalRead(buttonPin);
  if (state == HIGH) {
    Serial.write('1');
    // 버튼 눌림 전송
  } else {
    Serial.write('0');
    // 버튼 안눌림 전송
  }
  delay(50);
}
