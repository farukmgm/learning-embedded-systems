#include <WiFi.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

#define LED_PIN 2

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);

  Serial.print("Connecting to WiFi...");
  WiFi.begin(ssid, password);

  // While waiting, we can still blink the LED or do other things!
  while (WiFi.status() != WL_CONNECTED) {
    delay(500); // Only blocking during the initial setup 'sync'
    Serial.print(".");
    digitalWrite(LED_PIN, !digitalRead(LED_PIN)); // Fast blink while connecting
  }

  Serial.println("\nConnected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
  
  digitalWrite(LED_PIN, HIGH); // Solid light when connected
}

void loop() {
  // Your logic here
  delay(10);
}
