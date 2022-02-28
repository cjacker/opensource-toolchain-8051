# compiler and utilities to build and flash
sdcc  := sdcc
packihx := packihx
makebin := makebin
stcgal := stcgal
stcflash := stcflash

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

INCS = -I$(current_dir)/../stc-headers

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

# call stcgal/stcflash to flash
flash: $(outdir)/$(outname).bin
	sudo $(stcgal) build/$(outname).bin

flash8x: $(outdir)/$(outname).bin
	sudo $(stcflash) build/$(outname).bin

# clean project
.PHONY : clean
clean :
	rm -f $(outdir)/*.*
	rm -rf $(outdir)
