void setup() {
     // 한 번만 실행됩니다
    pinMode(11, OUTPUT);
}
void loop() {
     // 전원이 켜진 동안 반복됩니다
    for (int i = 0; i <= 255; i++) {
    analogWrite(11, i);
    delay(5);
  }
}
