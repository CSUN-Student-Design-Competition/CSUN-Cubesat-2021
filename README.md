# CSUN-Cubesat-2021


## Bootloading Mega 2560 Chip

### Hardwhare 
1. Connect the ICSP pins in the mega chip to the ICSP pins in the uno. The dot above the pins indicates their orientation.

![alt text](https://github.com/CSUN-Student-Design-Competition/CSUN-Cubesat-2021/blob/elliotfayman/ICSPImage.png "ICSP Pin Diagram") 

2. In the programming board (the uno), connect the mega reset pin to the uno regester 10 pin.
3. Connect the uno to a computer using a USB type A to USB type B cable.

![alt text](https://github.com/CSUN-Student-Design-Competition/CSUN-Cubesat-2021/blob/elliotfayman/megaProgrammerCircuitDiagram.png "Curcuit Diagram")

### Programming Chip
1. Open Arduino IDE
2. On the top menu, navagate to [File] > [Examples] > ([rduinoICSP]
3. On the top menu, navagate to [Tools] > [Board: Arduino Uno]
4. On the top menu, navagate to [Tools] > [Programmer: AVRISP mkll]
5. On the top menu, navagate to [Tools] > [Port: "Select port connected to Arduino uno"]
6. Press the verify button
7. Press the Upload Button
8. On the top menu, navagate to [Tools] > [Board: Arduino Mega or Mega 2560]
9. On the top menu, navagate to [Tools] > [Programmer: Arduino as ISP]
10. On the top menu, navagate to [Tools] > [Burn Bootloader]
11. Put all the code in the arduino IDE as you normally would.
12. To push code onto the mega, press shift+upload button
13. If you are still having trouble with programming, reference [this](https://www.youtube.com/watch?v=X5achE10rCI) video (ignore the circuit diagram on that video)
