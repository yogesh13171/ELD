MCU = atmega328p
COMP = avr-gcc
CFLAGS = -Os
PORT=/dev/ttyUSB0
BR = 57600
OBJCOPY = avr-objcopy

program: compile
	avrdude -F -V -c arduino -p $(MCU) -P $(PORT) -b $(BR) -U flash:w:blinking_led.hex

compile: blinking_led.elf
	$(OBJCOPY) -O ihex -R .eeprom blinking_led.elf blinking_led.hex

blinking_led.elf: blinking_led.c
	$(COMP) -mmcu=$(MCU) -Wall $(CFLAGS) -o blinking_led.elf blinking_led.c

clean:
rm -f blinking_led.elf blinking_led.hex
