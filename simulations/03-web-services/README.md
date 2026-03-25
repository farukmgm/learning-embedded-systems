# 🌐 Module 3: Web Services
*Focus: mDNS resolution and serving web interfaces.*

### 📝 Key Concepts
- **mDNS (Multicast DNS):** Allows accessing the ESP32 via `esp32.local` instead of a shifting
- **Asynchronous Servers:** Handling multiple web requests without stopping the main `loop()`.
- **Event-Driven Programming:** Moving away from manual `client.available()` polling.

### 🏁 Lessons
1. [01-mdns-webserver](./01-mdns-webserver): Standard blocking server with mDNS.
2. [02-async-webserver](./02-async-webserver): Non-blocking professional server.

Note on Compilation: Due to library conflicts in Wokwi Web, this module(02-async-webserver) was compiled locally using arduino-cli compile --fqbn esp32:esp32:esp32s3.
