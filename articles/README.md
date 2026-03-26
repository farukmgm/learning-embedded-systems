# 🛠️ The Struggle Log: Articles & Deep Dives

This section of the repository is a curated collection of technical articles and the code that powered them. While the /simulations folder contains my day-to-day learning flow, **The Struggle Log** focuses on the specific hurdles encountered when moving from a virtual environment to physical silicon.
Each folder here correlates to a published post on Medium, documenting the "why" behind the code.

## 📑 Article Directory

Article Topic | Repository Folder | Medium Link | Key Challenge Solved
| :--- | :---: | :---: | :--- |
| Hardware Independence | [<>Code](./01-hardware-independence/) | [Article](https://medium.com/@farukmaisikeli_7072/hardware-vs-simulation-how-i-bridged-the-esp8266-and-esp32-s3-gap-c7dbc2f513a1) | Syncing ESP8266 hardware with ESP32-S3 simulations.|
| The Mistaken Git Bug | Coming Soon | Coming Soon | TBD | 
| First IoT Project | Coming Soon | Coming Soon | TBD |

## 🚀 Featured Challenge: The "Dual-Target" Problem

My first major hurdle was the friction of maintaining two separate codebases: one for my physical NodeMCU 1.0 (ESP-12E) and one for the Wokwi ESP32-S3 simulator.
Instead of manual edits, I implemented Conditional Compilation. This allows a single sketch to detect the board and assign pins automatically during the build process.

## 🛠️ The Workbench

To ensure the code in these articles is reproducible, I use a consistent environment across all write-ups:
  Physical Hardware: NodeMCU 1.0 (ESP-12E Module).
  Virtual Environment: Wokwi Simulator.
  Toolchain: Arduino CLI with VS Code for a streamlined, terminal-based workflow.

## 🤝 How to Use This Section

If you are reading one of my articles on Medium, you can find the exact state of the code discussed in the corresponding folder above. Each folder contains:

  `sketch.ino`: The refined, commented source code.
  
  `diagram.json`: The Wokwi configuration for instant browser-based testing.
  
  `README.md`: A brief "TL;DR" of the specific technical struggle for that article.
  
---

Maintained by Faruk — Documenting the path from `delay()` to professional embedded design.
