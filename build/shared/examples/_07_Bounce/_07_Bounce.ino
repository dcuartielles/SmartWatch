/*
 * 07 Bounce
 *
 * If the ball hits the edge of the screen, make it
 * bounce and go back
 *
 * The OLED.begin() method has to be inside setup,
 * the rest could move into the loop.
 */

int x = 0; // coordinate x
int dir = 1; // direction, 1 - right, -1 - left

void setup() {
  OLED.begin();
}

void loop() {
  // background
  OLED.fillScreen(OLED.Color565(0xC0, 0xC0, 0xC0));
  
  // draw the ball
  OLED.drawCircle(x, 64, 8, OLED.Color565(0x00, 0x00, 0x00));

  // increment the x coordinate
  x = x + dir;
  
  // make sure it doesn't leave at the end of the screen
  if (x > 128) dir = -1;
  if (x < 0) dir = 1;

  // come on, go siesta
  if(digitalRead(BUTTON)) {
    digitalWrite(POWER, LOW);
  }
}
