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
  #define LED P3_4
#elif defined(C8051F320)
  #include <C8051F320.h>
  #define LED P0_6
#elif defined(N76E003)
  #include <n76e003.h>
  #define LED P12
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
#elif defined(N76E003)
  P1M1 = 0;
  P1M2 = 0;
#endif
 
  while(1) {
    LED = !LED;
    delay(500);
  }
}
