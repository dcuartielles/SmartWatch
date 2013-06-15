/*
 * 04 EIM SQUARE
 *
 * I am a square is a small program drawing 
 * a square on the screen. The GFX API still
 * needs some refactoring, but it is cool.
 *
 * The OLED.begin() method has to be inside setup,
 * the rest could move into the loop.
 */

void setup() {
  // initialized the OLED
  OLED.begin();
  
  // choose a funky background color
  OLED.fillScreen(OLED.Color565(0x20, 0x80, 0xC0));
  
  // draw a rectangle, just in the middle of it
  OLED.fillRect(32, 32, 128-64, 128-64, OLED.Color565(0xC0, 0x40, 0x10));
}

void loop() {
  // yeah, go low PWR
  if(digitalRead(BUTTON)) {
    digitalWrite(POWER, LOW);
  }
}
