# ⏰ Digital Clock Project

## Overview
This project is an Arduino-based **Digital Clock** that displays real-time **hours** and **minutes** using **7-segment displays**. It operates in a **12-hour format** and updates every second using Arduino’s **millis()** function, eliminating the need for an external **RTC module**. The design focuses on **multiplexing** the displays to efficiently use I/O pins and ensure a stable, smooth visual output.

## Key Features
- ⏰ **Real-Time Display**: Shows current hours and minutes accurately.
- 🔁 **12-Hour Format**: Easily customizable to 24-hour format if needed.
- 🕒 **Accurate Timing**: Uses `millis()` instead of blocking delays, improving performance.
- 🔢 **Multiplexed Displays**: Reduces required pins by updating displays sequentially.
- 🔘 **Manual Time Setting**: Pushbuttons allow adjusting time manually.
- ⚙️ **Simple Components**: No RTC module needed, only Arduino, displays, resistors, and buttons.

## Components Required
- Arduino UNO (or compatible board)
- Four 7-Segment Common Anode Displays
- 220Ω resistors (for segment current limiting)
- Pushbuttons (for setting hours and minutes)
- Breadboard and jumper wires
- USB cable for programming and power supply

## Working Principle
The Arduino internally counts milliseconds using `millis()`, and increments the minute count when 60,000 milliseconds have passed. Every second, the display updates automatically. The **7-segment displays** are multiplexed by switching them ON/OFF rapidly one after another, making it appear like all digits are ON at once. Pushbuttons are connected to Arduino pins to allow manual setting of hours and minutes with simple press detection.

## Code Structure
- **Setup**: Initializes display pins and button pins.
- **Loop**: Updates time, refreshes displays, and checks button inputs.
- **Functions**:
  - `updateTime()`: Calculates minutes and hours.
  - `refreshDisplay()`: Handles multiplexing of displays.
  - `readButtons()`: Checks if user adjusts time.

## Future Improvements
- Add a Real Time Clock (RTC) module for even higher long-term accuracy.
- Add AM/PM indicator LEDs.
- Improve time setting with long-press detection.
- Include seconds display (optional fifth display).

## Learning Outcomes
- Multiplexing displays with Arduino
- Managing real-time tasks with `millis()`
- Button interfacing and debouncing
- Basic digital electronics (common anode/cathode handling)

## Final Note
This Digital Clock project is ideal for beginners looking to strengthen their understanding of **timing control**, **display interfacing**, and **basic embedded system design** using Arduino. It is easy to build, highly customizable, and a great foundation for more advanced clock or timing projects!