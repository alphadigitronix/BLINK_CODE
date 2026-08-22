/*
 * ALPHA DIGITRONIX SOLUTIONS
 * ADS Arduino Inventor Kit
 *
 * PROJECT 01: LED BLINKER
 *
 * LED Anode (+)  -> D8 through 330 ohm resistor
 * LED Cathode (-) -> GND
 */

#define LED_PIN 8

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);

  digitalWrite(LED_PIN, LOW);
  delay(1000);
}