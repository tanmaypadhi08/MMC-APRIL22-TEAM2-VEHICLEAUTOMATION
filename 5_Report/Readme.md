## 1. Introduction
<h1 align="center"> Vehicle  Automation </h1>

<h3 align = "center"> Vehicle  Automation emulates some of the  automated features of automobile that makes the tavel comfortable.  </h3>
 
<p align = "justify"> 
	Transportation is literally described as a means of carrying people as well as goods and animals from one location to another. The importance of transportation is that it enables trade, commerce, and communication that establish civilization. It is transportation that acts as a link between manufacturing facilities and consumer markets. The global smart transportation market size to grow from USD 94.5 billion in 2020 to USD 156.5 billion by 2025, at a Compound Annual Growth Rate (CAGR) of 10.6% during the forecast period. The four wheeled transportation are one of the popular mode of transport because of the comfort it provies. Some of the automated vehicle features like auto indoor light on/ off, auto indoor temperature regulation system and collision avoidance system are the features are been emulated using the STM controller. 
</p>

## BENIFITS: 
* Makes the travel comfortable.
* Efficient use of features


---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
## FEATURES: ##
####
1. Auto indoor lighting system
2. Auto indoor temperature regulation system 
####

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Future scope ##
### Implementing more features like auto navigator indication system. 

####

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## SWOT Analysis ##

<p align="center">
  <img height= 600 src="https://github.com/tanmaypadhi08/MMC-APRIL22-TEAM2-VEHICLEAUTOMATION/blob/3312dc41e01e5225af7d389ca5c3ec2737989bcf/Images/SWOT.jpg ">	
</p>

#
## 4W's and 1'H
![](https://github.com/tanmaypadhi08/MMC-APRIL22-TEAM2-VEHICLEAUTOMATION/blob/0a711a9b799823b3e5e7b876a061352f9a19ad3c/Images/5W1H%20Questions.jpg)
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
# REQUIREMENTS

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

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## Test cases for High level Requirements

| HLR_Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 01 | The 7 segment display must show the output based of light intensity  | Intensity of Light | 7 segment display should glow | Glows | ✅ |
| 02 | The LED must glow depending on the temperature of the surrounding | Temperature | LED must glow | LED glows | ✅ |


-----------------------------------------------------------------------
<br>

## Test cases for low  level requirements

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 01 | If light intensity is high, the range of display must be between 0-3 | Light Intensity | Display 0 to 3 in 7-segment display | Display the desired value | ✅ |
| 02 | If light intensity if medium, the range of display must be between 4-6 | Light Intensity | Display 4 to 6 in the 7-segment display | Display the desierd value | ✅|
| 03 | If light intensity if less, the range of display must be between 7-9 | Light Intensity | Display 7 to 9 in the 7-segment display | Display the desierd value | ✅ |
| 04 | If the temperatuee is low, then the blue LED with glow|Temperature| Blue LED must glow|Blue glows| ✅ |
| 05 | If the temperatuee is medium, then the green LED with glow|Temperature| Green LED must glow|Green glows| ✅ |
| 06 | If the temperatuee is high, then the red LED with glow|Temperature| Red LED must glow|Blue glows| ✅ |

