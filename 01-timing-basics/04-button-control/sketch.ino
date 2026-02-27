#define LED_PIN 2
#define BUTTON_PIN 4

bool ledEnabled = true;
unsigned long prevMillis = 0;
const long interval = 1000;
int ledState = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP); // Internal pull-up resistor
}

void loop() {
  // Check if button is pressed (LOW because of PULLUP)
  if (digitalRead(BUTTON_PIN) == LOW) {
    ledEnabled = !ledEnabled; 
    delay(200); // Simple "dirty" debounce for now
  }

  if (ledEnabled) {
    unsigned long currentMillis = millis();
    if (currentMillis - prevMillis >= interval) {
      prevMillis = currentMillis;
      ledState = (ledState == LOW) ? HIGH : LOW;
      digitalWrite(LED_PIN, ledState);
    }
  } else {
    digitalWrite(LED_PIN, LOW); // Turn off if disabled
  }
}
