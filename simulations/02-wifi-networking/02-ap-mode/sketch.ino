#include <WiFi.h>

const char* ap_ssid = "ESP32-S3-Config";
const char* ap_password = "password123"; // Must be at least 8 chars

void setup() {
  Serial.begin(115200);
  Serial.println("\n--- Setting up Access Point ---");

  // Start the Access Point
  WiFi.softAP(ap_ssid, ap_password);

  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);
  Serial.print("SSID: ");
  Serial.println(ap_ssid);
}

void loop() {
  // We can see how many devices are connected
  Serial.printf("Stations connected: %d\n", WiFi.softAPgetStationNum());
  delay(5000); 
}
