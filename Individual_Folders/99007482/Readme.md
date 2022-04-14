## Introduction: ##

## Vehicle Automation ##

#### The vehicle automation is all about automating some of the vechile features that makes the travel comfortable. The automated vehicle features like auto indoor light on/ off, auto indoor temperature regulation system and collision avoidance system are the features are been emulated using the STM controller.  ####
-------------------------------------------------------------------

### High Level Requirements

|S.No|Requirements|
|----|------------|
| 01 | Ultrasonic Sensor must detect the distance of the object placed at a distance |
| 02 | Ultraonic Sensor must detect the difference between the past position and current |

### Low Level Requirements

|S.No|High Level Reference|Requirements|
|----|--------------------|------------|
| 01 | HLR 1| The distance must be displayed on the LCD Screen |
| 02 | HLR 2| The difference between the 2 consecutive records will be displayed after 2nd record |

### High Level Test Plan 

| HLR Test ID | Description | Input | Excpected Output | Actual Output | Status |
|-------------|-------------|-------|------------------|---------------|--------|
| 01 |The distance must be displayed|Distance of the object|Measurement of the object approaching|Distance of approaching object|✅|
| 02 |The difference must be displayed of two consecutive instant|Distance of the object|Measurement of the difference of past 2 instant object approaching|Difference of past 2 instantapproaching object|✅|

Contributed By 
1. Tanmay Padhi - 99007482

