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
| 04 | If the temperatuee is high, then the red LED with glow|Temperature| Red LED must glow|Blue glows| ✅ |
