# **Green Flow – Smart Traffic Optimization System**

Green Flow is a hardware-based intelligent traffic management prototype designed to improve vehicle flow across general and service streets, especially in crowded cities such as Riyadh, Jeddah, Dammam, and Al-Khobar. Using sensors, adaptive timing logic, and microcontroller-based control, the system dynamically adjusts traffic signals based on real traffic conditions—reducing waiting time, preventing unnecessary stops, and enhancing overall road safety.

## **System Overview**

Traditional traffic lights operate on fixed timers, regardless of vehicle presence. This leads to delays, unnecessary red lights, and increased accident risks. Green Flow introduces a smarter, sensor-based approach.

### General Street

Operates on a programmed cycle with timing adjustments based on real vehicle flow and detected traffic density.
### Service Street

Analyzes the status of the General Street and receives its signal (red/yellow/green) based on the main road traffic.The goal is to reduce risky sudden merges and minimize accidents caused by switching routes.

### Combined Logic

Both streets operate together to achieve:
* Reduced accident probability
* Shorter waiting time on low-traffic lanes
* Priority for the main (general) road
* Less idle time on red signals
* Overall smoother, safer traffic flow


## **How the System Works**

1. **Sensors** detect vehicle movement on both street types.
2. **Microcontroller logic** (Arduino-based) decides signal switching.
3. **General Street** follows a primary cycle with adaptive timing.
4. **Service Street** adjusts its color signals based on main-road analysis.
5. **LED signals** switch automatically according to lane priority and sensor states.

This approach balances efficiency,energy saving, and traffic responsiveness.

## **Hardware Components**

* Arduino Uno (microcontroller)
* Infrared / Ultrasonic vehicle detection sensors
* LEDs (Red, Yellow, Green)
* Resistors
* Wires & breadboard
* Power source
* Dual traffic-signal setup (General Street & Service Street)


## **Demo Video**
A live demonstration of the system prototype can be viewed here:
https://drive.google.com/file/d/13TIqSkRGOM9jObN_4wgO9IAUMzUO6Trk/view

## **Project Structure**
- Code:
1. GeneralStreet.ino
2. ServiceStreet.ino
- Diagrams:
1. Block Diagram.png
2. General Circuit Design.png
3. Service Circuit Design.png

## **Future Improvements**

* Add real-time traffic density measurement
* Integrate IoT dashboard for monitoring signal status
* Add emergency-vehicle priority detection
* Scale system to multi-lane or multi-intersection control
* Optimize timing using machine learning (predictive switching)
