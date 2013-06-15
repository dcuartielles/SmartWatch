/*
 * 01 BUZZ the Buzzer Out
 */
 
void setup() {
  // the few pins in here are pre-declared
}

void loop() {
  digitalWrite(BUZZER, HIGH);
  delay(100);
  digitalWrite(BUZZER, LOW);
  delay(1000);
}
