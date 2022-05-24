#ifndef _SOFTDELAY_H
#define _SOFTDELAY_H

#if defined(STC89) || defined(STC90) || defined(STC90AD)
#include <compiler.h>
/* for 1 or 2 us, use NOP() directly */

inline void delay5us()     //@11.0592MHz
{
    NOP(); //seems need run an inst.
}

inline void delay10us()        //@11.0592MHz
{
    unsigned char i;

    i = 2;
    while (--i);
}

inline void delay20us()        //@11.0592MHz
{
    unsigned char i;

    NOP();
    i = 6;
    while (--i);
}


inline void delay50us()        //@11.0592MHz
{
    unsigned char i;

    NOP();
    i = 20;
    while (--i);
}

inline void delay100us()       //@11.0592MHz
{
    unsigned char i;

    NOP();
    i = 43;
    while (--i);
}

inline void delay200us()       //@11.0592MHz
{
    unsigned char i;

    NOP();
    i = 89;
    while (--i);
}

inline void delay500us()       //@11.0592MHz
{
    unsigned char i;

    NOP();
    i = 227;
    while (--i);
}

inline void delay1ms()     //@11.0592MHz
{
    unsigned char i, j;

    NOP();
    i = 2;
    j = 199;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay2ms()     //@11.0592MHz
{
    unsigned char i, j;

    NOP();
    i = 4;
    j = 146;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay5ms()     //@11.0592MHz
{
    unsigned char i, j;

    i = 9;
    j = 244;
    do
    {
        while (--j);
    } while (--i);
}


inline void delay10ms()        //@11.0592MHz
{
    unsigned char i, j;

    i = 18;
    j = 235;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay20ms()        //@11.0592MHz
{
    unsigned char i, j;

    i = 36;
    j = 217;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay50ms()        //@11.0592MHz
{
    unsigned char i, j;

    i = 90;
    j = 163;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay100ms()       //@11.0592MHz
{
    unsigned char i, j;

    i = 180;
    j = 73;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay200ms()       //@11.0592MHz
{
    unsigned char i, j, k;

    NOP();
    i = 2;
    j = 103;
    k = 147;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

inline void delay500ms()       //@11.0592MHz
{
    unsigned char i, j, k;

    NOP();
    i = 4;
    j = 129;
    k = 119;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

inline void delay1000ms()      //@11.0592MHz
{
    unsigned char i, j, k;

    NOP();
    i = 8;
    j = 1;
    k = 243;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}
#elif defined(STC10) || defined(STC11) || defined(STC12C52) || defined(STC12C5A) || defined(STC12C20) || defined(STC12C54) || defined(STC12C56) || defined(STC12H) || defined(STC15F104E) || defined(STC15F204EA)
#include <compiler.h>

inline void delay1us()     //@11.0592MHz
{
    NOP();
}

inline void delay2us()     //@11.0592MHz
{
    unsigned char i;

    NOP();
    NOP();
    i = 2;
    while (--i);
}

inline void delay5us()     //@11.0592MHz
{
    unsigned char i;

    NOP();
    NOP();
    NOP();
    i = 10;
    while (--i);
}

inline void delay10us()        //@11.0592MHz
{
    unsigned char i;

    NOP();
    NOP();
    NOP();
    i = 24;
    while (--i);
}

inline void delay20us()        //@11.0592MHz
{
    unsigned char i;

    NOP();
    i = 52;
    while (--i);
}

inline void delay50us()        //@11.0592MHz
{
    unsigned char i;

    NOP();
    i = 135;
    while (--i);
}

inline void delay100us()       //@11.0592MHz
{
    unsigned char i, j;

    i = 2;
    j = 15;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay200us()       //@11.0592MHz
{
    unsigned char i, j;

    NOP();
    NOP();
    i = 3;
    j = 34;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay500us()       //@11.0592MHz
{
    unsigned char i, j;

    i = 6;
    j = 93;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay1ms()     //@11.0592MHz
{
    unsigned char i, j;

    NOP();
    i = 11;
    j = 190;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay2ms()     //@11.0592MHz
{
    unsigned char i, j;

    i = 22;
    j = 128;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay5ms()     //@11.0592MHz
{
    unsigned char i, j;

    NOP();
    NOP();
    i = 54;
    j = 198;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay10ms()        //@11.0592MHz
{
    unsigned char i, j;

    NOP();
    NOP();
    i = 108;
    j = 144;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay20ms()        //@11.0592MHz
{
    unsigned char i, j;

    NOP();
    NOP();
    i = 216;
    j = 36;
    do
    {
        while (--j);
    } while (--i);
}
inline void delay50ms()        //@11.0592MHz
{
    unsigned char i, j, k;

    i = 3;
    j = 26;
    k = 223;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

inline void delay100ms()       //@11.0592MHz
{
    unsigned char i, j, k;

    i = 5;
    j = 52;
    k = 195;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

inline void delay200ms()       //@11.0592MHz
{
    unsigned char i, j, k;

    i = 9;
    j = 104;
    k = 139;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

inline void delay500ms()       //@11.0592MHz
{
    unsigned char i, j, k;

    i = 22;
    j = 3;
    k = 227;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}


inline void delay1000ms()      //@11.0592MHz
{
    unsigned char i, j, k;

    i = 43;
    j = 6;
    k = 203;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}
#elif defined(STC15)
#include <compiler.h>
inline void delay1us()     //@11.0592MHz
{
    NOP();
    NOP();
    NOP();
}

inline void delay2us()     //@11.0592MHz
{
    unsigned char i;

    i = 3;
    while (--i);
}

inline void delay5us()     //@11.0592MHz
{
    unsigned char i;

    NOP();
    i = 11;
    while (--i);
}

inline void delay10us()        //@11.0592MHz
{
    unsigned char i;

    NOP();
    i = 25;
    while (--i);
}

inline void delay20us()        //@11.0592MHz
{
    unsigned char i;

    NOP();
    NOP();
    NOP();
    i = 52;
    while (--i);
}

inline void delay50us()        //@11.0592MHz
{
    unsigned char i;

    NOP();
    NOP();
    NOP();
    i = 135;
    while (--i);
}

inline void delay100us()       //@11.0592MHz
{
    unsigned char i, j;

    NOP();
    NOP();
    i = 2;
    j = 15;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay200us()       //@11.0592MHz
{
    unsigned char i, j;

    i = 3;
    j = 35;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay500us()       //@11.0592MHz
{
    unsigned char i, j;

    NOP();
    NOP();
    i = 6;
    j = 93;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay1ms()     //@11.0592MHz
{
    unsigned char i, j;

    NOP();
    NOP();
    NOP();
    i = 11;
    j = 190;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay2ms()     //@11.0592MHz
{
    unsigned char i, j;

    NOP();
    NOP();
    i = 22;
    j = 128;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay5ms()     //@11.0592MHz
{
    unsigned char i, j;

    i = 54;
    j = 199;
    do
    {
        while (--j);
    } while (--i);
}


inline void delay10ms()        //@11.0592MHz
{
    unsigned char i, j;

    i = 108;
    j = 145;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay20ms()        //@11.0592MHz
{
    unsigned char i, j;

    i = 216;
    j = 37;
    do
    {
        while (--j);
    } while (--i);
}
inline void delay50ms()        //@11.0592MHz
{
    unsigned char i, j, k;

    NOP();
    NOP();
    i = 3;
    j = 26;
    k = 223;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

inline void delay100ms()       //@11.0592MHz
{
    unsigned char i, j, k;

    NOP();
    NOP();
    i = 5;
    j = 52;
    k = 195;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

inline void delay200ms()       //@11.0592MHz
{
    unsigned char i, j, k;

    NOP();
    NOP();
    i = 9;
    j = 104;
    k = 139;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

inline void delay500ms()       //@11.0592MHz
{
    unsigned char i, j, k;

    NOP();
    NOP();
    i = 22;
    j = 3;
    k = 227;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

inline void delay1000ms()      //@11.0592MHz
{
    unsigned char i, j, k;

    NOP();
    NOP();
    i = 43;
    j = 6;
    k = 203;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}
#elif defined(STC8A) || defined(STC8F) || defined(STC8C) || defined(STC8G) || defined(STC8H) || defined(STC8A8K64D4)
#include <compiler.h>

inline void delay1us()     //@11.0592MHz
{
    unsigned char i;

    NOP();
    NOP();
    i = 1;
    while (--i);
}

inline void delay2us()     //@11.0592MHz
{
    unsigned char i;

    NOP();
    i = 5;
    while (--i);
}

inline void delay5us()     //@11.0592MHz
{
    unsigned char i;

    NOP();
    i = 16;
    while (--i);
}

inline void delay10us()        //@11.0592MHz
{
    unsigned char i;

    i = 35;
    while (--i);
}

inline void delay20us()        //@11.0592MHz
{
    unsigned char i;

    NOP();
    NOP();
    i = 71;
    while (--i);
}

inline void delay50us()        //@11.0592MHz
{
    unsigned char i;

    NOP();
    i = 182;
    while (--i);
}

inline void delay100us()       //@11.0592MHz
{
    unsigned char i, j;

    i = 2;
    j = 109;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay200us()       //@11.0592MHz
{
    unsigned char i, j;

    i = 3;
    j = 221;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay500us()       //@11.0592MHz
{
    unsigned char i, j;

    NOP();
    NOP();
    i = 8;
    j = 43;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay1ms()     //@11.0592MHz
{
    unsigned char i, j;

    i = 15;
    j = 90;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay2ms()     //@11.0592MHz
{
    unsigned char i, j;

    i = 29;
    j = 183;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay5ms()     //@11.0592MHz
{
    unsigned char i, j;

    NOP();
    NOP();
    i = 72;
    j = 205;
    do
    {
        while (--j);
    } while (--i);
}


inline void delay10ms()        //@11.0592MHz
{
    unsigned char i, j;

    NOP();
    NOP();
    i = 144;
    j = 157;
    do
    {
        while (--j);
    } while (--i);
}

inline void delay20ms()        //@11.0592MHz
{
    unsigned char i, j, k;

    i = 2;
    j = 32;
    k = 60;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

inline void delay50ms()        //@11.0592MHz
{
    unsigned char i, j, k;

    i = 3;
    j = 207;
    k = 28;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

inline void delay100ms()       //@11.0592MHz
{
    unsigned char i, j, k;

    NOP();
    i = 6;
    j = 157;
    k = 59;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

inline void delay200ms()       //@11.0592MHz
{
    unsigned char i, j, k;

    i = 12;
    j = 57;
    k = 122;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

inline void delay500ms()       //@11.0592MHz
{
    unsigned char i, j, k;

    i = 29;
    j = 14;
    k = 54;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}

inline void delay1000ms()      //@11.0592MHz
{
    unsigned char i, j, k;

    i = 57;
    j = 27;
    k = 112;
    do
    {
        do
        {
            while (--k);
        } while (--j);
    } while (--i);
}
#endif
#endif
