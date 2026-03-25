// Blink an LED on ESP32-S3 using non-blocking millis()
#define LED_PIN 2

unsigned long previousMillis = 0;
const long interval = 1000; // Interval at which to blink (milliseconds)
int ledState = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis; // Save the last time you blinked the LED

    // Toggle the LED state
    ledState = (ledState == LOW) ? HIGH : LOW;
    digitalWrite(LED_PIN, ledState);
  }
  
  // You can put other code here, and it won't be blocked!
}
