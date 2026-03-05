#include <WiFi.h>
#include <ESPmDNS.h>

const char* ssid = "Wokwi-GUEST";
const char* password = "";

WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  Serial.println("\nWiFi Connected. IP: " + WiFi.localIP().toString());

  // Setup mDNS: Access at http://esp32.local
  if (!MDNS.begin("esp32")) {
    Serial.println("Error setting up mDNS responder!");
  } else {
    Serial.println("mDNS responder started: http://esp32.local");
    // Add HTTP service to mDNS
    MDNS.addService("http", "tcp", 80);
  }

  server.begin();
}

void loop() {
  WiFiClient client = server.available();
  if (client) {
    Serial.println("New Client Connected.");
    String currentLine = "";
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        if (c == '\n') {
          if (currentLine.length() == 0) {
            // HTTP response headers
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println();
            // The actual HTML page
            client.println("<h1>ESP32-S3 Web Server</h1>");
            client.println("<p>Status: Running</p>");
            break;
          } else { currentLine = ""; }
        } else if (c != '\r') { currentLine += c; }
      }
    }
    client.stop();
    Serial.println("Client Disconnected.");
  }
}
