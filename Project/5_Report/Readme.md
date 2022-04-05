## Project Made by Tanmay Padhi

## Table Of Content

1 Abstract

2 Requirements
 
3 Architecture
 
4 Test Plan And Output
  
5 Images And Videos

6 Badges

## ABSTRACT

Water tank overflow is a common problem which leads to the wastage of water. This circuit will detect the water level and will turn the lever on or off depending on the level. 
Water level indicator is a modern way of measuring the water level using latest technologies like sensors, Arduino. The main aim of the project is to observe the water level at 
any instant of time using Arduino, Servo Motor and Ultrasonic sensor to make it possible. As the servo motor used as an actuator will turn off when the tank fulls with water so 
that the water will not overflow. This may be useful in saving water from getting waste.

## Requirements

### HIGH LEVEL REQUIREMENTS

|ID |Description |
|--|-------------|
|01|Servo motor should ON/OFF|
|02|Ultrasonic Sensor should sense the level of water|
|03|LED should glow|
|04|Voltmeter should measure the voltage|

### LOW LEVEL REQUIREMENTS

|ID |Description |
|--|-------------|
|01|Servo motor valve should be open when the water is less.|
|02|Servo motor valve should close when water is full.|
|03|LED should glow when valve is open/close|
|04|Potentiometer should regulate the voltage properly.|

## SWOT ANALYSIS 

## Strength
S1 This model is easy to install

S2 It is affordable

## Weakness
W1 Not durable

W2 Maintainance issues

## Oppurtunities
O1 Best method to save water

O2 Promotes automation

## Threats
T1 The model is totally dependent on electronics components so any fault in any specific component will make the entire system fail

## Application
A1 Can be used in industries to save water

A2 Automated system so need not to monitor the flow

A3 Also can be used in oil tanks and pool with some modifications

## 4W's and 1H

## Who
Anyone working in industrial domain or for domestic purpose
## What
Automated System processed without human intervention
## When
ON/OFF depending on water level
## Where
Indistry and Domestic also in commercial areas
## How
Operates depending on the level of water in the tank

## TEST PLAN AND OUTPUT

## HIGH LEVEL TEST PLAN

|Test |Description |Input |Output |Requirement Met|
|--|-------------|------|------|---|
|01|Arduino UNO Board|Input from Microcontroller|Expected 5V output|Yes|
|02|Ultrasonic Senor|Data from Arduino board|Detect Object|Yes|
|03|LED|Show the level of tank|Glow when water reaches the level|Yes|
|04|Resistor|Restrict the flow|Restrict the flow of current|Yes|
|05|Potentiometer|Vary the resistance and regulates the flow|Flow of circuit|Yes|
|06|Servo Motor|ON to suply water and OFF to stop overflow|Water above 50% and below 100%|Yes|

## LOW LEVEL TEST PLAN

|Test |Description |Input |Output |Requirement Met|
|--|-------------|------|------|---|
|01|Servo motor valve should be open when the water is less.|Less Water|Servo ON|Yes|
|02|Servo motor valve should close when water is full.|Full Water (Near to 100%)|Servo OFF|Yes|
|03|LED ON|ON when level is below threshold|Water below 50%|Yes|
|04|LED OFF|FF when level is above max limit|Water above 100%|Yes|
|05|Potentiometer Regulation|Regulate when water is above or below the required limit|Water should be between 50% and 100%|Yes|

## Images And Videos

https://user-images.githubusercontent.com/48876183/157287867-2058a6d5-37c4-4ede-9b52-45aa85c96cac.mp4

## Servo OFF
![servooff](https://user-images.githubusercontent.com/48876183/157287936-7432393f-9929-4487-a3f0-4d44a0da3a1b.png)
## Servo ON
![servoon](https://user-images.githubusercontent.com/48876183/157287944-b9b7e2c2-00af-4c90-9fbb-67a0c1c064c8.png)
