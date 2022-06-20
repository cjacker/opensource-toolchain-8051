// blink led, Pin->Resistor->LED->GND

#define STC89 

#if defined(STC89)
  #include <stc51.h>
  #define LED P34

#elif defined(STC8H)
  #include <stc8h.h>
  #define LED P34

#elif defined(C8051F120)
  #include <C8051F120.h>
  #define LED P3_3

#elif defined(C8051F320)
  #include <C8051F320.h>
  #define LED P0_6

#elif defined(EFM8BB1) || defined(EFM8BB2)
  __sfr __at(0x97) WDTCN;
  __sfr __at(0xA5) P1MDOUT;
  __sfr __at(0xD5) P1SKIP;
  __sfr __at(0xE3) XBR2;
  __sbit __at(0x90+3) P13;
  __sbit __at(0x90+4) P14;
  #if defined(EFM8BB1)
    #define LED P14
  #elif defined(EFM8BB2) // my EFM8BB21F16G breakout board has LED to P13
    #define LED P13
  #endif

#elif defined(N76E003)
  #include <n76e003.h>
  #define LED P12

#elif defined(N76E616)
  // my 616 dev board have 2 leds on board.
  #include <n76e616.h>
  #define LED P21
  #define LED1 P22

#elif defined(N76E885)
  // NuTiny board have 2 les.
  #include <n76e885.h>
  #define LED P03
  #define LED1 P04

#elif defined(CH552)
  #include <ch552.h>
  #define LED P32

#elif defined(FX2)
  #include <fx2regs.h>
  #define LED PA0
#endif

// not accurate since different MCU/different Clock
// just delay for some time.
void delay(unsigned int z)
{
  unsigned int x, y;
    for(x = 0; x < z; x++)
      for(y = 0; y < 255; y++);
}

void main()
{
#if defined(STC8H)
  // set P34 to Push_Pull
  P3M0 = 0x10;
  P3M1 = 0x00;

#elif defined(C8051F120)
  // disable watchdog
  EA = 0;
  WDTCN = 0xde;
  WDTCN = 0xad;
  EA = 1;

  // set to 0xf for XBR2 and P3MDOUT
  SFRPAGE = CONFIG_PAGE;

  // enable Crossbar
  XBR2 = 0x40;
  P3MDOUT = 0xff;
#elif defined(C8051F320)
  // disable watchdog
  PCA0MD = 0x00; 
  // eanble Crossbar
  XBR1 = 0x40;
  // set P0_6 to Push-Pull
  P0MDOUT = 0x40;
#elif defined(EFM8BB1) || defined(EFM8BB2)
  // disable watchdog
  WDTCN = 0xDE; //First key
  WDTCN = 0xAD; //Second key
  // p1.4 to push-pull
  P1MDOUT = 0x10;
  // P1.4 pin is skipped by the crossbar
  P1SKIP = 0x10;
  // enable crossbar
  XBR2 = 0x40;
#elif defined(N76E003)
  P1M1 = 0x00;
  P1M2 = 0x00;
#elif defined(N76E616)
  P2M1 = 0x00;
  P2M2 = 0x00;
#elif defined(N76E885)
  P0M1 = 0x00;
  P0M2 = 0x00;
#elif defined(FX2)
  OEA = 0x01;
#endif
 
  while(1) {
    LED = !LED;
#if defined(N76E616) || defined(N76E885)
    LED1 = !LED1;
#endif
    delay(1000);
  }
}
