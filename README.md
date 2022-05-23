# Opensource toolchain for 8051 MCU

The [Intel MCS-51](https://en.wikipedia.org/wiki/Intel_8051) (commonly termed 8051) is a single chip microcontroller (MCU) series developed by Intel in 1980 for use in embedded systems. 

8051 are first-generation microcontrollers that sparked the modern embedded-system era and established the basic concepts for almost all microcontrollers. In the early 1980s, 8051 microcontrollers were first introduced by Intel. Later other manufacturers like Philips (NXP), Atmel (now Microchip), Silicon Labs, Maxim, etc took the 8051 architecture and introduced their variants of 8051s. 

Today there are hundreds of companies (Such as Silicon Labs, Maxim, STC, Nuvoton, WCH, etc.) which still manufactures this old school legendary MCU. some of them have even added more features like ADCs, communication peripherals like SPI and I2C, etc that were not originally incepted or integrated. 

# Hardware requirements

Before starting 8051 development, you need:

* A development board with 8051 MCU, (here I prefer STC51)
  * the earliest model such as STC89C52 or the latest model such as STC8H8K64U if you have no idea which one to choose.

* A USB UART adapter if there is no one on board. 
  * it's used for flashing/programming. a lot of development board already have one integrated on board, such as CH340 series.

**NOTE**:
* for C8051Fx from Silicon Labs, you need U-EC ICE adapter to program and debug.
* for N76E from Nuvoton, you need Nu Link adatper to program.

# Toolchain overview

Opensource toolchain for 8051 consists of below components:
* Compiler
* Debugger
* SDK
* Programming tool

# SDCC compiler
If you prefer using **8051 assemblly language**, [naken_asm](https://github.com/mikeakohn/naken_asm/) or [as31](http://wiki.erazor-zone.de/wiki:projects:linux:as31) can be used except SDCC.

There are 2 widely used C compiler for 8051 MCU, one is Keil C51, a commercial close source compiler provided by ARM. and one is [SDCC](http://sdcc.sourceforge.net), an opensource c compiler.

I do not want to compare SDCC and C51 here, there are not much difference between them. In my opinions, I prefer the opensource one. for [syntax differences between SDCC and C51](https://github.com/cjacker/opensource-toolchain-8051/blob/main/difference-between-c51-and-sdcc.md), I aleady wrote a brief note, please refer to it.

Most linux dist already ship SDCC in their repositories, you can use APT/YUM or other package management tools to install it according to the dist you use. If you really want to build it yourself, at least you need make/bison/flex/libtool/g++/boost development package/zlib development package and other various packages installed and the building process is very simple:

```
./configure --prefix=<where you want to install SDCC>
make
make install
```

If the installation prefix isn't set to standard dir (such as '/usr' or '/usr/local), you need add the `<prefix>/bin` dir to PATH env.

# SDK

There is no standard SDK or libraries required to start 8051 development. since it's very simple, 8051 'SDK' usually means a set of pre-defined registers of your MCU model and some pre-defined routines for common-use, for example, 'bit-bang' I2C protocol. So you can start 8051 development without install anything except SDCC compiler.

## Baremetal programming

For example:

```
// led.c
// turn on the led. P21->Resistor->LED->GND

// define the P21 IO pin register
__sbit __at (0xa0+1) P21;

void main()
{
    // send logic 1
    P21 = 1;
    // loop
    while(1);
}
```

led.c can be compiled by SDCC like this:
```
sdcc -mmcs51 led.c
packihx led.ihx > led.hex
makebin lex.hex led.bin
```

## STC headers fro STC51
For developers' convenient, the compilers usually provide pre-defined headers for basic models, for example, reg51.h/reg52.h provided by Keil C51 and 8051.h provided by SDCC. But it's not enough to cover all resources/registers on chip of defferent models, especially models with improvements, enhancements and addtitions. you can define them by yourself in sources files (use `__sfr` and `__sbit` of SDCC) or use pre-defined headers.

The [stc headers within this repo](https://github.com/cjacker/opensource-toolchain-8051/tree/main/stc-headers) provide a set of headers suite for SDCC compiler for different STC 8051 MCUs, you can use it directly. these headers come from STC-ISP, the ISP tool provided by official vender and converted to the format SDCC supported using [keil2sdcc](https://github.com/ywaby/keil2sdcc) with modifications manually.

For example, above codes can be write as:
```
// define STC MCU model corresponding to your development board.
// refer to stc51.h for more information.
#define STC89

// meta header
#include <stc51.h>

void main()
{
    P21 = 1;
    while(1);
}
```
and build:
```
sdcc -mmcs51 -I./stc-headers led.c
packihx led.ihx >led.hex
makebin led.hex led.bin
```

There is also a header `softdelay.h` provided and pre-define some widely used softdelay functions, such as `delay200ms()`, you can used directly in your codes. for example:
```
// blink.c
// blink the led every 200ms, P21->1k o resistor->LED->GND

#define STC89
#include <stc51.h>
#include <softdelay.h>

void main()
{
    while(1) {
        P21 = !P21;
        delay200ms();
    }
}
```

If you have STC8H development board. the codes should be:
```
// blink.c

#define STC8H
#include <stc51.h>
#include <softdelay.h>

void main()
{
#if defined(STC8H)
    P2M0 = 0;
    P2M1 = 0;
#endif
    while(1) {
        P21 = !P21;
        delay200ms();
    }
}
```

**NOTE, every model may have special registers with special features, PLEASE READ the DATASHEET before use it!!!**

# Debugging

There is no standard debugging tool such as gdb for 8051 MCUs from various different vendors. you can take SDCC manual (Chapter 5. Debugging) as refrence to find a debugging way you can use with your 8051 MCU. gennerally:

* Debugging on a simulator:

you can use `sdcdb` debugger and `ucsim-51` simulator shipped with SDCC.

* Debugging on target using an on-target monitor:

you need program a monitor firmware to your MCU first, good examples of monitors are [paulmon](https://www.pjrc.com/tech/8051/paulmon2.html) and [cmon51](http://cmon51.sourceforge.net/), but you may need modified the codes to match your MCU's resources and settings.

* Debugging on target using an ICE (in circuit emulator):

an ICE device is usually a little bit expensive. for Silicon Labs C8051Fx series, you can use U-EC ICE adapters with `newcdb` provided by 'e2drv'.

And always, you can use 'printf' via UART:-)

# Programming

## for STC51 (from STC)

**RESET key on your development board need to be pressed when flashing**

Every STC MCU have a bootloader(BSL) which support UART flashing, usually **the P3.0 pin is RX and P3.1 pin is TX**, most development board already integrate a USB to UART chip on board, you just need to use a USB cable to connect it to PC. the STC UART flashing protocol is un-documented but can be analyzed.

A close source isp tool for windows named 'STC-ISP' is provided by STCmcu officially. It can be run with wine under Linux. you need install wine  and use `winetricks -q mfc42` to install the mfc dll. you may also need to link '/dev/ttyUSB0' or '/dev/ttyACM0' (depending on the USB/UART adapter) to '~/.wine/dosdevices/com1', then the com device can be used by wine and stc-isp to find the USB/UART adaper. The STC-ISP tool is useful if you want to adjust some config options not supported by opensource isp tool.

There are 2 open source ISP tool you can use with linux. 

### stcgal
[stcgal](https://github.com/grigorig/stcgal) suppport most STC MCUs from STC89 series to STC15 series very well, but lack of supporting for the latest STC8[A|C|F|G|H] series.

```
usage: stcgal [-h] [-e] [-a] [-r RESETCMD] [-P {stc89,stc12a,stc12b,stc12,stc15a,stc15,stc8,usb15,auto}] [-p PORT] [-b BAUD]
              [-l HANDSHAKE] [-o OPTION] [-t TRIM] [-D] [-V]
              [code_image] [eeprom_image]

stcgal 1.6 - an STC MCU ISP flash tool
(C) 2014-2018 Grigori Goronzy and others
https://github.com/grigorig/stcgal

positional arguments:
  code_image            code segment file to flash (BIN/HEX)
  eeprom_image          eeprom segment file to flash (BIN/HEX)

options:
  -h, --help            show this help message and exit
  -e, --erase           only erase flash memory
  -a, --autoreset       cycle power automatically by asserting DTR
  -r RESETCMD, --resetcmd RESETCMD
                        shell command for board power-cycling (instead of DTR assertion)
  -P {stc89,stc12a,stc12b,stc12,stc15a,stc15,stc8,usb15,auto}, --protocol {stc89,stc12a,stc12b,stc12,stc15a,stc15,stc8,usb15,auto}
                        protocol version (default: auto)
  -p PORT, --port PORT  serial port device
  -b BAUD, --baud BAUD  transfer baud rate (default: 19200)
  -l HANDSHAKE, --handshake HANDSHAKE
                        handshake baud rate (default: 2400)
  -o OPTION, --option OPTION
                        set option (can be used multiple times, see documentation)
  -t TRIM, --trim TRIM  RC oscillator frequency in kHz (STC15+ series only)
  -D, --debug           enable debug output
  -V, --version         print version info and exit
```

for example:
```
sudo stcgal -p /dev/ttyUSB0 blink.bin
```

### stcflash

A modified version of [stcflash](https://github.com/sms-wyt/stcflash) support most MCUs of STC8[A|C|F|G|H] series very well. 
```
usage: stcflash [-h] [-p PORT] [-l LOWBAUD] [-hb HIGHBAUD] [-r {89,12c5a,12c52,12cx052,8,15,auto}] [-a AISPBAUD] [-m AISPMAGIC] [-v]
                [-e] [-ne]
                [image]

Stcflash, a command line programmer for STC 8051 microcontroller. https://github.com/laborer/stcflash

positional arguments:
  image                 code image (bin/hex)

options:
  -h, --help            show this help message and exit
  -p PORT, --port PORT  serial port device (default: /dev/ttyUSB0)
  -l LOWBAUD, --lowbaud LOWBAUD
                        initial baud rate (default: 2400)
  -hb HIGHBAUD, --highbaud HIGHBAUD
                        initial baud rate (default: 115200)
  -r {89,12c5a,12c52,12cx052,8,15,auto}, --protocol {89,12c5a,12c52,12cx052,8,15,auto}
                        protocol to use for programming
  -a AISPBAUD, --aispbaud AISPBAUD
                        baud rate for AutoISP (default: 4800)
  -m AISPMAGIC, --aispmagic AISPMAGIC
                        magic word for AutoISP
  -v, --verbose         be verbose
  -e, --erase_eeprom    erase data eeprom during next download(experimental)
  -ne, --not_erase_eeprom
                        do not erase data eeprom next download(experimental)
```
for exmaple:
```
sudo stcflash -p /dev/ttyUSB0 blink.bin
```

## for WCH CH55x
These are various opensource ISP tool for WCH CH5xx 8051 series, the most complete one is [ch552tool](https://github.com/MarsTechHAN/ch552tool). it can support CH551/CH552/CH553/CH554/CH559 with various bootloader version. the usage is very simple:
```
sudo ch55xtool -f firmwire.bin -r
```

## for Silicon Labs C8051Fxx
As metioned above, C8051Fxx series 8051 MCU from Silicon Labs requires a special ICE device to program and debug. these MCUs support either JTAG or C2 protocol. you need to acquire such a device (usally an USB adapter) first and wire it up before you continue reading .

[ec2-new](https://github.com/paragonRobotics/ec2-new) is a fork of [e2drv](http://ec2drv.sourceforge.net/), an opensource project to support EC2 debugger.

ec2tools contain programs that use the core library to perform various actions.

* ec2test-any - test the opperation of a micro / debugger combination
* ec2readflash - read the target flash memory.
* ec2writeflash - write to the target flash memory.
* ec2device - identify connected microprocessor
* ec3adapters - list all USB debug adaptors and their serial numbers (for both EC3 and toolstick debuggers)
* ec2readfw - read the debugger firmware image
* ec2-update-fw - write new firmware into the debugger

newcdb is the text-based interactive debugger, which can be used to fully debug programs

* flash firmware to devices
* inspect all registers, SFRs, RAM, code, and XRAM
* modify all registers, SFRs, RAM, and XRAM
* set breakpoints
* run, stop, and step through programs

**Build and Installation:**

```
git clone https://github.com/paragonRobotics/ec2-new.git
cd ec2-new
autoreconf -ivf
./configure --prefix=/usr/local
make
sudo make install
```

**Program:**

```
sudo ec2writeflash --port USB --hex xxx.hex --run
```
**Debug:**

```
$ sudo newcdb
(newcdb) set target SL51
current target <none>
selecting target SL51
(newcdb) set target port USB
set port 'USB'
(newcdb) set target connect
NOT C2, Trying JTAG
Debug adaptor ver = 0x19
(newcdb) file firmware
Clearing all breakpoints.
Clearing all breakpoints in target.
Debug adaptor ver = 0x19
Loading file 'firmware.ihx'
Writing to flash with auto erase as necessary
        Writing 167 bytes at 0x0000
Erasing scratchpaderasing scratchpad sector at addr=0x00000
erasing scratchpad sector at addr=0x00080
Flash write successful.
(newcdb) r
```

## for Atmel AT89C5x (now MicroChip)
avrdude

dfu-programmer


## for Dallas DS89Cxx (now Maxim)
a python script

## for Nuvoton N76Exxx
To program Nuvoton N76E series 8051 MCU, you need have a Nu-link adapter (from offcial EVB or standalone version) and wire up 5 pins: VCC/DAT/CLK/RST/GND.

[nuvoprog](https://github.com/erincandescent/nuvoprog) is an open source tool for programming Nuvoton microcontollers.

Installation:
```
go get -u github.com/erincandescent/nuvoprog
```

Progamm:
```
sudo nuvoprog program -t n76e003 -i build/firmware.ihx -c @config.json
```


# Project templates

With [Project and Makefile template](https://github.com/cjacker/opensource-toolchain-8051/tree/main/blink) in this repo, you can start 8051 development under Linux very quickly. 

Please have a look at the Makefile, and you may also need to understand the meaning of '--iram-size'/'--xram-size'/'--code-size' and other details before starting a real project.

build:
```
make 
```

flashing STC51 with stcgal:
```
make flashstc
```

flashing STC8x series with stcflash:
```
make flashstc8x
```

flashing Silicon Labs C8051Fxx:
```
make flashc8051f
```

etc.


