void setup() {
  OLED.begin();
  OLED.fillScreen(OLED.Color565(0x20, 0x80, 0xC0));
  OLED.fillRect(32, 32, 128-64, 128-64, OLED.Color565(0xC0, 0x40, 0x10));
  OLED.setTextSize(3);
  OLED.println("Hey");
  OLED.println("World");
  OLED.setTextSize(1);
  OLED.println("!!!");
}

void loop() {
  digitalWrite(BUZZER, HIGH);
  delay(500);
  digitalWrite(BUZZER, LOW);
  delay(1000);
  if(digitalRead(BUTTON)) {
    digitalWrite(POWER, LOW);
  }
}