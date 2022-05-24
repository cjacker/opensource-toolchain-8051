#ifndef __STC12C5630AD_H__
#define __STC12C5630AD_H__

/////////////////////////////////////////////////

/* The following is STC additional SFR or change */

/* sfr  AUXR  = 0x8e; */
/* sfr  IPH   = 0xb7; */

/* Watchdog Timer Register */
__sfr __at (0xe1) WDT_CONTR;

/* ISP_IAP_EEPROM Register */
__sfr __at (0xe2) ISP_DATA;
__sfr __at (0xe3) ISP_ADDRH;
__sfr __at (0xe4) ISP_ADDRL;
__sfr __at (0xe5) ISP_CMD;
__sfr __at (0xe6) ISP_TRIG;
__sfr __at (0xe7) ISP_CONTR;

/* System Clock Divider */
__sfr __at (0xc7) CLK_DIV;

/* I_O Port Mode Set Register */
__sfr __at (0x93) P0M0;
__sfr __at (0x94) P0M1;
__sfr __at (0x91) P1M0;
__sfr __at (0x92) P1M1;
__sfr __at (0x95) P2M0;
__sfr __at (0x96) P2M1;
__sfr __at (0xb1) P3M0;
__sfr __at (0xb2) P3M1;

/* SPI Register */
__sfr __at (0x84) SPSTAT;
__sfr __at (0x85) SPCTL;
__sfr __at (0x86) SPDAT;

/* ADC Register */
__sfr __at (0xc5) ADC_CONTR;
__sfr __at (0xc6) ADC_DATA;
__sfr __at (0xbe) ADC_LOW2;

/* PCA SFR */
__sfr __at (0xD8) CCON;
__sfr __at (0xD9) CMOD;
__sfr __at (0xDA) CCAPM0;
__sfr __at (0xDB) CCAPM1;
__sfr __at (0xDC) CCAPM2;
__sfr __at (0xDD) CCAPM3;
__sfr __at (0xDE) CCAPM4;
__sfr __at (0xDF) CCAPM5;

__sfr __at (0xE9) CL;
__sfr __at (0xEA) CCAP0L;
__sfr __at (0xEB) CCAP1L;
__sfr __at (0xEC) CCAP2L;
__sfr __at (0xED) CCAP3L;
__sfr __at (0xEE) CCAP4L;
__sfr __at (0xEF) CCAP5L;

__sfr __at (0xF9) CH;
__sfr __at (0xFA) CCAP0H;
__sfr __at (0xFB) CCAP1H;
__sfr __at (0xFC) CCAP2H;
__sfr __at (0xFD) CCAP3H;
__sfr __at (0xFE) CCAP4H;
__sfr __at (0xFF) CCAP5H;

__sfr __at (0xF2) PCA_PWM0;
__sfr __at (0xF3) PCA_PWM1;
__sfr __at (0xF4) PCA_PWM2;
__sfr __at (0xF5) PCA_PWM3;
__sfr __at (0xF6) PCA_PWM4;
__sfr __at (0xF7) PCA_PWM5;

/*  CCON  */
__sbit __at (0xD8+7) CF;
__sbit __at (0xD8+6) CR;
__sbit __at (0xD8+5) CCF5;
__sbit __at (0xD8+4) CCF4;
__sbit __at (0xD8+3) CCF3;
__sbit __at (0xD8+2) CCF2;
__sbit __at (0xD8+1) CCF1;
__sbit __at (0xD8+0) CCF0;


/* Above is STC additional SFR or change */

/*--------------------------------------------------------------------------
REG51F.H

Header file for 8xC31/51, 80C51Fx, 80C51Rx+
Copyright (c) 1988-1999 Keil Elektronik GmbH and Keil Software, Inc.
All rights reserved.

Modification according to DataSheet from April 1999
 - SFR's AUXR and AUXR1 added for 80C51Rx+ derivatives
--------------------------------------------------------------------------*/

