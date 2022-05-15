# Abstract
Wiper Control System is present in every automotive system. Windshield wipers keep the windshield of a vehicle clear from rain water, snow, dust and road spray. The first windshield wipers were operated manually by moving a lever inside the car. Later wiper designs were powered by the engine's manifold vacuum. Virtually all wipers today employ an electric motor coupled with a linkage mechanism and are actuated by a knob beside the steering wheel. The wiper blade speed can be adjusted by the driver.It is used to clear the windshield from water during rainy season. We are imitating a wiper system using LEDs present in the STM32F4-Discovery. The positions and speed of the wiper is also controlled using the Cube IDE.

## Project Description
* Ignition Key Position at ACC: The Red LED is ON if the user button is pressed and held for 2 secs
* Wiper ON: Wiper is OFF: On press of the user input, Blue, Green, and Orange LEDs come ON one at a time with the set frequency, The frequency changes on every alternate keypress, 3 frequency levels with 1, 4, and 8 Hz
* Wiper OFF:Wiper is ON: The LED glow pattern stops on the 4th press; the wiper action starts next press onwards as mentioned in step 2
* Ignition Key Position at Lock: The Red LED is OFF if the user button is pressed and held for 2 secs.

# Block Diagram
![Block diagram](https://user-images.githubusercontent.com/101555276/168477499-7bb22c04-a61e-4464-bec7-05946dd18f5e.png)

# Flowchart
![Flowchart](https://user-images.githubusercontent.com/101555276/168477575-4020bb53-cda5-4d0f-8cdf-a1645b6f8bfc.png)

# Requirements
* Blue, Green, Red and Orange LEDs.
* STM32CubeIDE.
* STM32F4 Discovery Board.

## High Level Requirements
|**Test ID**|**Description**|**Status**|
| :- | :-: | :-: |
|H\_01|To ON the LEDs in 1 Hz frequency|Need to be Implemented|
|H\_02|To ON the LEDs in 4 Hz frequency|Implemented|
|H\_03|To ON the LEDs in 8 Hz frequency|Implemented|

## Low Level Requirements
|**Test ID**|**Description**|**Status**|
| :- | :-: | :-: |
|L\_01|To ON the Red LED by a long press|Implemented|
|L\_02|To ON the Blue, Green and Orange LEDs|Implemented|
|L\_03|To OFF the Red LED by a long press|Implemented|


# SWOT Analysis

## Strength
This system is very effective and cost efficient.

## Weakness
This has only limited speed control of wiper.

## Opportunities 
* Emerging New Markets
* Technological Development

## Threads
Economical Crisis

# 4W & H (WHAT,WHY,WHEN,WHERE,HOW)
### WHAT
A wiper speed control mechanism controls a vehicle wiper's operational speed based on rain conditions. To generate, the control system incorporates a rain sensor that detects rain conditions. The amplitude of an analog signal depends on the detected rain conditions.
### WHY
To keep the windscreen clean enough to give an adequate view at all times. Enables safe and comfortable driving for the driver. 
### WHEN
The windshield wipers remove rain and snow from the windshield, also the debris left behind, while the headlights improve visibility at night.
### WHERE
These are generally present in all heavy motor vehicles but are used regularly at locations that have heavy rainfall and snow.
### HOW
Speed variations can be done in the car wiper system according to the rainfall.

# Car Wiper Components
Car wipers do consist of various components such as the wiper blade, link, switch, motor, and arm.

## Wiper Motor
![49XF04_AS01](https://user-images.githubusercontent.com/101555276/168479368-97866777-e98a-4f01-b25d-780800a10108.jpg)

The wiper motor is one part of the wiper system that is useful for moving the wiper automatically. The commonly used wiper motor utilizes a magnet with a reduction gear. There are at least 2 types of wiper motors that can cause magnetic fields, namely the ferrite magnet type which uses permanent magnet ferrite, and the wound rotor type which uses a coil to produce an electromagnet. The wiper motor that is often used recently is the ferrite magnet type because this type of wiper has a relatively small size and has lightweight, so it is very suitable to be attached to any type of car.

## Wiper Link
![48_16](https://user-images.githubusercontent.com/101555276/168479425-e642393f-4463-48cd-8386-3953667c159f.jpg)

The wiper link is often referred to as the wiper lever which is useful for changing the rotation motion of the wiper motor into a movement that goes back and forth from the left and right. The front of the car usually uses a wiper system that uses two blades at once and the mechanism used to move the two blades uses a parallel tandem system. When the wiper starts to turn on, the wiper motor will rotate the crank arm and this will make the connecting rods pull and push each other. The wiper link will make the wiper arm work in a semicircle around the pivot shaft. The linking rod or connecting rod which is usually attached to the two wiper arms will make the two blades work simultaneously and work in parallel.

## Wiper Arm
![16_32](https://user-images.githubusercontent.com/101555276/168479465-6433ea30-a172-4667-98e8-9c3cd42cf4af.jpg)

The wiper arm usually consists of a head that is used to tie the wiper arm to the wiper shaft. The springs will be useful for holding the blade. While the arm piece will be useful for the process of installing the blade and retainer to hold it completely. The wiper blade usually consists of a rubber which is useful for cleaning the surface of the car glass. There is a combination of leaf spring packing with levers and clips to attach the blade to the wiper arm.

## Rubber element 
![51YXTkh4AlL _SL1028_](https://user-images.githubusercontent.com/101555276/168479659-d9aa7e04-815d-4292-bc46-e33f8cadfc79.jpg)

Rubber element made from natural or chloroprene rubber, the edge ensures maximum flexibility as the blade changes angle at the end of each stroke across the windscreen. The rubber element that comes into contact with the glass is surface treated with a special coating and graphite powder to reduce friction and the precision formed profile ensures a smooth change of angle as the wiper cycles up and down the windscreen.
# Output Images
## Blue 
![Blue ](https://user-images.githubusercontent.com/101555276/168480248-9aed73dd-4cd9-4d3a-81fd-40d3a466186d.jpg)

## Green
![Green](https://user-images.githubusercontent.com/101555276/168480276-3542e9ec-f66d-4416-9d7d-3b6297410247.jpg)

## Yellow
![Yellow](https://user-images.githubusercontent.com/101555276/168480302-7a661fb5-5912-42f2-a67d-f98d231ece7b.jpg)

# Conclusion
The Wiper Control System in automobiles has been studied and implemented using button and LEDs in STM32F407VG - Discovery Board.
