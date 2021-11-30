# CSUN-Cubesat-2021

## Bootloading Mega 2560 Chip

###Hardwhare 
1. Connect the ICSP pins in the mega chip to the ICSP pins in the uno. The dot above the ICSP pins indicates the direction of the pins. 
2. In the programming board (the uno), connect the reset pin to regester 10 on the uno.
3. connect the uno to a computer using a usb type A to usb type b wire.

###Programming Chip
1. Open Arduino IDE
2. On the top menu, navagate to <File> -> <Examples> -> <ArduinoICSP>
3. On the top menu, navagate to <Tools> -> <Board: Arduino Uno>
4. On the top menu, navagate to <Tools> -> <Programmer: AVRISP mkll>
5. On the top menu, navagate to <Tools> -> <Port: "Select port connected to Arduino uno">
6. Press the verify button
7. Press the Upload Button
8. On the top menu, navagate to <Tools> -> <Board: Arduino Mega or Mega 2560>
9. On the top menu, navagate to <Tools> -> <Programmer: Arduino as ISP>
10. On the top menu, navagate to <Tools> -> <Burn Bootloader>
11. Put all the code in the arduino IDE as you normally would.
12. To push code onto the mega, press shift+upload button