/*  BYTE Registers  */
__sfr __at (0x80) P0;
__sbit __at (0x80+0) P00;
__sbit __at (0x80+1) P01;
__sbit __at (0x80+2) P02;
__sbit __at (0x80+3) P03;
__sbit __at (0x80+4) P04;
__sbit __at (0x80+5) P05;
__sbit __at (0x80+6) P06;
__sbit __at (0x80+7) P07;
__sfr __at (0x90) P1;
__sbit __at (0x90+0) P10;
__sbit __at (0x90+1) P11;
__sbit __at (0x90+2) P12;
__sbit __at (0x90+3) P13;
__sbit __at (0x90+4) P14;
__sbit __at (0x90+5) P15;
__sbit __at (0x90+6) P16;
__sbit __at (0x90+7) P17;
__sfr __at (0xA0) P2;
__sbit __at (0xA0+0) P20;
__sbit __at (0xA0+1) P21;
__sbit __at (0xA0+2) P22;
__sbit __at (0xA0+3) P23;
__sbit __at (0xA0+4) P24;
__sbit __at (0xA0+5) P25;
__sbit __at (0xA0+6) P26;
__sbit __at (0xA0+7) P27;
__sfr __at (0xB0) P3;
__sbit __at (0xB0+0) P30;
__sbit __at (0xB0+1) P31;
__sbit __at (0xB0+2) P32;
__sbit __at (0xB0+3) P33;
__sbit __at (0xB0+4) P34;
__sbit __at (0xB0+5) P35;
__sbit __at (0xB0+6) P36;
__sbit __at (0xB0+7) P37;
__sfr __at (0xD0) PSW;
__sfr __at (0xE0) ACC;
__sfr __at (0xF0) B;
__sfr __at (0x81) SP;
__sfr __at (0x82) DPL;
__sfr __at (0x83) DPH;
__sfr __at (0x87) PCON;
__sfr __at (0x88) TCON;
__sfr __at (0x89) TMOD;
__sfr __at (0x8A) TL0;
__sfr __at (0x8B) TL1;
__sfr __at (0x8C) TH0;
__sfr __at (0x8D) TH1;
__sfr __at (0xA8) IE;
__sfr __at (0xB8) IP;
__sfr __at (0x98) SCON;
__sfr __at (0x99) SBUF;

/*  80C51Fx/Rx Extensions  */
__sfr __at (0x8E) AUXR;
/* sfr AUXR1  = 0xA2; */
__sfr __at (0xA9) SADDR;
__sfr __at (0xB7) IPH;
__sfr __at (0xB9) SADEN;
__sfr __at (0xC8) T2CON;
__sfr __at (0xC9) T2MOD;
__sfr __at (0xCA) RCAP2L;
__sfr __at (0xCB) RCAP2H;
__sfr __at (0xCC) TL2;
__sfr __at (0xCD) TH2;


/*  BIT Registers  */
/*  PSW   */
__sbit __at (0xD0+7) CY;
__sbit __at (0xD0+6) AC;
__sbit __at (0xD0+5) F0;
__sbit __at (0xD0+4) RS1;
__sbit __at (0xD0+3) RS0;
__sbit __at (0xD0+2) OV;
__sbit __at (0xD0+1) F1;
__sbit __at (0xD0+0) P;

/*  TCON  */
__sbit __at (0x88+7) TF1;
__sbit __at (0x88+6) TR1;
__sbit __at (0x88+5) TF0;
__sbit __at (0x88+4) TR0;
__sbit __at (0x88+3) IE1;
__sbit __at (0x88+2) IT1;
__sbit __at (0x88+1) IE0;
__sbit __at (0x88+0) IT0;

/*  P3  */
__sbit __at (0xB0+7) RD;
__sbit __at (0xB0+6) WR;
__sbit __at (0xB0+5) T1;
__sbit __at (0xB0+4) T0;
__sbit __at (0xB0+3) INT1;
__sbit __at (0xB0+2) INT0;
__sbit __at (0xB0+1) TXD;
__sbit __at (0xB0+0) RXD;

/*  SCON  */
__sbit __at (0x98+7) SM0;// alternatively "FE"
__sbit __at (0x98+7) FE;
__sbit __at (0x98+6) SM1;
__sbit __at (0x98+5) SM2;
__sbit __at (0x98+4) REN;
__sbit __at (0x98+3) TB8;
__sbit __at (0x98+2) RB8;
__sbit __at (0x98+1) TI;
__sbit __at (0x98+0) RI;
             

__sbit __at (0x90+1) T2EX;
__sbit __at (0x90+0) T2;

/*  T2CON  */
__sbit __at (0xC8+7) TF2;
__sbit __at (0xC8+6) EXF2;
__sbit __at (0xC8+5) RCLK;
__sbit __at (0xC8+4) TCLK;
__sbit __at (0xC8+3) EXEN2;
__sbit __at (0xC8+2) TR2;
__sbit __at (0xC8+1) C_T2;
__sbit __at (0xC8+0) CP_RL2;

/* PCA Pin */

__sbit __at (0xA0+4) CEX3;
__sbit __at (0xA0+0) CEX2;
__sbit __at (0xB0+5) CEX1;
__sbit __at (0xB0+7) CEX0;
__sbit __at (0xB0+4) ECI;

/*  IE   */
__sbit __at (0xA8+7) EA;
__sbit __at (0xA8+6) EPCA_LVD;
__sbit __at (0xA8+5) EADC_SPI;
__sbit __at (0xA8+4) ES;
__sbit __at (0xA8+3) ET1;
__sbit __at (0xA8+2) EX1;
__sbit __at (0xA8+1) ET0;
__sbit __at (0xA8+0) EX0;

/*  IP   */ 
__sbit __at (0xB8+6) PPCA_LVD;
__sbit __at (0xB8+5) PADC_SPI;
__sbit __at (0xB8+4) PS;
__sbit __at (0xB8+3) PT1;
__sbit __at (0xB8+2) PX1;
__sbit __at (0xB8+1) PT0;
__sbit __at (0xB8+0) PX0;

/////////////////////////////////////////////////

#endif

