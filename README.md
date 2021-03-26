# STM32F103C8 (bluepill) with hardware debugging and serial monitor

This code demos the following:

1. STM32F103C8 (bluepill) board without an Arduino bootloader.
2. It enables hardware debugging via ST Link V2 programmer, which is not possible when an Arduino bootloader is present.
3. It enables serial monitor communications via an FTDI board, which emulates the serial COM port with an Arduino bootloader.
   This setup has the full Arduino board functionality plus on-board debugging, which is not possible with an avr board or an STM32F103C8 board with an Arduino bootloader installed.
