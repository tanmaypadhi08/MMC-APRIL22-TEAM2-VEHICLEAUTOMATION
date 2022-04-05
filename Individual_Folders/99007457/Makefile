
CC = arm-none-eabi-
MCPU = cortex-m4
BOARD = STM32F4-Discovery
MCU = STM32F407VG

SRCS := $(wildcard *.c)
INCS := $(wildcard *.h)
OBJS := $(SRCS:.c=.o)

TARGET = out.bin

ARCH_FLAGS = -mcpu=$(MCPU) -mthumb -mfloat-abi=soft
CFLAGS = -c
LDFLAGS = -T linker_file.ld -Wl,-Map=out.map -nostdlib

%.o: %.c ${INCS}
	$(CC)gcc $(CFLAGS) $(ARCH_FLAGS) $^

out.elf: ${OBJS}
	$(CC)gcc $(LDFLAGS) $(ARCH_FLAGS) -o $@ $^

out.bin: out.elf
	$(CC)objcopy -S -O binary out.elf out.bin


clean:
	rm -rf *.o *.elf *.gch *.bin

