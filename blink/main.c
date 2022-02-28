// blink led, P21->200 Om resistor->LED->GND

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
