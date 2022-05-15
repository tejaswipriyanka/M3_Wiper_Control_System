CC = arm-none-eabi-gcc
MACH = cortex-m4
CFLAGS = -c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -O0
all:0_wiper_control_system.o 1_wiper_control_system.o output.elf

0_wiper_control_system.o:0_wiper_control_system.c
	$(CC) $(CFLAGS) -o $@ $^
	
1_wiper_control_system.o:1_wiper_control_system.c
	$(CC) $(CFLAGS) -o $@ $^

output.elf: 0_wiper_control_system.o  1_wiper_control_system.o
	$(CC)  -o $@ $^		
	
clean:
	rm -rf *.o *.elf