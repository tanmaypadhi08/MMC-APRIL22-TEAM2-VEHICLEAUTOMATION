# TEST PLAN AND OUTPUT

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
