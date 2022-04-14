## REPORT OF THE FEATURE

# Table of content : #

1. Introduction 
	* 1.1. Vehicle Automation
	* 1.2 Auto indoor temperature regulation system working
	* 1.3 Benifits
2. Problem solving approach
3. 5W 1H
4. SWOT analysis  
5. Materials required
6. Requirements
	* HLR
	* LLR
7. Architectural diagram
* Behavioural Diagram
* Block diagram for automatic temperature sensor
* Structural Diagram 
8. Test Plans
* Low level
* High level
-----------------------------------------------

## 1. Introduction:
1.1 Vehicle Automation:
<p align ='justify'>
Vehicle  Automation emulates some of the  automated features of automobile that makes the tavel comfortable.
Transportation is literally described as a means of carrying people as well as goods and animals from one location to another. The importance of transportation is that it enables trade, commerce, and communication that establish civilization. It is transportation that acts as a link between manufacturing facilities and consumer markets. The global smart transportation market size to grow from USD 94.5 billion in 2020 to USD 156.5 billion by 2025, at a Compound Annual Growth Rate (CAGR) of 10.6% during the forecast period. The four wheeled transportation are one of the popular mode of transport because of the comfort it provies. Some of the automated vehicle features like auto indoor light on/ off, auto indoor temperature regulation system and collision avoidance system are the features are been emulated using the STM controller. 
</p >
1.2 Auto indoor temperature regulation system working: 
<p align ='justify'>
People travel longer distance in a varied climatic condition. To make the travel comfort automatic temperature regulation system will be a great help. The user can input the temperature to which it has to be regulated. The system uses temperature sensor DHT11 senses the temperature and the controller regulates the temperature by adjusting the air conditioner functioning. The air conditioning regulation is emulated by turning the led on until the temperature is regulated. 
</p>

## 1.3 Benifits: 
* Makes the travel comfortable.
* Efficient use of air cooing system.
-------------------------------------------------------------------------------------------
## 2. Problem solving approach: 
* The problem with mannual temperature control it requires human intervention during the driving to change to the desired temperature. So we automate to the temperature control it makes the travel convinient as it maintains the temperature which avoids manual interventions. 
-----------------------------------------------
## 3. 5W's and 1'H:

![w&h](https://github.com/tanmaypadhi08/MMC-APRIL22-TEAM2-VEHICLEAUTOMATION/blob/9c10c1b4882d07dba44d404f061f0c6e886c1761/Individual_Folders/99007456_yogesh/Images/5W1H%20Example.jpg)
------------------------------------------------------------------------
## 4. SWOT Analysis: ##
![SWOT](https://github.com/tanmaypadhi08/MMC-APRIL22-TEAM2-VEHICLEAUTOMATION/blob/9208d082f84dbb1735d7932643a7285ca2a625ae/Individual_Folders/99007456_yogesh/Images/SWOT.jpg)
------------------------------------------------------------------------
## Materials required:
|Sl.no | component name |Description|
| ---- | -------------- | :----: |
| 1 | DHT11 temp-sensor |The DHT11 is a commonly used Temperature and humidity sensor. The sensor comes with a dedicated NTC to measure temperature and an 8-bit microcontroller to output the values of temperature and humidity as serial data.|
| 2 |   STM32F407GDISC |The STM32F407G-DISC1 is a Discovery Kit allows users to easily develop applications with the STM32F407 high performance microcontrollers with ARM cortex-M4 32-bit core.|
| 3 | 220 Ohm resistor | LED needs a resistor  of around 100 ohm to 500k ohm | 
| 4 | LED | LED is used to indicate the temperature regulation |

-----------------------------------------
## 6. Requirements:
### High Level Requirements

| HLR_Test_ID | Requirement description |
| ----------- | ----------------------- |
| HLR_1 | Sense the temperature using the temperature sensor |
| HLR_2 | Indicate the temperature regulation using the LED | 
#

### Low level Requirements
| HLR_Test_ID | LLR_Test_ID |  Requirement description |
| ----------- | ----------- | -------------------------- |
| HLR_1 | LLR_1.1| The temperature sesnsor sense the temperature |
| | LLR_1.2 | Controller read the analog temperature value | 
| | LLR_1.3 | Controller compare with the given temperature |
HLR_2 | LLR_2.1 | Indicate the temperature regulation using the LED |
 
----------------------------------------------
# 7. Architectural diagram:
## Behavioural Diagram

### 1) Automatic temperature sensor 
![TEMPSENSOR](https://user-images.githubusercontent.com/98872514/163211314-3ea3c31f-e5c2-4132-88e6-1bbad734423c.PNG)


### 2) Block diagram for automatic temperature sensor
![Diagram_Temp](https://user-images.githubusercontent.com/98872514/163201718-d5647c98-5b86-4a40-bcb8-de454b9c3083.PNG) 

## Behavioural Diagram

Auto indoor temperature regulation system 
![Untitled Diagram drawio (2)](https://user-images.githubusercontent.com/98879965/163228472-e0a4fd68-477b-450a-96ee-aea32bc4a8d7.png)

---------------------------------------------
## TEST PLANS:
### Test cases for High level Requirements

| HLR_Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 01 | The LED must glow depending on the temperature of the surrounding | Temperature | LED must glow | LED glows | ✅ |

-----------------------------------------------------------------------
## Test cases for low  level requirements

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 01 | If the temperature is low, then the blue LED with glow|Temperature| Blue LED must glow|Blue glows| ✅ |
| 02 | If the temperature is medium, then the green LED with glow|Temperature| Green LED must glow|Green glows| ✅ |
| 03 | If the temperature is high, then the red LED with glow|Temperature| Red LED must glow|Blue glows| ✅ |

