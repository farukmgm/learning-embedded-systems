#include <WiFi.h>
#include <WiFiMulti.h>

WiFiMulti wifiMulti;

void setup() {
  Serial.begin(115200);
  
  // Add multiple networks (Wokwi only simulates the guest one)
  wifiMulti.addAP("MyHomeWiFi", "password123");
  wifiMulti.addAP("OfficeWiFi", "securePass");
  wifiMulti.addAP("Wokwi-GUEST", "");

  Serial.println("Connecting WiFi...");
}

void loop() {
  if (wifiMulti.run() == WL_CONNECTED) {
    static bool printed = false;
    if (!printed) {
      Serial.print("Connected to: ");
      Serial.println(WiFi.SSID());
      Serial.print("IP: ");
      Serial.println(WiFi.localIP());
      printed = true;
    }
  } else {
    Serial.println("WiFi not connected...");
    delay(1000);
  }
}
