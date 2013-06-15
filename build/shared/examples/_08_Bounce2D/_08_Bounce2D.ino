/*
 * 07 Bounce2D
 *
 * Make it move until you get tired of it
 *
 * The OLED.begin() method has to be inside setup,
 * the rest could move into the loop.
 */

#define ARM_MATH_CM3
#include <arm_math.h>

//float PI = 3.14;
float x = 0; // coordinate x
float y = 0; // coordinate y
float angle = PI/3; // angle of the movement (30 deg)

void setup() {
  OLED.begin();
}

void loop() {
  // background
  OLED.fillScreen(OLED.Color565(0xC0, 0xC0, 0xC0));
  
  // draw the ball
  OLED.drawCircle(x, y, 8, OLED.Color565(0x00, 0x00, 0x00));

  // increment the coordinates
  x = x + sin(angle);
  y = y + cos(angle);
  
  // make sure it doesn't leave at the end of the screen
  if (x > 128) angle = PI/2 - angle;
  if (x < 0) angle = PI/2 - angle;
  if (y > 128) angle = PI/2 + angle;
  if (y < 0) angle = PI/2 + angle;

  // come on, go siesta
  if(digitalRead(BUTTON)) {
    digitalWrite(POWER, LOW);
  }
}
