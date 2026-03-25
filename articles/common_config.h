#if defined(ARDUINO_ESP8266_NODEMCU)
  // Physical NodeMCU 1.0 (ESP-12E) logic
  #define LDR_PIN A0 
  #define STATUS_LED D6
#elif defined(ARDUINO_ESP32_S3_DEV)
  // Wokwi ESP32-S3 Simulation logic
  #define LDR_PIN 34
  #define STATUS_LED 12
#endif
