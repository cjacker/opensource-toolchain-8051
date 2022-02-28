# Opensource toolchain for 8051 MCU

The [Intel MCS-51](https://en.wikipedia.org/wiki/Intel_8051) (commonly termed 8051, typically pronounced eight-oh-five-one) is a single chip microcontroller (MCU) series developed by Intel in 1980 for use in embedded systems. 

8051 microcontrollers are the first-generation microcontrollers that sparked the modern embedded-system era and established the basic concepts for almost all microcontrollers. In the early 1980s, 8051 microcontrollers were first introduced by Intel. Later other manufacturers like Philips (NXP), Atmel (now Microchip), Silicon Labs, Maxim, etc took the 8051 architecture and introduced their variants of 8051s. 

Today there are hundreds of such companies which still manufactures this old school legendary micro. of them have even added more features like ADCs, communication peripherals like SPI and I2C, etc that were not originally incepted or integrated. There are even some manufacturers who produce micros under their naming convention/branding while maintaining the basic architecture, Such as STC, WCH, Nuvoton, etc.

# STC 8051 MCU

STC is a Chinese semiconductor manufacturer, it took the model of 8051 just like other manufacturers and upgraded it to new levels by implementing some vital upgrades, enhancements and additions. It also manufactures standard 8051s which are designed to fit in place of any other 8051s from any manufacturer. At present STC has several different variants of 8051s, ranging from standard 40 pin regular DIP 8051s to tiny 8-pin variants. 

STC 8051 offers additional hardware peripherals comparing to standard 8051s. There are some STC microcontrollers like STC89C52RC that are same as the standard ones while some others like STC8H8K64U are more robust with many advanced features. you should refer to datasheet of the chip for details. 

The model name conventions of STC 8051 is a little bit different for different generations, it is not well-regulated, but still have rules, name of STC8051 consist of:

`STC [generations] [voltage range] [ram/rom size descriptions] [suffix to describe special feature]`

The generations of STC 8051 include: 89/90/10/11/12/15 and 8[A|C|F|G|H]

The voltage range usually is: c/f for 3.5-5.5v voltage range, l/le for 2.0-3.6v voltage range and w for 2.0-5.5 wide voltage range. but the latest STC 8 series does NOT follow this conventions.

The ram/rom size descriptions and suffix are not same meanings for defferent generations, but it follow the same rules for different models of same generation. you should refer to datasheet for details.

For example, STC89C516AD means STC 89 series, 3.5-5.5v voltage range, 64k rom size(516, 5 has no meaning, 16 means 16x4 rom size), with AD support, it's a 12T 8051 MCU.

Since STC 8051 is the most famouse and popular 8051 MCU in China, this tutorial will focus on STC 8051. there are no much different between 8051 products from different vendors, so you can also refer to this tutorial even you use chip from other vendors.

# Hardware requirements

Before you start the 8051 development, you need:

* A development board with STC 8051 MCU. I suggest you buy the earliest model such as STC89C52 or buy the latest model such as STC8H8K64U if you have no idea which one you should choose to learn.
* A USB to UART adapter if there is no one on board. it's used for flashing/programming. a lot of development board today already have one USB/UART chip on board, usually it's CH340 series.


# Toolchain overview
Opensource toolchain for 8051 (actually for any MCU not limited to 8051) consists of below components:
* Compiler
* Debugger
* SDK
* Flashing/Programming tool

Unfortunately, most 8051 products are lack of debugging support, although a little models today support IAP, but it's depend on commercial software solution and not widely used by developers. for STC 8051, the opensource toolchain is SDCC(compiler) + stcgal/stcflash(ISP tool).

## SDCC compiler
There are 2 common used C compiler for 8051 MCU, one is C51 (with keil IDE), a commercial close-source compiler provided by ARM, and one is [SDCC](http://sdcc.sourceforge.net), an opensource high quality 8bit c compiler.

I do not want to compare SDCC vs C51 here, there are also not much difference between them. In my opinions, I prefer the opensource one. for [syntax differences between SDCC and C51](), I will write another note, please refer to it.

Most linux dist. today already ship SDCC in their repositories, please use APT or YUM to install it according to your dist.

If you really want to build it yourself, at least you need make/bison/flex/libtool/g++/boost development package/zlib development package and other various packages installed and the building process is very simple:

```
./configure --prefix=<where you want to install SDCC>
make
make install
```

If the installation prefix isn't set to standard dir (such as '/usr' or '/usr/local), you need add the `<prefix>/bin` dir to PATH env.

## SDK

There is no standard SDK required for 8051 development. since it's very simple, 8051 'SDK' usually means a set of pre-defined registers of your MCU model and some wrap routines for common-use, for example, 'bit-bang' I2C protocol. So you can start 8051 development without install anything except SDCC compiler.

For developers' convenient, the compilers usually provide pre-defined headers for basic models, for example, reg51.h/reg52.h provided by Keil C51 and 8051.h provided by SDCC. But it's not enough to cover all resources/registers on chip of defferent models. you can define them by yourself in sources files (use `sbit` for SDCC) or use pre-defined headers.

The [stc headers in this repo]() provide a set of headers suite for SDCC compiler for different STC 8051 MCUs, you can use it directly. these headers come from STC-ISP, the ISP tool provided by official vender and converted to the format SDCC supported using [keil2sdcc](https://github.com/ywaby/keil2sdcc) with modifications manually.

There is also a [Makefile and project template]() provied in this repos, with this well-designed Makefile/Project template, you can start your 8051 development under Linux very quickly.

## Debugging
As mentioned above, most 8051 MCUs do **NOT** support debugging, a few models today support IAP, but lack of opensource tools, and also not widely used by developers

Although there is no GDB-like debugging tool for STC 8051 MCU, you can still use UART printf and other way to do some debugging job.

## Flashing/Programming
A close source isp tool for windows named 'STC-ISP' is provided by STC officially. It can be supported by wine with mfc42u.dll under Linux.
You can use it as you like, just install wine from your dist repositories and use `winetricks -q mfc42` to install the mfc dll. you may also need to link /dev/ttyUSB0 or /dev/ttyACM0 (depending to the USB/UART adapter) to ~/.wine/dosdevices/com1, then the com device can be used by wine and stc-isp to find your USB/UART adaper.

There are 2 opensourced ISP tool you can used under linux. 

One is [stcgal](https://github.com/grigorig/stcgal), it suppport STC models from STC89 series to STC15 series very well, but lack of supporting for the latest STC8[A|C|F|G|H] series. 

The other one is a modified version of [stcflash](https://github.com/sms-wyt/stcflash), it support STC8[A|C|F|G|H] series very well. 

## Additions
By the way, these is also a opensource ISP tool for CH5xx 8051 series, please refer to [ch552tool](https://github.com/MarsTechHAN/ch552tool).

