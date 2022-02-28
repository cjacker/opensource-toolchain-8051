# Opensource toolchain for 8051 MCU

The [Intel MCS-51](https://en.wikipedia.org/wiki/Intel_8051) (commonly termed 8051) is a single chip microcontroller (MCU) series developed by Intel in 1980 for use in embedded systems. 

8051 microcontrollers are the first-generation microcontrollers that sparked the modern embedded-system era and established the basic concepts for almost all microcontrollers. In the early 1980s, 8051 microcontrollers were first introduced by Intel. Later other manufacturers like Philips (NXP), Atmel (now Microchip), Silicon Labs, Maxim, etc took the 8051 architecture and introduced their variants of 8051s. 

Today there are hundreds of companies (Such as STC, WCH, Nuvoton, etc.) which still manufactures this old school legendary MCU. some of them have even added more features like ADCs, communication peripherals like SPI and I2C, etc that were not originally incepted or integrated. 

# STC 8051 MCU

STC is a Chinese semiconductor manufacturer, it took the model of 8051 and upgraded it to new levels by implementing some vital upgrades, enhancements and additions. It also manufactures standard 8051s which are designed to fit in place of any other 8051s from any manufacturer. At present STC has several different variants of 8051s, ranging from standard 40 pin regular DIP 8051s to tiny 8-pin variants. 

There are some STC microcontrollers like STC89C52RC that are same as the standard ones while some others like STC8H8K64U are more robust with many advanced features. you should refer to datasheet of the chip for details. 

The model name conventions of STC 8051 is a little bit different for different generations, it is not well-regulated, but still have rules, usually the model name of STC8051 consist of:

`STC[generation] [one or two letter for voltage range] [some numbers for ram/rom size descriptions] [a suffix to describe special features]`

The generation of STC 8051 include 89/90/10/11/12/15 and 8[A|C|F|G|H].

The voltage range usually is 'c' or 'f' for 3.5-5.5v voltage range, 'l' or 'le' for 2.0-3.6v voltage range and 'w' for 2.0-5.5 wide voltage range. but the latest STC 8[A|C|F|G|H] series does NOT follow this rule.

The ram/rom size descriptions and the suffix are not same meanings for different generation, but it follow the same rules for different models of same generation. you should refer to datasheet for details.

For example, STC89C516AD means STC 89 series, 'C' means 3.5-5.5v voltage range, '16' means 64k rom size(5 of 516 has no meaning, 16 means 16x4 rom size), with 'AD' support, it's a ['12T'](https://en.wikipedia.org/wiki/Instruction_cycle) 8051 MCU. STC also provide 6T and 1T MCU.

Since STC 8051 is the most famouse and popular 8051 MCU in China, this tutorial will mostly focus on STC 8051. there is no much different between 8051 products from different vendors, so you can also refer to this tutorial even you use chips from other vendor.

# Hardware requirements

Before you start 8051 development, you need:

* A development board with STC 8051 MCU. 
  * I suggest you buy the earliest model such as STC89C52 or buy the latest model such as STC8H8K64U if you have no idea which one should choose to learn.

* A USB to UART adapter if there is no one on board. 
  * it's used for flashing/programming. a lot of development board today already have one USB/UART chip on board, usually it's CH340 series.

# Toolchain overview

Opensource toolchain for 8051 (actually for any MCU not limited to 8051) consists of below components:
* Compiler
* ~~Debugger~~
* SDK
* Flashing/Programming tool

Unfortunately, most 8051 products are lack of debugging support, although a few models today support IAP, but it's depend on commercial software solution and not widely used by developers. for STC 8051, the opensource toolchain is SDCC(compiler) + stcgal/stcflash(ISP tool).

## SDCC compiler
There are 2 common used C compiler for 8051 MCU, one is C51 (with keil IDE), a commercial close-source compiler provided by ARM. and one is [SDCC](http://sdcc.sourceforge.net), an opensource high quality 8bit c compiler.

I do not want to compare SDCC and C51 here, there are also not much difference between them. In my opinions, I prefer the opensource one. for [syntax differences between SDCC and C51](), I will write another note, please refer to it.

Most linux dist. today already ship SDCC in their repositories, please use APT or YUM to install it according to the dist you use.

If you really want to build it yourself, at least you need make/bison/flex/libtool/g++/boost development package/zlib development package and other various packages installed and the building process is very simple:

```
./configure --prefix=<where you want to install SDCC>
make
make install
```

If the installation prefix isn't set to standard dir (such as '/usr' or '/usr/local), you need add the `<prefix>/bin` dir to PATH env.

## SDK

There is no standard SDK or libraries required for 8051 development. since it's very simple, 8051 'SDK' usually means a set of pre-defined registers of your MCU model and some wrap routines for common-use, for example, 'bit-bang' I2C protocol. So you can start 8051 development without install anything except SDCC compiler.

For example:

```
// led.c
// turn on the led, P21->1 ko resistor->LED->GND

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
packihx led.ihx led.hex
makebin led.bin
```

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
packihx led.ihx led.hex
makebin led.bin
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

**NOTE, every model may have some new registers with special features, PLEASE READ the DATASHEET before use it!!!**
## ~~Debugging~~

As mentioned above, most 8051 MCUs do **NOT** support debugging, a few models today support IAP, but lack of opensource tools, and also not widely used by developers. Implementing a remote debugger for 8051 should not be a tough job, but it seems nobody has interest on it. Maybe it is really simple enough so that a debugger is not mandary:-

Although there is no GDB-like debugging tool for STC 8051 MCU, you can still use UART printf and other way to do some debugging.

## Flashing/Programming

**NOTE, you need press RESET key on your development board when programming**

Every STC MCU have a bootloader(BSL) which support UART programming, usually **P3.0 pin is RX and P3.1 pin is TX**. the protocol is un-documented but can be analyzed.

A close source isp tool for windows named 'STC-ISP' is provided by STCmcu officially. It can be supported by wine under Linux.
You can use it as you like, just install wine from your dist repositories and use `winetricks -q mfc42` to install the mfc dll. you may also need to link '/dev/ttyUSB0' or '/dev/ttyACM0' (depending on the USB/UART adapter) to '~/.wine/dosdevices/com1', then the com device can be used by wine and stc-isp to find the USB/UART adaper.

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

A modified version of [stcflash](https://github.com/sms-wyt/stcflash) support most MCUS of STC8[A|C|F|G|H] series very well. 
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

## Project templates

There is also a [Project and Makefile template](https://github.com/cjacker/opensource-toolchain-8051/tree/main/blink) provied in this repo, with this well-defined Project/Makefile template, you can start your 8051 development under Linux very quickly. 

Please have a look at the Makefile, and you may also need to understand the meaning of '--iram-size'/'--xram-size'/'--code-size' and other details before starting a real project, but these will not be mentioned in this tutorial.

build:
```
make 
```

flashing/programming with stcgal:
```
make flash
```

flashing/programming with stcflash for STC8X series:
```
make flash8x
```

## Additions

By the way, these is also a opensource ISP tool for CH5xx 8051 series, please refer to [ch552tool](https://github.com/MarsTechHAN/ch552tool).

