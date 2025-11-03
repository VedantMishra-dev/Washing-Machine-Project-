# 🧠 Microcontroller-Based Washing Machine Simulation using PIC16F877A

### 🎓 Internship Project | Emertxe Information Technologies  
Developed by [**Vedant Mishra**](https://github.com/VedantMishra-dev)

---

## 📘 Overview
This project simulates a **washing machine control system** using the **PIC16F877A microcontroller**.  
It replicates real-world washing machine functionality — from program selection to water level control and start/stop operations — entirely through **software simulation** in **PicsimLab**.  

The system uses **Embedded C** and a **state machine-based architecture**, integrating peripherals like **digital keypad**, **CLCD**, **buzzer**, and **fan** to create a realistic embedded appliance model.

---

## ⚙️ Features

- User interface via **Digital Keypad**
- **16x2 CLCD Display** for real-time system messages
- Multi-screen system using **state machine logic**
- **Fan and buzzer control** to simulate washing actions
- Implemented **short press** and **long press** detection for key functions
- Fully simulated on **PicsimLab**, no physical hardware required

---

## 🧩 System Architecture

```plaintext
 ┌──────────────────────────────────────────────┐
 │               PIC16F877A MCU                 │
 │----------------------------------------------│
 │ Inputs: Digital Keypad (SW1–SW6)             │
 │ Outputs: CLCD (16x2), Fan (Motor), Buzzer    │
 │----------------------------------------------│
 │     Software States (State Machine Logic)    │
 │  1️⃣ Power-On Screen                         │
 │  2️⃣ Washing Program Selection               │
 │  3️⃣ Water Level Selection                   │
 │  4️⃣ Start / Stop Control                    │
 │  5️⃣ Washing Cycle Execution (Fan/Buzzer)    │
 └──────────────────────────────────────────────┘
