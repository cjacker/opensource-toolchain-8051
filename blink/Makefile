# compiler and utilities to build and flash
sdcc  := sdcc
packihx := packihx
makebin := makebin
# for STC MCU below STC8x
stcgal := stcgal
# for STC MCU 8x and above
stcflash := stcflash
# for WCH CH55x
ch55x-isptool := ch55x-isptool
# for Nuvoton N76Exxx
nuvoprog := nuvoprog
# for Cypress CY7C63013/A
cycfx2prog := cycfx2prog
# for Silicon Labs C8051 and EFM8
# opensource ec2-new
ec2writeflash := ec2writeflash
# c8051/efm8 with usb debug adapter
flash8051 := flash8051
# efm8 with jlink
flashefm8 := flashefm8
# efm8 with uart bootloader
efm8load := efm8load

# sdcc flags
# notes ： Please adjust '--iram-size'/'--xram-size'/'--code-size' according to your chip ）
# for stc89/90
sdcc_flags := -mmcs51
# for stc15 sop8
# sdcc_flags := -mmcs51 --iram-size 128 --xram-size 0 --code-size 4096  --nooverlay --noinduction --model-small
# for stc8h
# sdcc_flags := -mmcs51 --iram-size 256 --xram-size 8192 --code-size 65536 --stack-auto

debug_flags := --debug

# source files
SRCS = main.c

# include path, since include dir at parent dir.
mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
current_dir := $(dir $(mkfile_path))

INCS = -I$(current_dir)/../headers

# Specify the output hex File path and file name 
outname = firmware

#default target
all: $(outname).bin $(outname).hex

# all .c->.rel, Deposit in OBJECT
OBJECTS = $(notdir $(SRCS:.c=.rel))
vpath %.c $(sort $(dir $(SRCS)))

%.rel: %.c Makefile 
	$(sdcc) $(sdcc_flags) $(debug_flags) -c $(INCS) $< -o $@

$(outname).ihx: $(OBJECTS)
	$(sdcc) $(sdcc_flags) $(debug_flags) $^ -o $(outname).ihx

%.hex: %.ihx
	$(packihx) $< > $(outname).hex

%.bin: %.hex
	$(makebin) -p $(outname).hex $(outname).bin

flash_stc: $(outname).bin
	sudo $(stcgal) $(outname).bin

flash_stc8x: $(outname).bin
	sudo $(stcflash) $(outname).bin

flash_ch55x: $(outname).bin
	sudo $(ch55x-isptool) $(outname).bin

flash_c8051f_with_ec2new: $(outname).hex
	sudo $(ec2writeflash) --port USB --hex $(outname).hex --run

flash_c8051f_with_flash8051: $(outname).hex
# modify the sn and tif according to your adapter and target board.
	sudo $(flash8051) -sn EC60000B878 -tif c2 -erasemode full -upload $(outname).hex

flash_efm8_with_flashefm8: $(outname).hex
# modify the sn, part and tif according to your adapter and target board.
	sudo $(flashefm8) -sn 000440033272 -tif c2 -part efm8sb10f8g -erasemode full -upload $(outname).hex

flash_efm8_with_uart_bootloader: $(outname).hex
	hex2boot $(outname).hex -o $(outname).efm8
	efm8load -p /dev/ttyUSB0 -b 115200 -t $(outname).efm8

flash_n76e003: $(outname).ihx
	sudo $(nuvoprog) program -t n76e003 -i $(outname).ihx -c @config_n76e003.json

flash_n76e616: $(outname).ihx
	sudo $(nuvoprog) program -t n76e616 -i $(outname).ihx -c @config_n76e616.json

flash_n76e885: $(outname).ihx
	sudo $(nuvoprog) program -t n76e885 -i $(outname).ihx -c @config_n76e885.json

flash_fx2: $(outname).ihx
	sudo $(cycfx2prog) prg:$(outname).ihx run

	
# clean project
.PHONY : clean
clean :
	rm -f $(SRCS:.c=.rel) $(SRCS:.c=.lst) $(SRCS:.c=.rst) $(SRCS:.c=.sym) $(SRCS:.c=.asm) $(SRCS:.c=.adb)
	rm -f $(outname).*
