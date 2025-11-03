# 🧠 Microcontroller-Based Washing Machine Simulation using PIC16F877A  

### 🎓 Internship Project | Emertxe Information Technologies  
Developed by [**Vedant Mishra**](https://github.com/VedantMishra-dev)  

---

## 📘 Overview  
This project demonstrates a **simulation of a washing machine control system** using the **PIC16F877A microcontroller**.  
It replicates real-world washing machine functionalities, including **program selection**, **water level adjustment**, and **start/stop control**, implemented completely in software using **PicsimLab**.  

The system is programmed in **Embedded C** and follows a **state machine-based architecture**, making it modular, structured, and realistic.  
It integrates key peripherals such as a **digital keypad**, **16x2 CLCD display**, **buzzer**, and **fan**, all controlled by the microcontroller and simulated without actual hardware.  

---

## ⚙️ Features  
- Power-on sequence with LCD boot animation.  
- **Digital keypad input** for navigation and selection.  
- **Short press** for scrolling and **long press** for screen transitions.  
- Displays washing programs, water levels, and start/stop instructions on a **CLCD**.  
- Controls **buzzer** and **fan** to simulate washing actions and alerts.  
- Uses **Timer2** for timing and delay operations.  
- Developed and simulated fully in **MPLAB X IDE** and **PicsimLab** — no physical components required.  

---

## 🧠 System Architecture  

The washing machine simulation is structured into logical modules, each performing a dedicated function. The **state machine logic** in the main program transitions the system from one operational state to another based on user input.

### 🔹 System Flow:
1. **Power-On Screen:** Displays “Press Key5 to Power On Washing Machine.”  
2. **Washing Program Screen:** User scrolls through washing programs using SW4 (short press).  
3. **Water Level Screen:** After a long press on SW4, user sets desired water level.  
4. **Start/Stop Screen:** Displays controls (SW5 to Start, SW6 to Stop).  
5. **Running State:** Fan and buzzer simulate active washing operation.  

### 🔹 Functional Modules:
- **Digital Keypad Interface:** Handles short/long press logic and user input detection.  
- **CLCD Module:** Displays operational states, instructions, and feedback.  
- **Timer Module:** Manages process delays and event timing.  
- **Fan and Buzzer:** Simulate real-time washing actions and alerts.  
- **Main Control Logic:** Integrates all modules under a centralized state machine.

---

## 💻 Implementation Details  

The project is divided into well-defined C source files and headers for modularity and clarity.

- **main.c:** Contains main logic, system initialization, and state transitions.  
- **digital_keypad.c / .h:** Manages keypad scanning, press detection, and debounce handling.  
- **clcd.c / .h:** Controls the LCD initialization and string/character display functions.  
- **timers.c / .h:** Configures Timer2 for timing operations.  
- **Washing_Machine_Function_def.c:** Defines program flow screens, water level selection, and fan/buzzer operations.  
- **isr.c:** Handles interrupt routines (if required).  

All modules are integrated into the `main.c` file to form a complete working system.

---

## 🧰 Tools & Technologies  

- **Microcontroller:** PIC16F877A  
- **Programming Language:** Embedded C  
- **Development IDE:** MPLAB X IDE  
- **Compiler:** XC8 Compiler  
- **Simulation Tool:** PicsimLab  
- **Display:** 16x2 Character LCD  
- **Input Device:** 6-key Digital Keypad  
- **Output Devices:** Fan (Motor Simulation), Buzzer  

---

## 📁 Repository Structure  

Washing_Machine_Project.X/
┣ build/
┣ dist/
┣ nbproject/
┣ Makefile
┣ main.c
┣ main.h
┣ clcd.c
┣ clcd.h
┣ digital_keypad.c
┣ digital_keypad.h
┣ timers.c
┣ timers.h
┣ Washing_Machine_Function_def.c
┣ Washing_Machine_head.h
┗ isr.c


Each module handles a specific function and contributes to the complete washing machine simulation.

---

## ▶️ Project Demonstration  

🎥 **YouTube Project Demo:**  
[![Watch Demo](https://img.youtube.com/vi/djb3Tf6aMFU/0.jpg)](https://youtu.be/djb3Tf6aMFU?si=8OqAhlC1OUXArqpZ)

Click the image above to watch the complete washing machine simulation video demonstration.  
The video covers power-on initialization, washing program selection, water level configuration, and fan/buzzer operation in real-time simulation.

---

## 📊 Internship Presentation  

🎞️ **Emertxe Internship Presentation:**  
[View My Project Presentation (PowerPoint)](https://lenektech-my.sharepoint.com/:p:/p/vmishra/EbA64lbnE4lLiUXkkKS19c4BuIp4oYQ3eLiGpjMkTxw_3w?e=6EI093)

This presentation explains the project’s design, implementation, tools used, and a summary of learning outcomes during the internship.

---

## 🧾 Conclusion  

This project demonstrates the implementation of an **embedded control system** that accurately replicates the functionality of a washing machine.  
It provided hands-on experience in **microcontroller programming**, **peripheral interfacing**, and **real-time control logic design**.  
Through this internship at **Emertxe Information Technologies**, I gained practical exposure to **Embedded C development**, **system design**, and **simulation using PicsimLab**, bridging theoretical knowledge with real-world embedded applications.

---

## 👨‍💻 Author  

**Vedant Mishra**  
[GitHub Profile](https://github.com/VedantMishra-dev)  

---

## 🪪 License  
This project is developed as part of the **Emertxe Embedded Systems Internship** and is intended for **educational and learning purposes only**.
