#ifndef __STC8C_H__
#define __STC8C_H__

/////////////////////////////////////////////////

//包含本头文件后,不用另外再包含"REG51.H"

__sfr __at (0x80) P0;
__sbit __at (0x80+0) P00;
__sbit __at (0x80+1) P01;
__sbit __at (0x80+2) P02;
__sbit __at (0x80+3) P03;
__sbit __at (0x80+4) P04;
__sbit __at (0x80+5) P05;
__sbit __at (0x80+6) P06;
__sbit __at (0x80+7) P07;
__sfr __at (0x81) SP;
__sfr __at (0x82) DPL;
__sfr __at (0x83) DPH;
__sfr __at (0x87) PCON;
__sfr __at (0x88) TCON;
__sbit __at (0x88+7) TF1;
__sbit __at (0x88+6) TR1;
__sbit __at (0x88+5) TF0;
__sbit __at (0x88+4) TR0;
__sbit __at (0x88+3) IE1;
__sbit __at (0x88+2) IT1;
__sbit __at (0x88+1) IE0;
__sbit __at (0x88+0) IT0;
__sfr __at (0x89) TMOD;
__sfr __at (0x8A) TL0;
__sfr __at (0x8B) TL1;
__sfr __at (0x8C) TH0;
__sfr __at (0x8D) TH1;
__sfr __at (0x8E) AUXR;
__sfr __at (0x8F) INTCLKO;
__sfr __at (0x90) P1;
__sbit __at (0x90+0) P10;
__sbit __at (0x90+1) P11;
__sbit __at (0x90+2) P12;
__sbit __at (0x90+3) P13;
__sbit __at (0x90+4) P14;
__sbit __at (0x90+5) P15;
__sbit __at (0x90+6) P16;
__sbit __at (0x90+7) P17;
__sfr __at (0x91) P1M1;
__sfr __at (0x92) P1M0;
__sfr __at (0x93) P0M1;
__sfr __at (0x94) P0M0;
__sfr __at (0x95) P2M1;
__sfr __at (0x96) P2M0;
__sfr __at (0x98) SCON;
__sbit __at (0x98+7) SM0;
__sbit __at (0x98+6) SM1;
__sbit __at (0x98+5) SM2;
__sbit __at (0x98+4) REN;
__sbit __at (0x98+3) TB8;
__sbit __at (0x98+2) RB8;
__sbit __at (0x98+1) TI;
__sbit __at (0x98+0) RI;
__sfr __at (0x99) SBUF;
__sfr __at (0x9A) S2CON;
__sfr __at (0x9B) S2BUF;
__sfr __at (0x9D) IRCBAND;
__sfr __at (0x9E) LIRTRIM;
__sfr __at (0x9F) IRTRIM;
__sfr __at (0xA0) P2;
__sbit __at (0xA0+0) P20;
__sbit __at (0xA0+1) P21;
__sbit __at (0xA0+2) P22;
__sbit __at (0xA0+3) P23;
__sbit __at (0xA0+4) P24;
__sbit __at (0xA0+5) P25;
__sbit __at (0xA0+6) P26;
__sbit __at (0xA0+7) P27;
__sfr __at (0xA1) BUS_SPEED;
__sfr __at (0xA2) P_SW1;
__sfr __at (0xA8) IE;
__sbit __at (0xA8+7) EA;
__sbit __at (0xA8+6) ELVD;
__sbit __at (0xA8+5) EADC;
__sbit __at (0xA8+4) ES;
__sbit __at (0xA8+3) ET1;
__sbit __at (0xA8+2) EX1;
__sbit __at (0xA8+1) ET0;
__sbit __at (0xA8+0) EX0;
__sfr __at (0xA9) SADDR;
__sfr __at (0xAA) WKTCL;
__sfr __at (0xAB) WKTCH;
__sfr __at (0xAE) TA;
__sfr __at (0xAF) IE2;
__sfr __at (0xB0) P3;
__sbit __at (0xB0+0) P30;
__sbit __at (0xB0+1) P31;
__sbit __at (0xB0+2) P32;
__sbit __at (0xB0+3) P33;
__sbit __at (0xB0+4) P34;
__sbit __at (0xB0+5) P35;
__sbit __at (0xB0+6) P36;
__sbit __at (0xB0+7) P37;
__sfr __at (0xB1) P3M1;
__sfr __at (0xB2) P3M0;
__sfr __at (0xB3) P4M1;
__sfr __at (0xB4) P4M0;
__sfr __at (0xB5) IP2;
__sfr __at (0xB6) IP2H;
__sfr __at (0xB7) IPH;
__sfr __at (0xB8) IP;
__sbit __at (0xB8+6) PLVD;
__sbit __at (0xB8+4) PS;
__sbit __at (0xB8+3) PT1;
__sbit __at (0xB8+2) PX1;
__sbit __at (0xB8+1) PT0;
__sbit __at (0xB8+0) PX0;
__sfr __at (0xB9) SADEN;
__sfr __at (0xBA) P_SW2;
__sfr __at (0xC0) P4;
__sbit __at (0xC0+0) P40;
__sbit __at (0xC0+1) P41;
__sbit __at (0xC0+2) P42;
__sbit __at (0xC0+3) P43;
__sbit __at (0xC0+4) P44;
__sbit __at (0xC0+5) P45;
__sbit __at (0xC0+6) P46;
__sbit __at (0xC0+7) P47;
__sfr __at (0xC1) WDT_CONTR;
__sfr __at (0xC2) IAP_DATA;
__sfr __at (0xC3) IAP_ADDRH;
__sfr __at (0xC4) IAP_ADDRL;
__sfr __at (0xC5) IAP_CMD;
__sfr __at (0xC6) IAP_TRIG;
__sfr __at (0xC7) IAP_CONTR;
__sfr __at (0xC8) P5;
__sbit __at (0xC8+0) P50;
__sbit __at (0xC8+1) P51;
__sbit __at (0xC8+2) P52;
__sbit __at (0xC8+3) P53;
__sbit __at (0xC8+4) P54;
__sbit __at (0xC8+5) P55;
__sbit __at (0xC8+6) P56;
__sbit __at (0xC8+7) P57;
__sfr __at (0xC9) P5M1;
__sfr __at (0xCA) P5M0;
__sfr __at (0xCD) SPSTAT;
__sfr __at (0xCE) SPCTL;
__sfr __at (0xCF) SPDAT;
__sfr __at (0xD0) PSW;
__sbit __at (0xD0+7) CY;
__sbit __at (0xD0+6) AC;
__sbit __at (0xD0+5) F0;
__sbit __at (0xD0+4) RS1;
__sbit __at (0xD0+3) RS0;
__sbit __at (0xD0+2) OV;
__sbit __at (0xD0+1) F1;
__sbit __at (0xD0+0) P;
__sfr __at (0xD1) T4T3M;
__sfr __at (0xD2) T4H;
__sfr __at (0xD3) T4L;
__sfr __at (0xD4) T3H;
__sfr __at (0xD5) T3L;
__sfr __at (0xD6) T2H;
__sfr __at (0xDF) IP3;
__sfr __at (0xE0) ACC;
__sfr __at (0xE3) DPS;
__sfr __at (0xE4) DPL1;
__sfr __at (0xE5) DPH1;
__sfr __at (0xE6) CMPCR1;
__sfr __at (0xE7) CMPCR2;
__sfr __at (0xEE) IP3H;
__sfr __at (0xEF) AUXINTIF;
__sfr __at (0xF0) B;
__sfr __at (0xF5) IAP_TPS;
__sfr __at (0xFF) RSTCFG;

