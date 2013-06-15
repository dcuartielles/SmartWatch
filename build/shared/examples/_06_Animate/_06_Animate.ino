/*
 * 06 Animate
 *
 * Make a small ball move inside the square
 *
 * The OLED.begin() method has to be inside setup,
 * the rest could move into the loop.
 */

// coordinate x
int x = 0;

void setup() {
  OLED.begin();
}

void loop() {
  // background
  OLED.fillScreen(OLED.Color565(0xC0, 0xC0, 0xC0));
  
  // draw the ball
  OLED.drawCircle(x, 64, 8, OLED.Color565(0x00, 0x00, 0x00));

  // increment the x coordinate
  x++;
  
  // make sure it doesn't leave at the end of the screen
  if (x > 128) x = 0;

  // come on, go siesta
  if(digitalRead(BUTTON)) {
    digitalWrite(POWER, LOW);
  }
}
