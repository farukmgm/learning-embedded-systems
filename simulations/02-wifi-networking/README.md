# 🔵 Module 2: WiFi Networking
This module covers the core wireless capabilities of the ESP32-S3, transitioning from simple connections to managed network failover.

### 📝 Key Concepts Learned
- **Station (STA) Mode:** Connecting as a client to an existing Access Point (Router).
- **Access Point (AP) Mode:** Hosting a local network for direct device-to-device communication.
- **WiFi Management:** Using `WiFiMulti` to store multiple sets of credentials for automatic roaming.
- **Wokwi Virtual Gateway:** Simulating internet connectivity using the `Wokwi-GUEST` SSID.

### 🏁 Lessons Overview
1. [01-station-mode](./01-station-mode): Basic connection and IP acquisition.
2. [02-ap-mode](./02-ap-mode): Creating a standalone network (`ESP32-S3-Config`).
3. [03-wifimulti](./03-wifimulti): Handling redundant connections with a priority list.

### 🛠️ Hardware Note
All simulations utilize the internal WiFi radio of the ESP32-S3. No external components were required for these logic tests.
