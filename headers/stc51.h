#ifndef _STC51_H
#define _STC51_H
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned int uint32;
typedef __bit bit;
typedef _Bool bool;

#if defined(STC89) || defined(STC90)
    #include <stc89xx.h>
#elif defined(STC90AD)
    #include <stc90c5xad.h>
#elif defined(STC10) || defined(STC11) || defined(STC12C52) || defined(STC12C5A)
    #include <stc10fxx.h>
#elif defined(STC12C20)
    #include <stc12c20xx.h>
#elif defined(STC12C54) || defined(STC12C56)
    #include <stc12c54xx.h>
#elif defined(STC12H)
    #include <stc12h.h>
#elif defined(STC15F104E) || defined(STC15F204EA)
    #include <stc15f104e.h>
#elif defined(STC15)
    #include <stc15fxx.h>
#elif defined(STC8A) || defined(STC8F)
    #include <stc8fxx.h>
#elif defined(STC8C)
    #include <stc8cxx.h>
#elif defined(STC8G)
    #include <stc8gxx.h>
#elif defined(STC8H)
    #include <stc8hxx.h>
#elif defined(STC8A8K64D4)
    #include <stc8a8k64d4.h>
#else /* by default, include the earliest stc89/90 series header */
    #include <stc89xx.h>
#endif

#endif /* _STC51_H */
