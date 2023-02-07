# Opensource toolchain for 8051 MCU

The [Intel MCS-51](https://en.wikipedia.org/wiki/Intel_8051) (commonly termed 8051) is a single chip microcontroller (MCU) series developed by Intel in 1980 for use in embedded systems. 

8051 are first-generation microcontrollers that sparked the modern embedded-system era and established the basic concepts for almost all microcontrollers. In the early 1980s, 8051 microcontrollers were first introduced by Intel. Later other manufacturers like Philips (NXP), Atmel (now Microchip), Silicon Labs, Maxim, etc took the 8051 architecture and introduced their variants of 8051s. 

Today there are hundreds of companies (Such as Silicon Labs, Maxim, STC, Nuvoton, WCH, etc.) which still manufactures this old school legendary MCU. some of them have even added more features like ADCs, communication peripherals like SPI and I2C, etc that were not originally incepted or integrated. 

# Table of content
- [Hardware prerequist](https://github.com/cjacker/opensource-toolchain-8051#hardware-prerequist)
- [Toolchain overview](https://github.com/cjacker/opensource-toolchain-8051#toolchain-overview)
- [Compiler](https://github.com/cjacker/opensource-toolchain-8051#compiler)
  + [Naken_asm](https://github.com/cjacker/opensource-toolchain-8051#naken_asm)
  + [SDCC](https://github.com/cjacker/opensource-toolchain-8051#sdcc)
- [SDK](https://github.com/cjacker/opensource-toolchain-8051#sdk)
  + [Baremetal programming](https://github.com/cjacker/opensource-toolchain-8051#baremetal-programming)
    - [For naken_asm](https://github.com/cjacker/opensource-toolchain-8051#for-naken_asm)
    - [For SDCC](https://github.com/cjacker/opensource-toolchain-8051#for-sdcc)
  + [pre-defined headers](https://github.com/cjacker/opensource-toolchain-8051#pre-defined-headers)
    - [For naken_asm](https://github.com/cjacker/opensource-toolchain-8051#for-naken_asm-1)
    - [For SDCC](https://github.com/cjacker/opensource-toolchain-8051#for-sdcc-1)
- [Emulator](https://github.com/cjacker/opensource-toolchain-8051#emulator)
- [Programming](https://github.com/cjacker/opensource-toolchain-8051#programming)
  + [for STC8051 (from STC)](https://github.com/cjacker/opensource-toolchain-8051#for-stc8051-from-stc)
    - [stcgal](https://github.com/cjacker/opensource-toolchain-8051#stcgal)
    - [stcflash](https://github.com/cjacker/opensource-toolchain-8051#stcflash)
  + [for WCH CH55x](https://github.com/cjacker/opensource-toolchain-8051#for-wch-ch55x)
  + [for Silicon Labs C8051](https://github.com/cjacker/opensource-toolchain-8051#for-silicon-labs-c8051)
    - [with flash8051 from silicon labs](https://github.com/cjacker/opensource-toolchain-8051#with-flash8051-from-silicon-labs)
    - [with ec2-new](https://github.com/cjacker/opensource-toolchain-8051#with-ec2-new)
  + [for Silicon Labs EFM8](https://github.com/cjacker/opensource-toolchain-8051#for-silicon-labs-efm8)
    - [with C2](https://github.com/cjacker/opensource-toolchain-8051#with-c2)
    - [with factory programmed UART bootloader](https://github.com/cjacker/opensource-toolchain-8051#with-factory-programmed-uart-bootloader)
  + [for Nuvoton N76Exxx](https://github.com/cjacker/opensource-toolchain-8051#for-nuvoton-n76exxx)
  + [for Cypress CY7C68013A EZ-USB FX2LP](https://github.com/cjacker/opensource-toolchain-8051#for-cypress-cy7c68013a-ez-usb-fx2lp)
  + [for Atmel AT89S5x (now MicroChip)](https://github.com/cjacker/opensource-toolchain-8051#for-atmel-at89s5x-now-microchip)
  + [for Dallas DS89C430/450 (now Maxim)](https://github.com/cjacker/opensource-toolchain-8051#for-dallas-ds89c430450-now-maxim)
  + [for Philips P89C51Rx (now NXP)](https://github.com/cjacker/opensource-toolchain-8051#for-philips-p89c51rx-now-nxp)
- [Debugging](https://github.com/cjacker/opensource-toolchain-8051#debugging)
- [Project template](https://github.com/cjacker/opensource-toolchain-8051#project-template)

# Hardware prerequist

* 8051 board
  + STC 8051 series, AT89Cxx, Silicon Labs C8051/EFM8 series or Nuvoton N76E series are recommended.
  + You can use any 8051 parts from any vendor, this tutorial covers a lot of common models from different vendors, if your 8051 MCU not mentioned here, please provide some information to improve this tutorial.
 
**NOTE**:
* for C8051/EFM8 series from Silicon Labs, you need a [8-bit USB Debug Adapter](https://www.silabs.com/development-tools/mcu/8-bit/8-bit-usb-debug-adapter) or toolstick with jtag or c2 protocol support to program and debug. only few early models usy JTAG protocol, most latest models only support C2 protocol.
* for N76E series from Nuvoton, you need Nu-Link adatper (or Nu-Link-Me integrated with official EVB) to program (lack of opensource debugging support now).

# Toolchain overview

* Compiler: 
  - naken_asm or as31 for ASM
  - SDCC for C
* SDK: include files for each model.
* Emulator: emu8051, edsim51
* Programming tool: various tools, different for each manufactor.
* Debugger: various way, different for each manufactor.

# Compiler

## Naken_asm

[naken_asm](https://github.com/mikeakohn/naken_asm) is an assembler for MSP430, dsPIC, ARM, MIPS, 65xx, 68000, 8051/8052, Atmel AVR8, and others. It can be used with any 8051 models from any vendors.

I perfer to use assemblly language to learn 8051, since 8051 architecture is simple and the instruction set is very easy to use. using asm will help you to understand the RAM layout, SFRs, etc better.

Usually, most of dist. provide naken_asm, you can install naken_asm from your distribution's package repository directly.

If you want to build it yourself:

```
git clone https://github.com/mikeakohn/naken_asm.git
cd naken_asm
./configure --install-prefix=/usr --include-path=/usr/share/naken_asm/include
make 
sudo make install
```

`--include-path` specify where you want to install device include files of naken_asm. device include files contains SFR and bit defininations, as above example, the 8051 device include files will be installed to `/usr/share/naken_asm/include/8051` dir.


## SDCC

There are 2 widely used C compiler for 8051 MCU, one is Keil C51, a commercial close source compiler. and one is [SDCC](http://sdcc.sourceforge.net), an opensource compiler. There are not much differences between them, I wrote a brief note here about [syntax differences between SDCC and C51](https://github.com/cjacker/opensource-toolchain-8051/blob/main/difference-between-c51-and-sdcc.md), you can take it as a reference.

Most linux distribution already shipped SDCC in their repositories, If you really want to build it yourself, at least you need make/bison/flex/libtool/g++/boost/zlib development packages and other various packages installed.

the building process is very simple:

```
./configure --prefix=<where you want to install SDCC>
make
make install
```

If the prefix isn't set to standard dir (standard dir is '/usr' or '/usr/local), you need add the `<prefix>/bin` dir to `PATH` env.

# SDK

the 'SDK' of 8051 development usually means a set of pre-defined registers(SFRs) and bits for your MCU model. there are no standard SDKs or libraries required to start 8051 development, you can define SFRs in your source code and start 8051 development without install anything except the compiler.

But if your codes is complex, such as using timer/interrupt, you have to define a lot of SFRs and BITs, the better way is using the include files provided by MCU vendors. if it's for Keil C51, you can use `keil2sdcc` to convert the headers to SDCC format. For naken_asm, since the `inc` files is naken_asm format, you may need write a script to convert them.

## Baremetal programming

### For Naken_asm:

```
; blink_softdelay.asm
;
; build: naken_asm -o blink_softdelay.hex blink_softdelay.asm

; directive to tell naken_asm this is a 8051 asm source file.
.8051

; according to datasheet, define port 2 addr
P2 equ 0xa0
; define a BIT for LED
LED equ P2.1

; code addr arrangement
.org 0x0000h
start:
  ; a simple loop to blink led and delay
  loop:
  cpl LED
  lcall delay
  sjmp loop

; delay subroutine
delay:
  mov R0, #255
  _outer_loop:
    mov R1, #255
    _inner_loop:
      nop
      djnz R1, _inner_loop
    djnz R0, _outer_loop
  ret
; end of source file
end
```

Build the asm like this:

```
naken_asm -o blink_softdelay.hex blink_softdelay.asm
```


### For SDCC:

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

## Pre-defined Headers

The compilers usually provide pre-defined headers for some basic models. for example, reg51.h/reg52.h provided by Keil C51, 8051.h provided by SDCC and 8051.inc provided by naken_asm. Usually it's not enough to cover all resources/registers of defferent models, especially models with improvements, enhancements and addtitions. you will need specific headers for each model or you can define them by yourself in sources files (use `__sfr` and `__sbit` of SDCC) according to the datasheet.

### For naken_asm

The [naken_asm header within this repo](https://github.com/cjacker/opensource-toolchain-8051/tree/main/naken_asm-headers) provide a set of headers for naken_asm include all STC 8051 models, most of C8051F/EFM8 models, WCH ch552/ch554/ch559 and Nuvoto n76e003/n76e616/n76e885. These headers should be put to `/usr/share/naken_asm/include/8051` or your customized include path.

For example, using timer0 mode1 to blink LED every second for STC89C52 with FOSC 11.0592Mhz:

```
; blink.asm
; build: naken_asm -o blink.hex blink.asm

.8051
.include "stc89xx.inc"

LED equ P2.1

.org 0x0000h
ljmp start

.org 0x000bh
ljmp timer0_isr

start:
  setb LED
  
  ; TMOD = 0x01h
  orl TMOD, #0x01h
  anl TMOD, #0xfdh
  
  ;65536-50000/((1/11.0592)*12) = 19456 = 0x4c00
  mov TH0, #0x4c
  mov TL0, #0x00
  
  setb EA
  setb ET0
  setb TR0

  mov A, #0

  sjmp $

timer0_isr:
  mov TH0, #0x4c
  mov TL0, #0x00
  cjne A, #20, continue_count
    mov A, #0
    cpl LED
    ajmp isr_end
  continue_count:
    inc A
  isr_end:
    reti

end
```

and build it:
```
naken_asm -o blink.hex blink.asm
```

### For SDCC

The [SDCC headers within this repo](https://github.com/cjacker/opensource-toolchain-8051/tree/main/headers) provide a set of headers not provided by SDCC, include all STC 8051 models, most of C8051F/EFM8 models, WCH ch552/ch554/ch559 and Nuvoto n76e003/n76e616/n76e885, these headers usually come from vendor's official demo packages, and was converted to the format SDCC supported using [keil2sdcc](https://github.com/ywaby/keil2sdcc) with modifications manually.

For example, above codes can be writen as:

```
// define STC MCU model of your development board.
// refer to stc51.h for more information.
#define STC89

// meta header for stc51 series
#include <stc51.h>

#define LED P21

static int count = 0;

void main()
{
	LED = 1;

	TMOD = 0x01;
	TH0 = 0x4c;
	TL0 = 0x00;

	EA = 1;
	ET0 = 1;
	TR0 = 1;

	while(1);
}

void timer0_isr() __interrupt 1
{
  TH0 = 0x4c;
  TL0 = 0x00;

  if(count < 20) {
    count++;
    return;
  }
  if(count == 20) {
    LED = !LED;
    count = 0;
  }
}
```

and build:

```
sdcc -mmcs51 -I./stc-headers led.c
packihx led.ihx >led.hex
makebin led.hex led.bin
```

There is also a header `softdelay.h` provided for STC 8051 MCUs and pre-define some widely used softdelay functions, such as `delay200ms()`, you can used directly in your codes. for example:


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
    // set P2.1 to Push-Pull mode.
    P2M0 = 0x02;
    P2M1 = 0x00;
#endif
    while(1) {
        P21 = !P21;
        delay200ms();
    }
}
```

**NOTE**, every model may have some special registers, please refer to the DATASHEET before starting write the codes. and the blink example in this repos covers a lot of models from different vendors, you can take it as reference.

# Emulator

There are various 8051 emulators you can use, such as `edsim51`(free but not opensource), `mcu8051ide`, `ucsim_51`(shipped with SDCC).

I prefer to use `emu8051` as emulator to watch how code works and help debugging.

The upstream url is https://github.com/jarikomppa/emu8051.

And there are some fixes not upstreamed, you'd better use my fork:
```
git clone https://github.com/cjacker/emu8051/
cd emu8051
make
```

The usage of emu8051 is very simple, please read the docs or have a try to figure out how to use it.

Another good choice is `edsim51`, free but not opensource, it is also worth a try.

# Programming

## for STC8051 (from STC)

Every STC MCU have a bootloader(BSL) which support UART programming, as we know **the P3.0 pin is RX and P3.1 pin is TX**, most development board already have a USB to UART chip integrated, you just need to use a USB cable to connect it to Linux PC. 

The official close source isp tool for windows is 'STC-ISP'. It can be run with wine under Linux. you need install wine and use `winetricks -q mfc42` to install the mfc dll. you may also need to link '/dev/ttyUSB0' or '/dev/ttyACM0' (depending on the USB/UART adapter) to '~/.wine/dosdevices/com1', then the COM device can be used by STC-ISP to find the USB/UART adaper. The STC-ISP tool is useful if you want to adjust some config options which not supported by opensource utilities.

There are 2 opensource STC ISP tool you can use with linux. 

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

A modified version of [stcflash](https://github.com/sms-wyt/stcflash) support most MCUs of the latest STC8[A|C|F|G|H] series very well. 
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

These are various opensource ISP tool for WCH CH5xx 8051 series, I prefer the c++ one [ch55x-isptool](https://github.com/cjacker/ch55x-isptool), and make a fork to add more ch55x models support. 

```
git clone https://github.com/cjacker/ch55x-isptool.git
cd ch55x-isptool
make
sudo make install DESTDIR=/usr

sudo ch55x-isptool firmwire.bin
```

Another good isp tool is [ch552tool](https://github.com/MarsTechHAN/ch552tool). it written by python and can support CH551/CH552/CH553/CH554/CH559 with various bootloader version.

## for Silicon Labs C8051

As metioned above, C8051 series MCU from Silicon Labs requires [8-bit USB Debug Adapter](https://www.silabs.com/development-tools/mcu/8-bit/8-bit-usb-debug-adapter) to program and debug. these MCUs support either JTAG (few models) or C2 protocol. you need to acquire such a device first and wire it up before you continue reading this section .

### with flash8051 from silicon labs

There are [official linux utils from Silicon Labs](https://github.com/cjacker/siliconlabs-c8051-efm8-utils), include `device8051` to inspect device, `flash8051` to program. Part of these utils are open-sourced.

Take C8051F320 as example, to detect the adapter and target device infomation:

```
sudo device8051 -slist
```
The output looks like:
```
deviceCount = 1
device (EC60000B878) {
  adapterLabel = USB Debug Adapter
  SerialNo = EC60000B878
  targetInterface = c2
  Name = C8051F320
  Type = MCU
  Family = 8051
  BoardID =
  BoardCount = 0
  HardwareID = 0x9
  DerivativeID = 0x58
  HardwareRev = 0x3
  DerivativeRev = 0x6
  Unsupported = 0
  Indeterminate = 0
  Connected = 0
  Locked = 0
}
```

To program:

```
sudo flash8051 -sn EC60000B878 -tif c2 -erasemode full -upload filename.hex
```

### with ec2-new

[ec2-new](https://github.com/paragonRobotics/ec2-new) is a fork of [e2drv](http://ec2drv.sourceforge.net/), an opensource project to support Silicon Labs [USB Debug Adapter (UDA)](https://www.silabs.com/development-tools/mcu/8-bit/8-bit-usb-debug-adapter). It contain a lot of programs for device detection and programming, and newcdb is the text-based interactive debugger, which can be used to debug programs.

By the way, there are a lot of USB Debug Adapter clones, The official UDA does **NOT** provide 3.3v voltage output, but some clones called 'U-EC6' provide 3.3v voltage output.

As I verified, the [ToolStick](https://www.silabs.com/development-tools/mcu/8-bit/toolstick-base-adapter) debugger, the [official EC6 USB debug adapter](https://www.silabs.com/development-tools/mcu/8-bit/8-bit-usb-debug-adapter) and other clones (no matter U-EC3 or U-EC6) works very well. if you encounter any issue, please try to reset the firmware with official [USB Reset Utility](https://www.silabs.com/documents/login/software/USB_Reset_Utility.zip).

There is different version of 'USB Reset Utility':
```
  USB Reset Utility Version 1.7 - June 1, 2013
  USB Reset Utility Version 1.6 - December 17, 2012
  USB Reset Utility Version 1.5 - August 1, 2012
  USB Reset Utility Version 1.3 - September 17, 2007
  USB Reset Utility Version 1.1 - September 12, 2006
```

Some UDA clones called 'U-EC6' can only use 'USB Reset Utility Version 1.3' to reset the firmware. But the official UDA can use the latest 1.7 version.

I make a fork of 'ec2-new' to fix some bugs and add ToolStick and more C8051F/EFM8 parts support, also include heavy improvments to newcdb debugger. 

**Build and Installation:**

```
git clone https://github.com/cjacker/ec2-new.git
cd ec2-new
git checkout more_devices
autoreconf -ivf
./configure --prefix=/usr/local
make
sudo make install
```

**Detect device:**

```
sudo ec3adapters
sudo ec2device --port USB
```

**Program:**

```
sudo ec2writeflash --port USB --hex xxx.hex --run
```

## for Silicon Labs EFM8

EFM8 can be programmed with C2 protocol or with factory UART bootloader.

### with C2

There is no good and confirm-to-work opensource utilities to program EFM8 with C2 protocol except ['ec2-new'](https://github.com/paragonrobotics/ec2-new.git) with [my improvements](https://github.com/cjacker/ec2-new.git) to add EFM8 parts support.

You can use ['ec2-new'](https://github.com/cjacker/ec2-new.git) with UDA/ToolStick to program most EFM8 models. 

For usage of 'ec2-new', please refer to above 'C8051F' section.

Silicon Labs also officially provided [linux utils to program C8051 and EFM8](https://github.com/cjacker/siliconlabs-c8051-efm8-utils), as mentioned in 'C8051' section, it includes `device8051` to detect device, `flash8051`/`flashefm8` to program.

If you have EFM8 breakout board without any debugger integrated, you can use [8-bit USB Debug Adapter](https://www.silabs.com/development-tools/mcu/8-bit/8-bit-usb-debug-adapter) to program it.

If you use official starter kit or old toolstick development platform, usually there is a debugger on board, either toolstick or jlink. For example, I have an [EFM8BB1-LCK](https://www.silabs.com/development-tools/mcu/8-bit/efm8bb1lck-starter-kit) board with 'Toolstick F330 DC' debugger on board.

To detect device:

```
sudo device8051 -slist
```

The output looks like:

```
deviceCount = 1
device (LCK0081654) {
  adapterLabel = EFM8LCK
  SerialNo = LCK0081654
  targetInterface = c2
  Name = EFM8BB10F8G-QSOP24
  Type = MCU
  Family = 8051
  BoardID = efm8bb1lcba
  BoardCount = 1
  HardwareID = 0x30
  DerivativeID = 0x1
  HardwareRev = 0x2
  DerivativeRev = 0xb
  Unsupported = 0
  Indeterminate = 0
  Connected = 0
  Locked = 0
}
```

To program:

```
# sn and tif can be detect by device8051
# change the 'sn' according to your UDA
sudo flash8051 -sn LCK0081654 -tif c2 -erasemode full -upload firmware.hex
```


### with factory programmed UART bootloader

Most of EFM8 devices are factory programmed with a bootloader. Below table indicates which devices are orderable with the specified factory-programmed bootloader. For more information, please refer to [AN945: EFM8 Factory Bootloader User's Guide](https://www.silabs.com/documents/public/application-notes/an945-efm8-factory-bootloader-user-guide.pdf).
 
![screenshot-2022-06-09-10-35-25](https://user-images.githubusercontent.com/1625340/172752098-91b125cb-dc5f-4124-9da9-dd89c1406590.png)

Use EFM8BB1-LCK Starter Kit as example, since [EFM8BB1-LCK has NO UART bootloader by default](https://community.silabs.com/s/question/0D58Y00008K6xfoSAB/efm8bb1lck-board-and-onchip-uart-bootloader?language=en_US), the customer firmware wiped the pre-installed UART bootloader, we need to program it back.

The bootloader file 'EFM8BB10F8G_QSOP24.hex' for EFM8BB1-LCK EVB can be found in [AN945SW](https://www.silabs.com/documents/public/example-code/AN945SW.zip) (the EFM8 Factory Bootloader package), located at 'ProductionDeviceHexfiles/EFM8BB1/EFM8BB10F8G_QSOP24.hex'. 

It can be programmed either with `flash8051` or `ec2-new` with my improvements.

```
# change the 'sn' according to your Debugger
sudo flash8051 -sn LCK0081654 -tif c2 -erasemode full -upload EFM8BB10F8G_QSOP24.hex
```
or
```
ec2writeflash --port USB --mode=C2 --eraseall --hex EFM8BB10F8G_QSOP24.hex
```

If you use a simple breakout board without usb debug adapter integrated, you may need a standalone 8-bit usb debug adapter or toolstick from silicon labs.

After bootloader programmed, connect a serial adapter as:

```
P0.5(RX) -> TX of serial adapter
P0.4(TX) -> RX of serial adapter
GND      -> GND of serial adapter
VDD      -> 3.3v or 5v of serial adapter
```
Before power on the target device, please check the datasheet to make sure whether it use 5v or 3.3v voltage and check your power supply carefully.

Empty EFM8 chips will enter the bootloader on every start. Once it have a firmware uploaded, **the bootloader can be activated again by pulling C2D low (connect the C2D pin to GND) and power on.**

The programming utilities to work with EFM8 UART bootloader can be downloaded from my [efm8load](https://github.com/cjacker/efm8load) repo.

```
$ git clone https://github.com/cjacker/efmload.git
$ git submodule update --init
$ cd efmload
$ make
$ make install DESTDIR= PREFIX=/usr
$ hex2boot filename.hex -o filename.efm8
$ efm8load -p /dev/ttyUSB0 -b 115200 -t filename.efm8
```

## for Nuvoton N76Exxx

To program Nuvoton N76E series 8051 MCU, you need have a Nu-link adapter (from offcial EVB or standalone version) and wire up 5 pins: VCC/DAT/CLK/RST/GND.

[nuvoprog](https://github.com/erincandescent/nuvoprog) is an open source tool for programming Nuvoton microcontollers. I make a fork to add N76E616/N76E885 support.

Installation:
```
go get -u github.com/cjacker/nuvoprog
```

Program:

```
sudo nuvoprog program -t n76e003 -i build/firmware.ihx -c @config.json
```

Please refer to blink demo for details of 'config.json'.


## for Cypress CY7C68013A EZ-USB FX2LP
You need download [cycfx2prog](http://www.triplespark.net/elec/periph/USB-FX2/software/cycfx2prog-0.47.tar.gz) from http://www.triplespark.net/elec/periph/USB-FX2/software/, the latest version is 0.47.

Build and Installation:
```
wget http://www.triplespark.net/elec/periph/USB-FX2/software/cycfx2prog-0.47.tar.gz
tar xf cycfx2prog-0.47.tar.gz
cd cycfx2prog-0.47
make
sudo install -m0755 cycfx2prog /usr/bin
```
Detection:
```
cycfx2prog --list
```
The output looks like:
```
Bus 001 Device 024: ID 04b4:8613 (unconfigured FX2)
```

Programming:
```
cycfx2prog prg:main.hex run
```

**NOTE**: the program uploaded for RAM will purge automatically after power off. 

There are Library routines for creating firmware for the Cypress FX2 (CY7C68013 and variants) with SDCC, please refer to [libfx2](https://github.com/whitequark/libfx2) and [fx2lib](https://github.com/djmuhlestein/fx2lib).

For other programer:

fxload: https://github.com/esden/fxload

fx2tool: https://github.com/whitequark/libfx2

For more information of EZ-USB FX2 development, please refer to [EZ-USB FX2 Manual Technical Reference](https://www.infineon.com/dgdl/Infineon-EZ-USB_TECHNICAL_REFERENCE_MANUAL-AdditionalTechnicalInformation-v08_00-EN.pdf?fileId=8ac78c8c7d0d8da4017d0f9093657d61)


## for Atmel AT89S5x (now MicroChip)

AT89S51/52 can be programmed with `avrdude` and USBASP adapter. Relative to AVR, the RESET signal of 8051 MCU are inverted, which means that you reset the chip by connecting the RESET pin to VCC, Therefore you need to invert the RESET signal of USBASP programmer. I use 74HC04 to invert the RESET signal, it works very well. you can also use a NPN triode to invert signal like:

![inverters](https://user-images.githubusercontent.com/1625340/171430169-860e4ff4-b8b0-43b1-bca1-c37a98e004e8.jpg)

If you use breadboard to setup a minimum system, be careful with the 'POWER ON RESET' circuit. Usually, the POR circuit should be 'VCC->10uf capacitor->RESET->10k resistor->GND'. and the EA pin should connect to VCC if there is no external storage.

And you should connect the inverted RESET signal directly to RESET pin of AT89S5x.

The simple inverter and por circuit I use looks lik:

```
             (Reset Inverter)      (Power On Reset)
                    VCC                 VCC
                     |                   |
                     |                   |
                    1K Ohm              10uF
                     |                   |
                     |-------------------+----RESET pin of AT89S52
                     |                   |
RESET of USBASP --> NPN                 10K Ohm
                     |                   |
                     |                   |
                     |                   |
                    GND                 GND
```


There is a 'at89.conf' in this repo, append it to `/etc/avrdude/avrdude.conf`, then use below command to program the AT89Sxx MCU:

```
avrdude -c usbasp -p 8052 -B 20 -e -U flash:w:<where your hex file>
```

Note the '-B 20', try to adjust it to find which value is the best for your circuit.


The output looks like:

```
avrdude: set SCK frequency to 32000 Hz
avrdude: AVR device initialized and ready to accept instructions

Reading | ################################################## | 100% 0.01s

avrdude: Device signature = 0x1e5206 (probably 8052)
avrdude: erasing chip
avrdude: set SCK frequency to 32000 Hz
avrdude: reading input file "main.hex"
avrdude: input file main.hex auto detected as Intel Hex
avrdude: writing flash (24 bytes):

Writing | ################################################## | 100% 0.16s

avrdude: 24 bytes of flash written
avrdude: verifying flash memory against main.hex:
avrdude: load data flash data from input file main.hex:
avrdude: input file main.hex auto detected as Intel Hex
avrdude: input file main.hex contains 24 bytes
avrdude: reading on-chip flash data:

Reading | ################################################## | 100% 0.06s

avrdude: verifying ...
avrdude: 24 bytes of flash verified

avrdude: safemode: Fuses OK (E:FF, H:FF, L:FF)

avrdude done.  Thank you.
```

## for Dallas DS89C430/450 (now Maxim)

According to the datasheet and user guide (MAXIM AN4833), the 430/450 8051 MCU has a bootloader which can perform programming directly.

![screenshot-2022-05-31-10-36-13](https://user-images.githubusercontent.com/1625340/171081748-59f380c5-009e-4f47-a2af-6ff41873b18a.png)

To test this MCU, I made a minimum system board:

![ds89](https://user-images.githubusercontent.com/1625340/171080894-59e53658-707c-483d-9788-21aad9d22834.jpg)

To involk the bootloader when power on, connect RST to VCC, EA/PSEN to GND, then wire to a ch340 USB TTL adapter as:

```
CH340   :   DS89C430
VCC    ->   VCC
GND    ->   GND
RX     ->   TX0
TX     ->   RX0
```

Then power up by the CH340 adapter and use below command to connect to the bootloader:

```
minicom -D /dev/ttyUSB0 -b 57600
```

Note the '57600' baudrate, refer to user guide of ds89c430 to find the baudrate you should use, it depend on the oscilator.

After connected, press Enter, you will get a banner msg:

<img src="https://user-images.githubusercontent.com/1625340/171081565-9ce6ac05-cb79-404d-bb5a-73d5d7484f3c.png" width="60%"/>

Input `K<enter>` to erase the internal flash and Input `L<enter>` to load the hex file to flash(use minicom to send the hex file as ASCII file).

You can find more information about bootloader commands from the user guide (AN4833).

After programming finished, power off and leave RESET and PSEN float and connect EA pin to VCC, then power on, the MCU will run in normal mode.

There is a recommended circuit with 74HC125 in USER GUIDE:

<img src="https://user-images.githubusercontent.com/1625340/172283230-e5c4b373-9c6f-439e-b55a-2f3aeeb7d283.png" width="50%"/>

You can use 'DTR' from a ch340 serial adapter with a 74HC125 to control RESET/EA and PSEN at the same time.

## for Philips P89C51Rx (now NXP)
Here has a very good article about how to program P89C51Rx: https://www.dos4ever.com/isp/isp.html

Note, according to datasheet, not all P89C51 has a bootloader, only 89C51Rx2 and 89C66x support ISP program.

![screenshot-2022-06-02-16-53-05](https://user-images.githubusercontent.com/1625340/171593834-0876eb53-f667-432d-a5b5-772a0e90383e.png)


# Debugging

There is no standard debugging tool such as gdb for 8051 MCUs from various different vendors. you can take SDCC manual (Chapter 5. Debugging) as refrence to find a debugging way you can use with your own 8051 MCU. gennerally:

* Debugging on a simulator:

you can use `sdcdb` debugger and `ucsim-51` simulator shipped with SDCC.

* Debugging on target using an on-target monitor:

A monitor firmware need to program to MCU first. good examples of monitors are [paulmon](https://www.pjrc.com/tech/8051/paulmon2.html) and [cmon51](http://cmon51.sourceforge.net/), but you may need modified the codes to match your MCU's resources and settings.

* Debugging on target using an ICE (in circuit emulator):

An ICE device is usually a little bit expensive. for Silicon Labs C8051Fx series, you can use UDA with `newcdb` to debug program for supported device. 

Here is a brief introduction about how to use `newcdb`(with my improvments) to debug C8051/EFM8 program. 

At first, use '--debug' arg with 'sdcc' to generate debugging information, the 'blink' example in this repo will generated 'firmware.cdb' and other debugging related files automatically.

Then, using `ec2device --port USB` to check your device is supported or not. If it report 'Tested: TRUE', that means your device is fully supported by 'newcdb'.

In blink dir,

**to launch newcdb:**

```
newcdb
```

**to connect target device:**

```
set target SL51
set target port USB
set target connect
file firmware.cdb
```
Or more efficient way:

```
connect
file firmware.cdb
```

**to list content of specific sources:**

```
list FILENAME:LINE_NUM
list FUNCTION_NAME
```

**to continue listing:**

```
list
```

**to set a breakpoint:**
```
break FILE:LINE_NUM
break *ADDR
break FUNCTION_NAME
```

**to view breakpoints:**
```
info breakpoints
```

**to view important registers:**

```
info registers
```

**to read/write PC/Rn/SFR/Paged SFR/BIT/DATA/XDATA and CODE(READ ONLY):**

```
readpc
readbit BIT_NAME[or BIT_DOT_NOTATION or BIT_BY_NUMBER] BIT2 ...
readregister SFR_NAME[or Rn or SFR_ADDR] ...
readpsfr PAGE_NUM SFR_ADDR
readdata start_addr [nbyte]
readxdata start_addr [nbyte]
readcode start_addr [nbyte]

writepc VALUE
writebit BIT_NAME[or BIT_DOT_NOTATION or BIT_BY_NUMER]=VALUE
writeregister SFR_NAME[or Rn or SFR_ADDR]=VALUE
writepsfr PAGE_NUM SFR_ADDR=VALUE
writedata ADDR=VALUE
writexdata ADDR=VALUE
```

**to run/step/stepi program:**

```
run
step
stepi
```

**to disassemble:**

```
disassemble START_ADDR END_ADDR
disassemble FUNCTION_NAME
```

For more infomation about newcdb usage, type `help`:

```
help target:      setup/connect to target device
help breakpoints: add/delete breakpoints
help readwrite:   read/write Rn/SFR/bit and memory address
help disassemble: disassemble a speficied section
help control:     run/step/continue the program
help info:        query various information
help file:        load and list files
```


# Project template

With [Project and Makefile template](https://github.com/cjacker/opensource-toolchain-8051/tree/main/blink) in this repo, you can start 8051 development under Linux very quickly. 

Please have a look at the Makefile, and you may also need to understand the meaning of '--iram-size'/'--xram-size'/'--code-size' and other details before starting a real project.

build:
```
make 
```

programming:
```
make flash_[stc|stc8x|ch55x|c8051f_with_ec2new|c8051f_with_flash8051|efm8_with_flashefm8|efm8_with_uart_bootloader|76e003|76e616|76e885|fx2]
```
