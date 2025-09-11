#define PIN_LED 13
unsigned int count = 0;
int toggle = 0;  // LED 상태 저장 (0=OFF, 1=ON)

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ; 
  }
}

void loop() {
  Serial.println(++count); 
  toggle = toggle_state(toggle); 
  digitalWrite(PIN_LED, toggle); 
  delay(1000); 
}

int toggle_state(int toggle) {
  return !toggle; // 0이면 1, 1이면 0으로 바꿔줌
}
