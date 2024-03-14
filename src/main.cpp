#include <Arduino.h>

#define LED_RED_1 10
#define LED_YELLOW_1 9
#define LED_GREEN_1 8

#define LED_RED_2 7
#define LED_YELLOW_2 6
#define LED_GREEN_2 5

void setup() {
  pinMode(LED_RED_1, OUTPUT);
  pinMode(LED_YELLOW_1, OUTPUT);
  pinMode(LED_GREEN_1, OUTPUT);

  pinMode(LED_RED_2, OUTPUT);
  pinMode(LED_YELLOW_2, OUTPUT);
  pinMode(LED_GREEN_2, OUTPUT);
}

void loop() {
  digitalWrite(LED_GREEN_1, HIGH);
  digitalWrite(LED_YELLOW_1, LOW);
  digitalWrite(LED_RED_1, LOW);

  digitalWrite(LED_GREEN_2, LOW);
  digitalWrite(LED_YELLOW_2, LOW);
  digitalWrite(LED_RED_2, HIGH);

  delay(5000);

  digitalWrite(LED_GREEN_1, LOW);
  digitalWrite(LED_YELLOW_1, HIGH);
  digitalWrite(LED_RED_1, LOW);

  digitalWrite(LED_GREEN_2, LOW);
  digitalWrite(LED_YELLOW_2, LOW);
  digitalWrite(LED_RED_2, HIGH);

  delay(2000);

  digitalWrite(LED_GREEN_1, LOW);
  digitalWrite(LED_YELLOW_1, LOW);
  digitalWrite(LED_RED_1, HIGH);

  digitalWrite(LED_GREEN_2, HIGH);
  digitalWrite(LED_YELLOW_2, LOW);
  digitalWrite(LED_RED_2, LOW);

  delay(5000);

  digitalWrite(LED_GREEN_1, LOW);
  digitalWrite(LED_YELLOW_1, LOW);
  digitalWrite(LED_RED_1, HIGH);

  digitalWrite(LED_GREEN_2, LOW);
  digitalWrite(LED_YELLOW_2, HIGH);
  digitalWrite(LED_RED_2, LOW);

  delay(2000);
}