//如下特殊功能寄存器位于扩展RAM区域
//访问这些寄存器,需先将P_SW2的BIT7设置为1,才可正常读写

/////////////////////////////////////////////////
//FF00H-FFFFH
/////////////////////////////////////////////////


/////////////////////////////////////////////////
//FE00H-FEFFH
/////////////////////////////////////////////////

#define CKSEL (*(unsigned char volatile __xdata *)0xfe00)
#define CLKDIV (*(unsigned char volatile __xdata *)0xfe01)
#define HIRCCR (*(unsigned char volatile __xdata *)0xfe02)
#define XOSCCR (*(unsigned char volatile __xdata *)0xfe03)
#define IRC32KCR (*(unsigned char volatile __xdata *)0xfe04)
#define MCLKOCR (*(unsigned char volatile __xdata *)0xfe05)
#define IRCDB (*(unsigned char volatile __xdata *)0xfe06)

#define P0PU (*(unsigned char volatile __xdata *)0xfe10)
#define P1PU (*(unsigned char volatile __xdata *)0xfe11)
#define P2PU (*(unsigned char volatile __xdata *)0xfe12)
#define P3PU (*(unsigned char volatile __xdata *)0xfe13)
#define P4PU (*(unsigned char volatile __xdata *)0xfe14)
#define P5PU (*(unsigned char volatile __xdata *)0xfe15)
#define P0NCS (*(unsigned char volatile __xdata *)0xfe18)
#define P1NCS (*(unsigned char volatile __xdata *)0xfe19)
#define P2NCS (*(unsigned char volatile __xdata *)0xfe1a)
#define P3NCS (*(unsigned char volatile __xdata *)0xfe1b)
#define P4NCS (*(unsigned char volatile __xdata *)0xfe1c)
#define P5NCS (*(unsigned char volatile __xdata *)0xfe1d)
#define P0SR (*(unsigned char volatile __xdata *)0xfe20)
#define P1SR (*(unsigned char volatile __xdata *)0xfe21)
#define P2SR (*(unsigned char volatile __xdata *)0xfe22)
#define P3SR (*(unsigned char volatile __xdata *)0xfe23)
#define P4SR (*(unsigned char volatile __xdata *)0xfe24)
#define P5SR (*(unsigned char volatile __xdata *)0xfe25)
#define P0DR (*(unsigned char volatile __xdata *)0xfe28)
#define P1DR (*(unsigned char volatile __xdata *)0xfe29)
#define P2DR (*(unsigned char volatile __xdata *)0xfe2a)
#define P3DR (*(unsigned char volatile __xdata *)0xfe2b)
#define P4DR (*(unsigned char volatile __xdata *)0xfe2c)
#define P5DR (*(unsigned char volatile __xdata *)0xfe2d)
#define P0IE (*(unsigned char volatile __xdata *)0xfe30)
#define P1IE (*(unsigned char volatile __xdata *)0xfe31)

