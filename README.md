# 💡 LED Blinker Using Arduino UNO

**Project 01 — ADS Arduino Inventor Kit**

## 📌 Abstract

The **LED Blinker** is a beginner-friendly Arduino project that demonstrates how to control a digital output using the Arduino UNO.

In this project, an LED automatically turns **ON for 1 second** and **OFF for 1 second** continuously.

This project introduces Arduino programming, digital output pins, LEDs, resistors, breadboard connections, and basic timing using the `delay()` function.

---

## 🧰 Components Required

| Component      |    Quantity |
| -------------- | ----------: |
| Arduino UNO    |           1 |
| LED            |           1 |
| 330 Ω Resistor |           1 |
| Breadboard     |           1 |
| Jumper Wires   | As required |
| USB Cable      |           1 |

---

## 🔌 Connections

| Component       | Connection     |
| --------------- | -------------- |
| Arduino D8      | 330 Ω Resistor |
| 330 Ω Resistor  | LED Anode (+)  |
| LED Cathode (−) | Arduino GND    |

### Connection Flow

`Arduino D8 → 330 Ω Resistor → LED → GND`

> **Note:** The resistor limits the current flowing through the LED and helps protect both the LED and Arduino output pin.



## ⚙️ Working Principle

The Arduino UNO controls the LED connected to digital pin **D8**.

1. Arduino sets D8 to `HIGH`.
2. The LED turns ON.
3. Arduino waits for 1 second.
4. Arduino sets D8 to `LOW`.
5. The LED turns OFF.
6. Arduino waits for another 1 second.
7. The process repeats continuously.

---

## 💻 Arduino Code

The complete Arduino program is available in:

`LED_Blinker.ino`

---

## ▶️ How to Run

1. Connect the circuit according to the connection table.
2. Connect the Arduino UNO to the computer using the USB cable.
3. Open `LED_Blinker.ino` in Arduino IDE.
4. Select **Arduino UNO** from the board menu.
5. Select the correct COM port.
6. Click **Upload**.
7. Observe the LED.

---

## ✅ Expected Output

The LED should:

**ON → 1 second → OFF → 1 second → Repeat**

---

## 📝 Notes

* Connect the LED with the correct polarity.
* The longer LED leg is normally the **anode (+)**.
* The shorter LED leg is normally the **cathode (−)**.
* Use the supplied **330 Ω resistor** to limit LED current.
* Ensure Arduino GND is connected correctly.
* You can modify the `delay()` values in the Arduino code to change the blinking speed.

---

## 🎓 Learning Outcomes

After completing this project, you will understand:

* Arduino digital output
* LED polarity
* Current-limiting resistors
* Breadboard connections
* `pinMode()`
* `digitalWrite()`
* `delay()`
* Basic Arduino program structure

---

## 🏢 ALPHA DIGITRONIX SOLUTIONS

**ADS Arduino Inventor Kit**

**THINK • BUILD • INNOVATE**
