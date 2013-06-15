/*
 * 03 PWR SAVR
 *
 * This example shows how to use the button
 * to put the screen in sleeping mode
 *
 * Hint: as long as your SmartWatch is plugged
 *       to the USB port, there will be no PWR SAVR mode
 *
 */
 
void setup() {
  // the few pins in here are pre-declared
}

void loop() {
  digitalWrite(BUZZER, HIGH);
  delay(100);
  digitalWrite(BUZZER, LOW);
  delay(1000);
  
  // the code to stop'em all
  if(digitalRead(BUTTON)) {
    digitalWrite(POWER, LOW);
  } 
}
