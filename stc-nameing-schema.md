# STC 8051 MCU

STC is a Chinese semiconductor manufacturer, it took the model of 8051 and upgraded it to new levels by implementing some vital upgrades, enhancements and additions. It also manufactures standard 8051s which are designed to fit in place of any other 8051s from any manufacturer. At present STC has several different variants of 8051s, ranging from standard 40 pin regular DIP 8051s to tiny 8-pin variants. 

There are some STC microcontrollers like STC89C52RC that are same as the standard ones while others like STC8H8K64U are more robust with many advanced features. you should refer to corresponding datasheet of the chip for details. 

The model name conventions of STC 8051 is different for every different generation, it is not well-regulated, but still have some rules, usually the model name of STC8051 consist of:

`STC[generation] [one or two letters for voltage range] [some numbers for ram/rom size descriptions] [a suffix to describe special features]`

The generation of STC 8051 include 89/90/10/11/12/15 and 8[A|C|F|G|H].

The voltage range usually is 'c' or 'f' for 3.5-5.5v voltage range, 'l' or 'le' for 2.0-3.6v voltage range and 'w' for 2.0-5.5 wide voltage range. but the latest STC 8[A|C|F|G|H] series and some special modules does NOT follow these rules. 

The ram/rom size descriptions and the suffix are not same meanings for different generation, but it follow the same rule for different models of same generation. Again, please refer to corresponding datasheet for details.

For example, STC89C516AD, the '89' means STC 89 series, 'C' means 3.5-5.5v voltage range, '16' means 64k rom size(5 of 516 has no meaning, 16 means 16x4k rom size), with 'AD' support, it's a ['12T'](https://en.wikipedia.org/wiki/Instruction_cycle) 8051 MCU. STC also provide 6T and 1T MCU.

Since STC 8051 is the most famous and popular 8051 MCU in China, this tutorial will mostly focus on STC 8051. there is not so much different between 8051 MCUs from different vendors, so you can also refer to this tutorial even use chips from other vendors.

By the way, STCmcu also have STC16/STC32 80251 series MCU,  and without opensource toolchain support up to this tutorial written. But you still can use 8051 opensource toolchains with such 80251 MCU, it's binary compatible.
