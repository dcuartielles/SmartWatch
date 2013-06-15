/*
 * 02 B2B - Button To Buzz
 */
 
void setup() {
  // the few pins in here are pre-declared
}

void loop() {
  if(digitalRead(BUTTON)) {
    digitalWrite(BUZZER, HIGH);
  } else {
    digitalWrite(BUZZER, LOW);
  }
}
