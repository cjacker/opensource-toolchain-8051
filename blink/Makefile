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

# source files
SRCS = main.c

# include path, since include dir at parent dir.
mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
current_dir := $(dir $(mkfile_path))

INCS = -I$(current_dir)/../headers

# Specify the output hex File path and file name 
outdir = build
outname = firmware

#default target
all: $(outdir)/$(outname).bin $(outdir)/$(outname).hex

# all .c->.rel, Deposit in OBJECT
OBJECTS = $(addprefix $(outdir)/,$(notdir $(SRCS:.c=.rel)))
vpath %.c $(sort $(dir $(SRCS)))

$(outdir):
	mkdir -p $(outdir)
$(outdir)/%.rel: %.c Makefile | $(outdir)
	$(sdcc) $(sdcc_flags) -c $(INCS) $< -o $@

$(outdir)/$(outname).ihx: $(OBJECTS)
	$(sdcc) $(sdcc_flags) $^ -o $(outdir)/$(outname).ihx

$(outdir)/%.hex: $(outdir)/%.ihx | $(outdir)
	$(packihx) $< > $(outdir)/$(outname).hex

$(outdir)/%.bin: $(outdir)/%.hex | $(outdir)
	$(makebin) -p $(outdir)/$(outname).hex $(outdir)/$(outname).bin

flash_stc: $(outdir)/$(outname).bin
	sudo $(stcgal) build/$(outname).bin

flash_stc8x: $(outdir)/$(outname).bin
	sudo $(stcflash) build/$(outname).bin

flash_ch55x: $(outdir)/$(outname).bin
	sudo $(ch55x-isptool) build/$(outname).bin

flash_c8051f_with_ec2new:
	sudo $(ec2writeflash) --port USB --hex build/$(outname).hex --run

flash_c8051f_with_flash8051:
# modify the sn and tif according to your adapter and target board.
	sudo $(flash8051) -sn EC60000B878 -tif c2 -erasemode full -upload build/$(outname).hex

flash_efm8_with_flashefm8:
# modify the sn, part and tif according to your adapter and target board.
	sudo $(flashefm8) -sn 000440033272 -tif c2 -part efm8sb10f8g -erasemode full -upload build/$(outname).hex

flash_efm8_with_uart_bootloader:
	hex2boot build/$(outname).hex -o build/$(outname).efm8
	efm8load -p /dev/ttyACM0 -b 115200 -t build/$(outname).efm8

flash_n76e003:
	sudo $(nuvoprog) program -t n76e003 -i build/firmware.ihx -c @config_n76e003.json

flash_n76e616:
	sudo $(nuvoprog) program -t n76e616 -i build/firmware.ihx -c @config_n76e616.json

flash_n76e885:
	sudo $(nuvoprog) program -t n76e885 -i build/firmware.ihx -c @config_n76e885.json

flash_fx2:
	sudo $(cycfx2prog) prg:build/$(outname).ihx run

	
# clean project
.PHONY : clean
clean :
	rm -f $(outdir)/*.*
	rm -rf $(outdir)
