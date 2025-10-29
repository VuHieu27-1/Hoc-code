float voltage = 12400;    // mV (12.4V)
float current = 900;      // mA (dao động tự do)
int duty = 100;           // PWM duty
int mode = 1;

void setup() {
  Serial.begin(115200);
  randomSeed(analogRead(0));
}

void loop() {
  // Tăng dần điện áp nhưng có dao động nhẹ (±20mV)
  voltage += random(5, 15);         // Tăng mỗi lần 5–15mV
  voltage += random(-10, 10);       // Dao động nhẹ ±10mV
  voltage = constrain(voltage, 12400, 13800);  // Giới hạn 12.4V–13.8V

  // Dòng điện dao động tự do trong khoảng
  current = random(900, 1300);      // mA

  // Duty tăng dần nhưng có dao động nhẹ (±2)
  duty += random(1, 5);             // Tăng mỗi lần 1–4
  duty += random(-2, 2);            // Dao động nhẹ
  duty = constrain(duty, 100, 158); // Giới hạn 100–180

  Serial.printf("Mode=%d  V=%.1f mV  I=%.1f mA  duty=%d\n", mode, voltage, current, duty);
  delay(2000);
}
