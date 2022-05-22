// blink led, P34->Resistor->LED->GND

#define C8051F120

#if defined(STC89)
	#include <stc51.h>
	#define LED P34
#elif defined(STC8H)
	#include <stc8h.h>
	#define LED P34
#elif defined(C8051F120)
	#include <C8051F120.h>
	#define LED P3_4
#endif

void delay(unsigned int z)
{
  unsigned int x, y;
	for(x = 0; x < z; x++)
		for(y = 0; y < 121; y++);
}

void main()
{
#if defined(STC8H)
	P3M0 = 0x10;
	P3M1 = 0x00;
#elif defined(C8051F120)
	EA = 0;
  WDTCN = 0xde;
  WDTCN = 0xad;
	EA = 1;

  SFRPAGE = 0x0f;//CONFIG_PAGE;

  XBR2 = 0x40;
  P3MDOUT = 0xff;
#endif
 
  while(1) {
    LED = !LED;
    delay(2000);
  }
}
