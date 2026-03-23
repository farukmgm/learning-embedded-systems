#include <WiFi.h>
#include <ESPAsyncWebServer.h>

AsyncWebServer server(80);

void setup() {
  Serial.begin(115200);
  WiFi.begin("Wokwi-GUEST", "");
  
  // Define Route 1: The Home Page
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(200, "text/plain", "Hello! This is an Async Server.");
  });

  // Define Route 2: A Control Route
  server.on("/status", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(200, "application/json", "{\"status\":\"running\"}");
  });

  server.begin();
  Serial.println("Async Server Started!");
}

void loop() {
  // NOTHING here! The server runs independently in the background.
  delay(10); // Speeds up compilation.
}
