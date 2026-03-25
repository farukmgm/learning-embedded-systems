// 1. PIN DEFINITIONS
#ifdef ARDUINO_ARCH_ESP32
  // Settings for Wokwi Simulation (ESP32-S3)
  #define BOARD_TYPE "Virtual ESP32-S3"
  #define LED_PIN 2
  #define boardBaud 115200 
#elif defined(ARDUINO_ARCH_ESP8266)
  // Settings for Physical Hardware (ESP8266)
  #define BOARD_TYPE "Physical ESP8266"
  #define LED_PIN 4
  #define boardBaud 74880 
#endif

void setup() {
  Serial.begin(boardBaud);
  pinMode(LED_PIN, OUTPUT);
  
  Serial.print("Booting up on: ");
  Serial.println(BOARD_TYPE);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
}