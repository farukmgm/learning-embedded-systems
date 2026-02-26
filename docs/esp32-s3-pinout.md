# ESP32-S3 Pinout Reference

This document provides a reference for the pin assignments and commonly used GPIO pins for the ESP32-S3 development board, specifically the ESP32-S3-DevKitC-1.

## Pin Assignments

| Pin Number | GPIO Pin | Function          |
|------------|----------|-------------------|
| 1          | GND      | Ground            |
| 2          | 3V3      | VCC               |
| 3          | GPIO 0   | Boot strapping    |
| 4          | GPIO 1   | UART TX           |
| 5          | GPIO 3   | UART RX           |
| 6          | GPIO 21  | I2C SDA           |
| 7          | GPIO 22  | I2C SCL           |
| 8          | GPIO 23  | SPI MOSI          |
| 9          | GPIO 19  | SPI MISO          |
| 10         | GPIO 18  | SPI CLK           |
| 11         | GPIO 5   | LED_BUILTIN       |
| 12         | GPIO 2   | User button       |
| 13         | GPIO 17  | PWM Output        |

## Commonly Used GPIO Pins
- **GPIO 0**: Often used for boot configuration.
- **GPIO 2**: Commonly used for user input or button functionality.
- **GPIO 5**: Can be used to control an onboard LED.
- **GPIO 21 & 22**: Typically used for I2C communication.
- **GPIO 23, 19, 18**: Frequently used for SPI communication.

## Additional Notes
- Ensure to check the power requirements for peripherals connected to these pins.
- Review the pinout diagram from the manufacturer for more details on pin functionalities.