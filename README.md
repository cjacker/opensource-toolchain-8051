# Opensource toolchain for 8051 MCU
The [Intel MCS-51](https://en.wikipedia.org/wiki/Intel_8051) (commonly termed 8051, typically pronounced eight-oh-five-one) is a single chip microcontroller (MCU) series developed by Intel in 1980 for use in embedded systems. 

8051 microcontrollers are the first-generation microcontrollers that sparked the modern embedded-system era and established the basic concepts for almost all microcontrollers. In the early 1980s, 8051 microcontrollers were first introduced by Intel. Later other manufacturers like Philips (NXP), Atmel (now Microchip), Silicon Labs, Maxim, etc took the 8051 architecture and introduced their variants of 8051s. 

Today there are hundreds of such companies which still manufactures this old school legendary micro. of them have even added more features like ADCs, communication peripherals like SPI and I2C, etc that were not originally incepted or integrated. There are even some manufacturers who produce micros under their naming convention/branding while maintaining the basic architecture, Such as STC, WCH, Nuvoton, etc.

# STC 8051 MCU

STC is a Chinese semiconductor manufacturer, it took the model of 8051 just like other manufacturers and upgraded it to new levels by implementing some vital upgrades, enhancements and additions. It also manufactures standard 8051s which are designed to fit in place of any other 8051s from any manufacturer. At present STC has several different variants of 8051s, ranging from standard 40 pin regular DIP 8051s to tiny 8-pin variants. 

STC 8051 offers additional hardware peripherals when compared to standard 8051s. There are some STC microcontrollers like STC89C52RC that are same as the standard ones while some others like STC8H8K64U are more robust with many advanced features. you should refer to datasheet of the chip for details. 

The model name conventions of STC 8051 is a little bit different for different generations, it is not well-regulated, but still have rules, name of STC8051 consist of:

`STC [generations] [voltage range] [ram/rom size descriptions] [suffix to describe special feature]`

The generations of STC 8051 include: 89/90/10/11/12/15 and 8[A|C|F|G|H]

The voltage range usually is: c/f for 3.5-5.5v voltage range, l/le for 2.0-3.6v voltage range and w for 2.0-5.5 wide voltage range. but the latest STC 8 series does NOT follow this conventions.

The ram/rom size descriptions and suffix are not same meanings for defferent generations, but it follow the same rules for different models of same generation. you should refer to datasheet for details.

For example, STC89C516AD means STC 89 series, 3.5-5.5v voltage range, 64k rom size(516, 5 has no meaning, 16 means 16x4 rom size), with AD support.

Since STC 8051 is the most famouse and popular 8051 MCU in China, this tutorial will focus on STC 8051. there are no much different between 8051 products from different vendors, so you can also refer to this tutorial even you use chip from other vendors.

# Toolchain overview
Opensource toolchain for 8051 (actually for any MCU not limited to 8051) consists of below components:
* Compiler
* Debugger
* SDK
* Flashing/Programming tool

Unfortunately, most 8051 products lack of debugging support, although a little models today support IAP, but it's depend on commercial software solution and not widely used by developers. for STC 8051, the opensource toolchain is SDCC(compiler) + stcgal/stcflash(ISP tool).

## SDCC compiler
Please refer to [SDCC](http://sdcc.sourceforge.net/) for more information, most linux dist. today already ship SDCC in their repositories, please use APT or YUM to install it according to your dist.

If you really want to build it yourself, at least you need make/bison/flex/libtool/g++/boost development package/zlib development package and other various packages installed and the building process is very simple:

```
./configure --prefix=<where you want to install SDCC>
make
make install
```

If the prefix isn't set to standard dir (such as '/usr'), you need add the your `<prefix>/bin` dir to PATH env.

## SDK
There is no standard SDK for 8051, since it's very simple, a 8051 SDK usually means a set of pre-defined registers of your MCU model and some wrap routines for common-use. So you can start 8051 development without install anything except SDCC compiler.

For developers' convenient, you can find some predefined headers (mostly the defination of registers) for some common 8051 models, for example, reg51.h/reg52.h provided by Keil C51 (commercial software for Windows provided by ARM) and 8051.h provided by SDCC. 




