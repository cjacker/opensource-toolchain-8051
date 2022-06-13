# compiler and utilities to build and flash
sdcc  := sdcc
packihx := packihx
makebin := makebin
stcgal := stcgal
stcflash := stcflash
ch55x-isptool := ch55x-isptool
ec2writeflash := ec2writeflash
nuvoprog := nuvoprog
cycfx2prog := cycfx2prog
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

flashstc: $(outdir)/$(outname).bin
	sudo $(stcgal) build/$(outname).bin

flashstc8x: $(outdir)/$(outname).bin
	sudo $(stcflash) build/$(outname).bin

flashch55x: $(outdir)/$(outname).bin
	sudo $(ch55x-isptool) build/$(outname).bin

flashc8051f:
	sudo $(ec2writeflash) --port USB --hex build/$(outname).hex --run

flashn76e003:
	sudo $(nuvoprog) program -t n76e003 -i build/firmware.ihx -c @config_n76e003.json

flashn76e616:
	sudo $(nuvoprog) program -t n76e616 -i build/firmware.ihx -c @config_n76e616.json

flashn76e885:
	sudo $(nuvoprog) program -t n76e885 -i build/firmware.ihx -c @config_n76e885.json

flashfx2:
	sudo $(cycfx2prog) prg:build/$(outname).ihx run

flashefm8bb1:
	hex2boot build/$(outname).hex -o build/$(outname).efm8
	efm8load -p /dev/ttyACM0 -b 115200 -t build/$(outname).efm8
	
# clean project
.PHONY : clean
clean :
	rm -f $(outdir)/*.*
	rm -rf $(outdir)
