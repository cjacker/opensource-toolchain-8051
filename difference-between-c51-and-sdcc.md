# The difference between Keil C51 and SDCC

## Register definitions and name conventions
* Keil C51 use `sbit` to declare special registers and use form like `P2^1` to indicate the P2.1 IO pin register.(actually it's a XOR operator), 
for example: `sfr P2 = 0xA0; sbit P2_1 = P2 ^ 1;`
* SDCC use `__sbit` to declare special registers and '8051.h' shipped with SDCC prefer `P2_1` form. 
for example: `__sfr __at (0xA0) P2; __sbit __at (0xA0+1) P21;`
* Official STC headers prefer 'P21' form. all headers provided with this repo follow this style name convention.

And all registers already defined in headers, you should not need to care about this difference.

## Large constants storage
* Put lange constants such as a big array in Keil C51 is done with `code` keyworld after type declaration, for example: `unsigned char code table[] = {...}`.
* With SDCC, you should use `__code unsigned char table[] = {...}`

## Interrupt service routine declaration
* Keil use, for example: `void isr() interrupt 1` to declare a ISR.
* With SDCC, you should use `void isr() __interrupt(1)`, and it **MUST** have a prototype declaration 
within the source file of `main` function if the ISR implemented in a sperate C source file.

## data types
* Keil has 1 bit data type `bit`
* SDCC has 1 bit data type `__bit` and `__Bool`.

You can use `typedef` to re-define it.

## pre-defined functions and libraries
* Keil has some pre-defined functions, such as: _nop_(), cror(), etc. you should include 'intrins.h' header.
* With SDCC, there are also some pre-defined functions, such as: NOP(), but you should include 'compiler.h' header.

## C function headers.
* Keil C51 support old-style function parameter declaration as `void a(int a, b, c)`, the following type declaration can be omitted.
* SDCC does NOT support this form.
