# Fading-Led
Making an LED fade in and out with Arduino!

# Hardware Used
- Elegoo UNO R3
- Breadboard
- 1 x LED
- 1 x 220 Ohm Resistor
- Jumper Wires

# Circuit Diagram
LED is connected to pin 3 with a resistor in series
- pin 3 -> resistor -> LED(Anode)
- LED(cathode) -> GND

# How To Run
- Connect the components as described above
-  Open Arduino IDE and copy-paste the code into a new sketch
-  Upload the code and the LED will blink ON for 1 second, OFF for 1 second.

# What I Learned
- For-Loops to increment/decrement values
- PWM (Pulse Width Modulation) -> how analogWrite() creates the illusion of analog output by rapidly switching the pin HIGH/LOW.
- Pin Capabilities -> not all pins are made the same, as only specific pins support PWM, so choosing which pin to use matters
- brightness control using values of 0-255 to control LED brightness levels
- Using delay() to control the speed of fading and create a visually smooth transition.
