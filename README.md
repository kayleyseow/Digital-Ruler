# Digital Ruler
**[Kayley Seow](https://github.com/kayleyseow)'s [APCSA](https://github.com/kayleyseow/APCSA) winter break project.  
Project presentation slide deck [here](https://docs.google.com/presentation/d/1VwwwHEZ5v6SXcvky2djR5PzdAo9MC7fsc8c-qGKIjgI/edit?usp=sharing).**
## Introduction
**TL;DR I made a ruler.**  
### About
This repository contains my code to make the Digital Ruler using an Arduino Uno, a four seven-segment display, and a HC-SR04 (an ultrasonic ranging module) sensor. The entirety of the project was created and built during winter break as my submission for Project GradeBoost.
### Repository Navigation
**Here is a quick guide to the [Digital Ruler](https://github.com/kayleyseow/Digital-Ruler) repository. If you are looking for a specific file or want to know what each file is for, this should help you.**
- [```DigitalRuler.ino```](https://github.com/kayleyseow/Digital-Ruler/blob/master/DigitalRuler.ino) is the main file containing the code I used to run my fully assembled Digital Ruler. Should be run using the Arduino IDE.
- [```HCSR04Test.ino```](https://github.com/kayleyseow/Digital-Ruler/blob/master/Accessory%20Tests/HCSR04Test.ino) is code I write to test out and calibrate my HC-SR04 sensor to see if it was working. I added line 24 because my sensor was having trouble calibrating and I will explain why I did that later — you might want to consider doing something similar with your sensor.
- [```Test1.ino```](https://github.com/kayleyseow/Digital-Ruler/blob/master/Accessory%20Tests/Four%20Seven-Segment%20Display%20Tests/Test1.ino) is the first four seven-segment test file. This file tests the digits one at a time.
- [```Test2.ino```](https://github.com/kayleyseow/Digital-Ruler/blob/master/Accessory%20Tests/Four%20Seven-Segment%20Display%20Tests/Test2.ino) is the second four seven-segment test file. This file tests all the digits together.
### Materials List
- 1 Arduino Uno
  - I borrowed it from Mr. B, which came in a kit from [Vilros](vilros.com).  
- 1 Breadboard
- 1 Four Seven-Segment Display
- 1 HC-SR04 Sensor
- 8 4-Band Resistors
  - From my kit, I chose the resistors with 330 Ohms with ± 5% Tolerance (Orange Orange Brown Gold)
  - You need 8 to control the 8 different parts of the Seven-Segment Display (7 segments + 1 for decimal point)
- 14 Jumper Wires (MM)
## Project Presentation
### Arduino Interface
- Arduino has its own open source IDE which sends code to the connected Arduino board
- I coded my project in C++, because that is the language which the Arduino can run on (it was a bit of a challenge for me)
- In the code, there is a void setup which sets out all the values needed (e.g. which pins are for what)
- There is a void loop which runs the code inside it indefinitely, or until the Arduino is stopped
### Accessories - 4 seven segment display 
- Need voltage in order to run
- +-, one is low, other is high
- In order to pass a current through, it has to be connected to positive
- Connected to pins, which give it the voltage
- Resistors help to determine brightness, so a large resistor is not as bright, vice versa
  - Explained by the equation current = voltage/resistance
- The main thing about this display is to control the current
- The logic behind a four seven segment display is that you need to switch between all the digits really quickly in order to give the illution of a stable display, something like a flipbook
### Accessories - HC-SR04 
- Measures from 2cm to 4 meters
- Receives and puts out signals to detect the length
- Trigger pin sends waves out and asks the unit to start to measure 
- When the wave comes back it is recorded by echo pin and sent to the board, which measures out the actual distance
- The the input is a 10 microseconds ttl pulse
  - By the way, ttl stands for transistor transistor logic
- Needs 5 volts to run, thus connected to the five volt pin
### The Process: 
### 1. Setup and test the HC-SR04 sensor
- The echo and the trigger pins are connected to pins 2 and 3
- The ground and voltage is also connected to the ground and the 5 volt
- My setup: I ran the code and marked tape along my desk in order to test out the sensor
- Problems with the sensor input
  - The serial output for the original code was printing out wack values so I had to measure out distances, gather the values, and calibrate my code using resulting ratio
  - Graph of actual distance vs. distance appearing on serial was linear, which meant I was able to get a ratio
  - I averaged out the ratios and got my average adjustment factor, which I multiplied the actual distance by
  - The logic: measured distance (distance appearing on serial) divided by average adjustment factor ≈ actual distance 
  - When I do not divide the distance by the calculated average adjustment factor, the values that are displayed are not correct (you  can tell by the outrageous numbers)
  - When I divide the distance by the calculated average adjustment factor, the values that are displayed are much more reasonable 
### 2. Setup and test the 4 seven-segment display
- I tested the display separate to the ultrasonic sensor to see if it was working
- Tested two different ways, the first being testing the first digit and then testing the digits all together
- I did not run into any problems with my 4 seven-segment display
### 3. Combine the two together
- I had problems with the display
- First, I was constricted to the 14 pins on the Arduino board
- The ultrasonic ranging module would not function if I used pins 0 or 1
- The display could not use pins 0 and 1 due to the interference from the ultrasonic ranging module thus, with two less pins to work with, I had to sacrifice the first digit and the decimal point 
- The display can only display 1 digit at a time, so in order to create the illusion of a stable 4 digit display, I need to turn on one at a time and repeat at an extremely fast rate
### 4. THE RULER FINALLY WORKS!!
- What I learned:
  - How to code C++ in order to run the Arduino
  - The debugging process for both hardware and software is extremely long and tedious, but the results are often rewarding 
  - How to work around my limitations, like the limited number of pins on my board
  - Deeper knowledge of how my accessories work and how to troubleshoot them if problems arise and a new understanding of how my accessories interact with each other and the board
### Bibliography
- https://www.makerguides.com/hc-sr04-arduino-tutorial/
- https://www.electronics-tutorials.ws/blog/7-segment-display-tutorial.html
- [Arduino Board Components Explanation](https://www.youtube.com/watch?v=LfRWyZqU5Y4)
- http://www.circuitbasics.com/arduino/
