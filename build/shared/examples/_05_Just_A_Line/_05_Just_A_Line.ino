/*
 * 05 Just a line
 *
 * Check the line primitive, for the fun of it
 * we adopted the Processing color schema
 *
 * R * E * P * R * E * S * E * N * T
 *
 * The OLED.begin() method has to be inside setup,
 * the rest could move into the loop.
 */

void setup() {
  OLED.begin();
  OLED.fillScreen(OLED.Color565(0xC0, 0xC0, 0xC0));
  OLED.drawLine(0, 0, 128, 128, OLED.Color565(0x00, 0x00, 0x00));
}

void loop() {
  // come on, go siesta
  if(digitalRead(BUTTON)) {
    digitalWrite(POWER, LOW);
  }
}
