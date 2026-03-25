#define LED_PIN 2

// Task 1: LED Blink Variables
unsigned long prevBlinkMillis = 0;
const long blinkInterval = 1000;
int ledState = LOW;

// Task 2: Serial Heartbeat Variables
unsigned long prevSerialMillis = 0;
const long serialInterval = 5000;

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  Serial.println("--- Multi-tasking System Started ---");
}

void loop() {
  unsigned long currentMillis = millis();

  // TASK 1: Independent LED Blink
  if (currentMillis - prevBlinkMillis >= blinkInterval) {
    prevBlinkMillis = currentMillis;
    ledState = (ledState == LOW) ? HIGH : LOW;
    digitalWrite(LED_PIN, ledState);
  }

  // TASK 2: Independent Serial Heartbeat (Issue #1)
  if (currentMillis - prevSerialMillis >= serialInterval) {
    prevSerialMillis = currentMillis;
    Serial.print("[System Log] Uptime: ");
    Serial.print(currentMillis / 1000);
    Serial.println(" seconds. LED is still blinking!");
  }
}
