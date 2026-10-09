# --- Hardware Configuration ---
MCU         = atmega2560
F_CPU       = 16000000UL
PORT        = /dev/cu.usbmodem11401
PROGRAMMER  = wiring
BAUD        = 115200

# --- Project Target ---
TARGET      = main

# --- Toolchain ---
CC          = avr-gcc
OBJCOPY     = avr-objcopy
AVRDUDE     = avrdude

# --- Compiler & Linker Flags ---
CFLAGS      = -Wall -Os -mmcu=$(MCU) -DF_CPU=$(F_CPU) -ffunction-sections -fdata-sections
LDFLAGS     = -mmcu=$(MCU) -Wl,--gc-sections

# --- File Tracking ---
SRC         = $(TARGET).c
OBJ         = $(TARGET).o
ELF         = $(TARGET).elf
HEX         = $(TARGET).hex

# --- Build Rules ---
all: $(HEX)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<

$(ELF): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $<

$(HEX): $(ELF)
	$(OBJCOPY) -O ihex -R .eeprom $< $@

# -D disables erase cycle to avoid corrupting/confusing the serial bootloader
flash: $(HEX)
	$(AVRDUDE) -c $(PROGRAMMER) -p $(MCU) -P $(PORT) -b $(BAUD) -D -U flash:w:$<:i

clean:
	rm -f $(OBJ) $(ELF) $(HEX)

.PHONY: all flash clean
