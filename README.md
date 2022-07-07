# Arduino-Nano-Fragment-RotarySwitch
 rotary switch for the Arduino Nano

 This small project show how to use a A/D converter for a rotary switch.

# Current calculation
 It's a single-pole switch with 11 positions. Between the positions a 1K
 resistor is used.

 ![RotarySwitchNew.png](https://github.com/InTheCar/Arduino-Nano-Fragment-RotarySwitch/blob/main/pictures/RotarySwitchNew.png)
 ![RotarySwitchWithResistors.png](https://github.com/InTheCar/Arduino-Nano-Fragment-RotarySwitch/blob/main/pictures/RotarySwitchWithResistors.png)

 The resistors are connected in series at 5V

 The total resistance is 10 x 1k = 10k

 I=5V/10k=0,5mA

 The A/D converter uses the values 0 to 1023 for 0 to 5V.

 We have 1024 possible values.

 1024/10 = 102,4 for one switch position

 for the first and last switch position we use 102,4/2=51,2 values

 | switch position|values from to|
 |:--------------:|:------------:|
 |1               | 0 - 50       |
 |2               | 51 - 153     |
 |3               | 154 - 255    |
 |4               | 256 - 357    |
 |5               | 358 - 460    |
 |6               | 461 - 562    |
 |7               | 563 - 665    |
 |8               | 666 - 767    |
 |9               | 768 - 869    |
 |10              | 870 - 971    |
 |11              | 972 - 1023   |
 
 
 





