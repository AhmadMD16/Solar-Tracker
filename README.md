# Solar Tracker

This is a solar tracking device that just like the title states, tracks the sun and directs a solar panel to the direction of the sun. The purpose of it is to maximise the energy intake from the sun and increase the efficiency of the solar panel, all with the help of an Arduino Nano. 

![3D-model](https://github.com/AhmadMD16/Solar-Tracker/blob/main/images/Solar%20Tracker.png)

## Description
As seen in the images above, there's a photoresistor in every one of the corners and their purpose is to measure the light and move the body that holds the solar panel to the direction where there's most light. Since most 9g servos are limited to 180 degrees, I had to modify one of them slightly to make it spin 360 degrees. This is how I did it: https://www.youtube.com/watch?v=4Z-j6bUJTQ8&t=2s

The solar panel is not hooked up to anything and is only there for demonstration purposes. The device is powered through a battery that is fitted inside the body alongside the other components.

The components used for this build are: 

* Arduino Nano
* 4x Photoresistors
* 2x 9g servos
* 4x Resistors
* Battery
* Solar panel
* 3D printed models

The schematic of the build:
![Schematic](https://github.com/AhmadMD16/Solar-Tracker/blob/main/images/Circuit.png)
