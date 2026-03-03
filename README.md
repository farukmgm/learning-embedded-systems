# 🚀 Embedded Systems Learning Journey
Organized learning archive for embedded systems projects using Wokwi simulator and ESP32-S3
> **Hardware:** ESP32-S3 (Simulated via Wokwi)  
> **Goal:** Transition from basic "blocking" code to advanced WiFi and Multi-tasking.

---

<details>
  <summary>📂 <b>Click to Toggle Table of Contents</b></summary>

1. [Module 1: Timing & Inputs](#-module-1-timing--inputs)
2. [Module 2: WiFi Networking](#-module-2-wifi-networking)
3. [💡 Future Ideas & Roadmap](#-future-ideas--roadmap)
4. [🛠️ Useful Tools](#️-useful-tools)
</details>

---

## 🟢 Module 1: Timing & Inputs
*Focus: Mastering non-blocking code and reactive hardware interaction.*

- [x] **01-Delay Blink**: Initial setup using `delay()`.
  - [📁 Code](./01-timing-basics/01-delay-blink/) | [▶️ Simulate](https://wokwi.com)
- [x] **02-Millis Blink**: Refactored to `millis()` to prevent CPU blocking.
  - [📁 Code](./01-timing-basics/02-millis-blink/) | [▶️ Simulate](https://wokwi.com)
- [x] **03-Multi-Tasking**: Added an independent Serial Heartbeat task.
  - [📁 Code](./01-timing-basics/03-multi-tasking/) | [▶️ Simulate](https://wokwi.com)
- [x] **04-Button Polling**: Toggle LED state by checking button in `loop()`.
  - [📁 Code](./01-timing-basics/04-button-control/) | [▶️ Simulate](https://wokwi.com)
- [ ] **05-Interrupt Button**: (Current Goal) Instant response using Hardware Interrupts.

---

## 🔵 Module 2: WiFi Networking
*Focus: Connecting to the internet and remote communication.*

- [ ] **01-Station Mode**: Connect to `Wokwi-GUEST` and print Local IP.
- [ ] **02-AP Mode**: Set up the ESP32 as a standalone Access Point.
- [ ] **03-mDNS**: Access the ESP32 via `esp32.local` instead of IP.

---

## 💡 Future Ideas & Roadmap
*A "Scale of Preference" for features to explore later.*

- [ ] **ADC Practice**: Use a **Potentiometer** to control LED blink frequency.
- [ ] **Web Server**: Create a simple HTML page to control GPIOs.
- [ ] **Deep Sleep**: Learn to put the ESP32 to sleep to save power.

---

## 🛠️ Useful Tools
*   [Wokwi Simulator](https://wokwi.com)
*   [ESP32-S3 Datasheet](./docs/esp32-s3-pinout.md)
*   [Git Cheat Sheet](https://education.github.com)

---
*Created with ❤️ by [farukmgm](https://github.com)*
