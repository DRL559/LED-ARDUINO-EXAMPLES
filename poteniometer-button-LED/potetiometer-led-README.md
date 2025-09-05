# Potentiometer-LED
Control an LED’s brightness with a potentiometer using Arduino.

# Hardware Used
- Elegoo UNO R3
- Breadboard
- 1 x LED
- 1 x 220 Ohm Resistor
- 1 × 10k Ohm Potentiometer 
- Jumper Wires

# Circuit Diagram
LED is connected to 5v pin with a resistor in series
-  5v pin ->  -> 220 ohm resistor -> potentiometer side 1 
- GND -> potentiometer side 2
- potentiometer middle wiper -> LED(Anode)
- LED cathode -> GND

# How To Run
- Connect the components as described above

# What I Learned
- A potentiometer works as a voltage divider when connected between 5 V and GND.9
- Turning the knob changes the wiper voltage, which can be measured on an analog pin.