#define I2CCFG (*(unsigned char volatile __xdata *)0xfe80)
#define I2CMSCR (*(unsigned char volatile __xdata *)0xfe81)
#define I2CMSST (*(unsigned char volatile __xdata *)0xfe82)
#define I2CSLCR (*(unsigned char volatile __xdata *)0xfe83)
#define I2CSLST (*(unsigned char volatile __xdata *)0xfe84)
#define I2CSLADR (*(unsigned char volatile __xdata *)0xfe85)
#define I2CTXD (*(unsigned char volatile __xdata *)0xfe86)
#define I2CRXD (*(unsigned char volatile __xdata *)0xfe87)
#define I2CMSAUX (*(unsigned char volatile __xdata *)0xfe88)

#define TM2PS (*(unsigned char volatile __xdata *)0xfea2)
#define TM3PS (*(unsigned char volatile __xdata *)0xfea3)
#define TM4PS (*(unsigned char volatile __xdata *)0xfea4)

/////////////////////////////////////////////////
//FD00H-FDFFH
/////////////////////////////////////////////////

#define P0INTE (*(unsigned char volatile __xdata *)0xfd00)
#define P1INTE (*(unsigned char volatile __xdata *)0xfd01)
#define P2INTE (*(unsigned char volatile __xdata *)0xfd02)
#define P3INTE (*(unsigned char volatile __xdata *)0xfd03)
#define P4INTE (*(unsigned char volatile __xdata *)0xfd04)
#define P5INTE (*(unsigned char volatile __xdata *)0xfd05)
#define P0INTF (*(unsigned char volatile __xdata *)0xfd10)
#define P1INTF (*(unsigned char volatile __xdata *)0xfd11)
#define P2INTF (*(unsigned char volatile __xdata *)0xfd12)
#define P3INTF (*(unsigned char volatile __xdata *)0xfd13)
#define P4INTF (*(unsigned char volatile __xdata *)0xfd14)
#define P5INTF (*(unsigned char volatile __xdata *)0xfd15)
#define P0IM0 (*(unsigned char volatile __xdata *)0xfd20)
#define P1IM0 (*(unsigned char volatile __xdata *)0xfd21)
#define P2IM0 (*(unsigned char volatile __xdata *)0xfd22)
#define P3IM0 (*(unsigned char volatile __xdata *)0xfd23)
#define P4IM0 (*(unsigned char volatile __xdata *)0xfd24)
#define P5IM0 (*(unsigned char volatile __xdata *)0xfd25)
#define P0IM1 (*(unsigned char volatile __xdata *)0xfd30)
#define P1IM1 (*(unsigned char volatile __xdata *)0xfd31)
#define P2IM1 (*(unsigned char volatile __xdata *)0xfd32)
#define P3IM1 (*(unsigned char volatile __xdata *)0xfd33)
#define P4IM1 (*(unsigned char volatile __xdata *)0xfd34)
#define P5IM1 (*(unsigned char volatile __xdata *)0xfd35)

/////////////////////////////////////////////////
//FC00H-FCFFH
/////////////////////////////////////////////////

#define MD3 (*(unsigned char volatile __xdata *)0xfcf0)
#define MD2 (*(unsigned char volatile __xdata *)0xfcf1)
#define MD1 (*(unsigned char volatile __xdata *)0xfcf2)
#define MD0 (*(unsigned char volatile __xdata *)0xfcf3)
#define MD5 (*(unsigned char volatile __xdata *)0xfcf4)
#define MD4 (*(unsigned char volatile __xdata *)0xfcf5)
#define ARCON (*(unsigned char volatile __xdata *)0xfcf6)
#define OPCON (*(unsigned char volatile __xdata *)0xfcf7)

/////////////////////////////////////////////////
//FB00H-FBFFH
/////////////////////////////////////////////////


/////////////////////////////////////////////////
//FA00H-FAFFH
/////////////////////////////////////////////////


/////////////////////////////////////////////////

#endif

