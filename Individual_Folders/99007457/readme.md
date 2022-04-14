## A Report on Individual Contribution to the project
### Requirements  of Auto indoor lighting system and temperature regulation system .
### HIGH LEVEL REQUIREMENTS

|S.No| Requirements|
|----|-------------|
|01|Photoresistor is used to detect the door open or close condition|
|02|DHT11 is used to sense the temperature and alert the user |

### LOW LEVEL REQUIREMENTS

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


### Block diagram for automatic light on and off
![diagram_LDR](https://user-images.githubusercontent.com/98872514/163201735-36883395-9bf2-4c44-a41d-faa105904eb5.PNG)

### Implementation 
Worked shared with Suvedha Renganathan - 99007474

### Test cases for High level Requirements

| HLR_Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 01 | The 7 segment display must show the output based of light intensity  | Intensity of Light | 7 segment display should glow | Glows | ✅ |
