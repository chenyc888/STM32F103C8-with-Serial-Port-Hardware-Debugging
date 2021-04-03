#include <Arduino.h>

void setup()
{
  // put your setup code here, to run once:
  Serial3.begin(9600); //default serial port is usart1 with TX=A9 and RX=A10. so, connect GND, A9 and A10 of STM32F103C8 to FTDI will establish a valid serial port. likewise,
                       //connect A9 and A10 to a bluetooth module will port the serial output via bluetooth. so, stm32 boards can achieve the same thing as an avr board.
                       //note that Serial1 does not work with maple core. so, need to switch to other serial pins such as Serial3, which is TX=B10 and RX=B11
}
uint8_t i = 0;
void loop()
{
  // put your main code here, to run repeatedly:
  i++;
  Serial3.println("hello world"); //with settings in platformIO.ini, this code allows debugging with ST Link programmer.

  delay(1000);
}