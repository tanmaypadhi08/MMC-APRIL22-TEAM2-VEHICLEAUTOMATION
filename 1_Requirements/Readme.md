# Table of content : #

1.  Introduction 
2.  Features
    * Problem solving approach
3.  4W's and 1H
4.  SWOT analysis  
5.  Materials req (STM327407)
6.  Requirements:
     * HLR
     * LLR

## 1. Introduction

 Vehicle  Automation

Vehicle  Automation emulates some of the  automated features of automobile that makes the tavel comfortable.
Transportation is literally described as a means of carrying people as well as goods and animals from one location to another. The importance of transportation is that it enables trade, commerce, and communication that establish civilization. It is transportation that acts as a link between manufacturing facilities and consumer markets. The global smart transportation market size to grow from USD 94.5 billion in 2020 to USD 156.5 billion by 2025, at a Compound Annual Growth Rate (CAGR) of 10.6% during the forecast period. The four wheeled transportation are one of the popular mode of transport because of the comfort it provies. Some of the automated vehicle features like auto indoor light on/ off, auto indoor temperature regulation system and collision avoidance system are the features are been emulated using the STM controller. 
</p>



## BENIFITS: 
* Makes the travel comfortable.
* Efficient use of features


--------------------------------------------------------------------

## FEATURES: ##
####
1. Auto indoor lighting system
2. Auto indoor temperature regulation system 
####

--------------------------------------------------------------
## Future scope ##
### Implementing more features like auto navigator indication system. 



-------------------------------------------------------------------------------------------

## SWOT Analysis ##

![SWOT](https://user-images.githubusercontent.com/98831772/163202470-c2dd058c-6a47-4d42-bd81-6c992a6220fd.jpg)


  ------------------------------------------------------------------------



## 4W's and 1'H

![5W1H Questions](https://user-images.githubusercontent.com/98831772/163202727-b6cb9762-03c4-4390-abc3-3185e03c126e.jpg)


----------------------


--------------------------------
## MATERIALS  REQUIRED:
| Sl.no  | component name |Description|
|---- | -----| :----: |
|1|DHT11 temp-sensor|The DHT11 is a commonly used Temperature and humidity sensor. The sensor comes with a dedicated NTC to measure temperature and an 8-bit microcontroller to output the values of temperature and humidity as serial data.|
|2|Photo resister|Photoresistors, also known as light dependent resistors (LDR), are light sensitive devices most often used to indicate the presence or absence of light, or to measure the light intensity. In the dark, their resistance is very high,  but when the LDR sensor is exposed to light, the resistance drops decreses,|
|3|7-led display|A seven segment display consists of seven LEDs arranged in the form of a squarish ‘8’ slightly inclined to the right and a single LED as the dot character. Different characters can be displayed by selectively glowing the required LED segments. Seven segment displays are of two types, common cathode and common anode.|
|4||

-------------------------------------------------------------------------

## REQUIREMENTS  of Auto indoor lighting system and temperature regulation system .



## HIGH LEVEL REQUIREMENTS

|S.No| Requirements|
|----|-------------|
|01|Photoresistor is used to detect the door open or close condition|
|02|DHT11 is used to sense the temperature and alert the user |

## LOW LEVEL REQUIREMENTS

| HLR | LLR | Requirements |
| ---- | ----- | ---------- |
| HLR 1 | LLR 1 | To sense the light intensity |
|       | LLR 2 | To display the digits according to the intenity of light on seven segment |
|       | LLR 3 | Display the range 0-3 if the light intensity is more |
|       | LLR 4 | Display the range 4-6 if the intensity if slightly less |
|       | LLR 5 | Display the range 7-9 if the intensity is less |
| HLR 2 | LLR 1 | To sense the temperature |
|       | LLR 2 | Glow blue LED if the temperature is low |
|       | LLR 3 | Glow Green LED if the temperature is medium |
|       | LLR 4 | Glow Red LED if the temperature is high |
