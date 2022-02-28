#ifndef __STC16F_H__
#define __STC16F_H__

/////////////////////////////////////////////////
//SFR:80H-SFR:FFH
/////////////////////////////////////////////////

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
__sfr __at (0x84) DPXL;
__sfr __at (0x85) USBCLK;
__sfr __at (0x86) DPS;
__sfr __at (0x87) PCON;
__sfr __at (0x88) TCON;
__sbit __at (0x88+0) IT0;
__sbit __at (0x88+1) IE0;
__sbit __at (0x88+2) IT1;
__sbit __at (0x88+3) IE1;
__sbit __at (0x88+4) TR0;
__sbit __at (0x88+5) TF0;
__sbit __at (0x88+6) TR1;
__sbit __at (0x88+7) TF1;
__sfr __at (0x89) TMOD;
__sfr __at (0x8a) TL0;
__sfr __at (0x8b) TL1;
__sfr __at (0x8c) TH0;
__sfr __at (0x8d) TH1;
__sfr __at (0x8e) CKCON;
__sfr __at (0x8f) DMAIR;
__sfr __at (0x90) P1;
__sbit __at (0x90+0) P10;
__sbit __at (0x90+1) P11;
__sbit __at (0x90+2) P12;
__sbit __at (0x90+3) P13;
__sbit __at (0x90+4) P14;
__sbit __at (0x90+5) P15;
__sbit __at (0x90+6) P16;
__sbit __at (0x90+7) P17;
__sfr __at (0x91) USBCON;
__sfr __at (0x92) WTST;
__sfr __at (0x93) AUXR;
__sfr __at (0x94) AUXR2;
__sfr __at (0x95) INTCLKO;
__sfr __at (0x96) USBADR;
__sfr __at (0x97) USBDAT;
__sfr __at (0x98) SCON;
__sbit __at (0x98+0) RI;
__sbit __at (0x98+1) TI;
__sbit __at (0x98+2) RB8;
__sbit __at (0x98+3) TB8;
__sbit __at (0x98+4) REN;
__sbit __at (0x98+5) SM2;
__sbit __at (0x98+6) SM1;
__sbit __at (0x98+7) SM0;
__sfr __at (0x99) SBUF;
__sfr __at (0x9a) P_SW1;
__sfr __at (0x9b) P_SW2;
__sfr __at (0x9c) BGTRIM;
__sfr __at (0x9d) VRTRIM;
__sfr __at (0x9e) LIRTRIM;
__sfr __at (0x9f) IRTRIM;
__sfr __at (0xa0) P2;
__sbit __at (0xa0+0) P20;
__sbit __at (0xa0+1) P21;
__sbit __at (0xa0+2) P22;
__sbit __at (0xa0+3) P23;
__sbit __at (0xa0+4) P24;
__sbit __at (0xa0+5) P25;
__sbit __at (0xa0+6) P26;
__sbit __at (0xa0+7) P27;
__sfr __at (0xa1) CANICR;
__sfr __at (0xa2) CANAR;
__sfr __at (0xa3) CANDR;
__sfr __at (0xa8) IE;
__sbit __at (0xa8+0) EX0;
__sbit __at (0xa8+1) ET0;
__sbit __at (0xa8+2) EX1;
__sbit __at (0xa8+3) ET1;
__sbit __at (0xa8+4) ES;
__sbit __at (0xa8+5) EADC;
__sbit __at (0xa8+6) ELVD;
__sbit __at (0xa8+7) EA;
__sfr __at (0xa9) IRCBAND;
__sfr __at (0xaa) WKTCL;
__sfr __at (0xab) WKTCH;
__sfr __at (0xac) VOCTRL;
__sfr __at (0xad) VOSEL;
__sfr __at (0xb0) P3;
__sbit __at (0xb0+0) P30;
__sbit __at (0xb0+1) P31;
__sbit __at (0xb0+2) P32;
__sbit __at (0xb0+3) P33;
__sbit __at (0xb0+4) P34;
__sbit __at (0xb0+5) P35;
__sbit __at (0xb0+6) P36;
__sbit __at (0xb0+7) P37;
__sfr __at (0xb1) LINICR;
__sfr __at (0xb2) LINAR;
__sfr __at (0xb3) LINDR;
__sfr __at (0xb4) CMPCR1;
__sfr __at (0xb5) CMPCR2;
__sfr __at (0xb6) IP2H;
__sfr __at (0xb7) IPH;
__sfr __at (0xb8) IP;
__sbit __at (0xb8+0) PX0;
__sbit __at (0xb8+1) PT0;
__sbit __at (0xb8+2) PX1;
__sbit __at (0xb8+3) PT1;
__sbit __at (0xb8+4) PS0;
__sbit __at (0xb8+4) PS;
__sbit __at (0xb8+5) PADC;
__sbit __at (0xb8+6) PLVD;
__sbit __at (0xb8+7) PPWM1;
__sfr __at (0xb9) SPSTAT;
__sfr __at (0xba) SPCTL;
__sfr __at (0xbb) SPDAT;
__sfr __at (0xbc) S4CON;
__sfr __at (0xbd) S4BUF;
__sfr __at (0xbe) SPH;
__sfr __at (0xbf) BUSSPD;
__sfr __at (0xc0) P4;
__sbit __at (0xc0+0) P40;
__sbit __at (0xc0+1) P41;
__sbit __at (0xc0+2) P42;
__sbit __at (0xc0+3) P43;
__sbit __at (0xc0+4) P44;
__sbit __at (0xc0+5) P45;
__sbit __at (0xc0+6) P46;
__sbit __at (0xc0+7) P47;
__sfr __at (0xc1) DID;
__sfr __at (0xc2) IAP_DATA;
__sfr __at (0xc3) IAP_ADDRH;
__sfr __at (0xc4) IAP_ADDRL;
__sfr __at (0xc5) IAP_CMD;
__sfr __at (0xc6) IAP_TRIG;
__sfr __at (0xc7) IAP_CONTR;
__sfr __at (0xc8) P5;
__sbit __at (0xc8+0) P50;
__sbit __at (0xc8+1) P51;
__sbit __at (0xc8+2) P52;
__sbit __at (0xc8+3) P53;
__sbit __at (0xc8+4) P54;
__sbit __at (0xc8+5) P55;
__sbit __at (0xc8+6) P56;
__sbit __at (0xc8+7) P57;
__sfr __at (0xc9) T4H;
__sfr __at (0xca) T4L;
__sfr __at (0xcb) T3H;
__sfr __at (0xcc) T3L;
__sfr __at (0xcd) T2H;
__sfr __at (0xce) T2L;
__sfr __at (0xd0) PSW;
__sbit __at (0xd0+0) P;
__sbit __at (0xd0+1) F1;
__sbit __at (0xd0+2) OV;
__sbit __at (0xd0+3) RS0;
__sbit __at (0xd0+4) RS1;
__sbit __at (0xd0+5) F0;
__sbit __at (0xd0+6) AC;
__sbit __at (0xd0+7) CY;
__sfr __at (0xd1) PSW1;
__sfr __at (0xd2) P7M1;
__sfr __at (0xd3) P7M0;
__sfr __at (0xd8) RSTIF;
__sfr __at (0xda) AUXINTIF;
__sfr __at (0xdb) T4T3M;
__sfr __at (0xdc) ADC_CONTR;
__sfr __at (0xdd) ADC_RES;
__sfr __at (0xde) ADC_RESL;
__sfr __at (0xdf) ADCCFG;
__sfr __at (0xe0) ACC;
__sfr __at (0xe1) SADDR;
__sfr __at (0xe2) SADEN;
__sfr __at (0xe3) S2CON;
__sfr __at (0xe4) S2BUF;
__sfr __at (0xe5) S3CON;
__sfr __at (0xe6) S3BUF;
__sfr __at (0xe7) IE2;
__sfr __at (0xe8) P6;
__sbit __at (0xe8+0) P60;
__sbit __at (0xe8+1) P61;
__sbit __at (0xe8+2) P62;
__sbit __at (0xe8+3) P63;
__sbit __at (0xe8+4) P64;
__sbit __at (0xe8+5) P65;
__sbit __at (0xe8+6) P66;
__sbit __at (0xe8+7) P67;
__sfr __at (0xea) MXAX;
__sfr __at (0xeb) TA;
__sfr __at (0xec) P5M1;
__sfr __at (0xed) P5M0;
__sfr __at (0xee) P6M1;
__sfr __at (0xef) P6M0;
__sfr __at (0xf0) B;
__sfr __at (0xf1) P0M1;
__sfr __at (0xf2) P0M0;
__sfr __at (0xf3) P1M1;
__sfr __at (0xf4) P1M0;
__sfr __at (0xf5) P2M1;
__sfr __at (0xf6) P2M0;
__sfr __at (0xf7) IAP_TPS;
__sfr __at (0xf8) P7;
__sbit __at (0xf8+0) P70;
__sbit __at (0xf8+1) P71;
__sbit __at (0xf8+2) P72;
__sbit __at (0xf8+3) P73;
__sbit __at (0xf8+4) P74;
__sbit __at (0xf8+5) P75;
__sbit __at (0xf8+6) P76;
__sbit __at (0xf8+7) P77;
__sfr __at (0xf9) P3M1;
__sfr __at (0xfa) P3M0;
__sfr __at (0xfb) P4M1;
__sfr __at (0xfc) P4M0;
__sfr __at (0xfd) WDT_CONTR;
__sfr __at (0xfe) IP2;
__sfr __at (0xff) RSTCFG;

/////////////////////////////////////////////////
//USB SFR
/////////////////////////////////////////////////

#define FADDR 0
#define UPDATE 0x80
#define POWER 1
#define ISOUD 0x80
#define USBRST 0x08
#define USBRSU 0x04
#define USBSUS 0x02
#define ENSUS 0x01
#define INTRIN1 2
#define EP5INIF 0x20
#define EP4INIF 0x10
#define EP3INIF 0x08
#define EP2INIF 0x04
#define EP1INIF 0x02
#define EP0IF 0x01
#define INTROUT1 4
#define EP5OUTIF 0x20
#define EP4OUTIF 0x10
#define EP3OUTIF 0x08
#define EP2OUTIF 0x04
#define EP1OUTIF 0x02
#define INTRUSB 6
#define SOFIF 0x08
#define RSTIF 0x04
#define RSUIF 0x02
#define SUSIF 0x01
#define INTRIN1E 7
#define EP5INIE 0x20
#define EP4INIE 0x10
#define EP3INIE 0x08
#define EP2INIE 0x04
#define EP1INIE 0x02
#define EP0IE 0x01
#define INTROUT1E 9
#define EP5OUTIE 0x20
#define EP4OUTIE 0x10
#define EP3OUTIE 0x08
#define EP2OUTIE 0x04
#define EP1OUTIE 0x02
#define INTRUSBE 11
#define SOFIE 0x08
#define RSTIE 0x04
#define RSUIE 0x02
#define SUSIE 0x01
#define FRAME1 12
#define FRAME2 13
#define INDEX 14
#define INMAXP 16
#define CSR0 17
#define SSUEND 0x80
#define SOPRDY 0x40
#define SDSTL 0x20
#define SUEND 0x10
#define DATEND 0x08
#define STSTL 0x04
#define IPRDY 0x02
#define OPRDY 0x01
#define INCSR1 17
#define INCLRDT 0x40
#define INSTSTL 0x20
#define INSDSTL 0x10
#define INFLUSH 0x08
#define INUNDRUN 0x04
#define INFIFONE 0x02
#define INIPRDY 0x01
#define INCSR2 18
#define INAUTOSET 0x80
#define INISO 0x40
#define INMODEIN 0x20
#define INMODEOUT 0x00
#define INENDMA 0x10
#define INFCDT 0x08
#define OUTMAXP 19
#define OUTCSR1 20
#define OUTCLRDT 0x80
#define OUTSTSTL 0x40
#define OUTSDSTL 0x20
#define OUTFLUSH 0x10
#define OUTDATERR 0x08
#define OUTOVRRUN 0x04
#define OUTFIFOFUL 0x02
#define OUTOPRDY 0x01
#define OUTCSR2 21
#define OUTAUTOCLR 0x80
#define OUTISO 0x40
#define OUTENDMA 0x20
#define OUTDMAMD 0x10
#define COUNT0 22
#define OUTCOUNT1 22
#define OUTCOUNT2 23
#define FIFO0 32
#define FIFO1 33
#define FIFO2 34
#define FIFO3 35
#define FIFO4 36
#define FIFO5 37
#define UTRKCTL 48
#define UTRKSTS 49

/////////////////////////////////////////////////
//7E:FF00H-7E:FFFFH
/////////////////////////////////////////////////



/////////////////////////////////////////////////
//7E:FE00H-7E:FEFFH
/////////////////////////////////////////////////

#define CLKSEL (*(unsigned char volatile __far *)0x7efe00)
#define CLKDIV (*(unsigned char volatile __far *)0x7efe01)
#define IRC24MCR (*(unsigned char volatile __far *)0x7efe02)
#define XOSCCR (*(unsigned char volatile __far *)0x7efe03)
#define IRC32KCR (*(unsigned char volatile __far *)0x7efe04)
#define PLLCR (*(unsigned char volatile __far *)0x7efe05)
#define USBCON1 (*(unsigned char volatile __far *)0x7efe06)
#define MCLKOCR (*(unsigned char volatile __far *)0x7efe07)
#define IRC48MCR (*(unsigned char volatile __far *)0x7efe08)
#define IRC48ATRIM (*(unsigned char volatile __far *)0x7efe09)
#define IRC48BTRIM (*(unsigned char volatile __far *)0x7efe0a)
#define IRCDB (*(unsigned char volatile __far *)0x7efe0b)

#define P0PU (*(unsigned char volatile __far *)0x7efe10)
#define P1PU (*(unsigned char volatile __far *)0x7efe11)
#define P2PU (*(unsigned char volatile __far *)0x7efe12)
#define P3PU (*(unsigned char volatile __far *)0x7efe13)
#define P4PU (*(unsigned char volatile __far *)0x7efe14)
#define P5PU (*(unsigned char volatile __far *)0x7efe15)
#define P6PU (*(unsigned char volatile __far *)0x7efe16)
#define P7PU (*(unsigned char volatile __far *)0x7efe17)
#define P0NCS (*(unsigned char volatile __far *)0x7efe18)
#define P1NCS (*(unsigned char volatile __far *)0x7efe19)
#define P2NCS (*(unsigned char volatile __far *)0x7efe1a)
#define P3NCS (*(unsigned char volatile __far *)0x7efe1b)
#define P4NCS (*(unsigned char volatile __far *)0x7efe1c)
#define P5NCS (*(unsigned char volatile __far *)0x7efe1d)
#define P6NCS (*(unsigned char volatile __far *)0x7efe1e)
#define P7NCS (*(unsigned char volatile __far *)0x7efe1f)
#define P0SR (*(unsigned char volatile __far *)0x7efe20)
#define P1SR (*(unsigned char volatile __far *)0x7efe21)
#define P2SR (*(unsigned char volatile __far *)0x7efe22)
#define P3SR (*(unsigned char volatile __far *)0x7efe23)
#define P4SR (*(unsigned char volatile __far *)0x7efe24)
#define P5SR (*(unsigned char volatile __far *)0x7efe25)
#define P6SR (*(unsigned char volatile __far *)0x7efe26)
#define P7SR (*(unsigned char volatile __far *)0x7efe27)
#define P0DR (*(unsigned char volatile __far *)0x7efe28)
#define P1DR (*(unsigned char volatile __far *)0x7efe29)
#define P2DR (*(unsigned char volatile __far *)0x7efe2a)
#define P3DR (*(unsigned char volatile __far *)0x7efe2b)
#define P4DR (*(unsigned char volatile __far *)0x7efe2c)
#define P5DR (*(unsigned char volatile __far *)0x7efe2d)
#define P6DR (*(unsigned char volatile __far *)0x7efe2e)
#define P7DR (*(unsigned char volatile __far *)0x7efe2f)
#define P0IE (*(unsigned char volatile __far *)0x7efe30)
#define P1IE (*(unsigned char volatile __far *)0x7efe31)

#define I2CCFG (*(unsigned char volatile __far *)0x7efe80)
#define ENI2C 0x80
#define I2CMASTER 0x40
#define I2CSLAVE 0x00
#define I2CMSCR (*(unsigned char volatile __far *)0x7efe81)
#define EMSI 0x80
#define MS_IDLE 0x00
#define MS_START 0x01
#define MS_SENDDAT 0x02
#define MS_RECVACK 0x03
#define MS_RECVDAT 0x04
#define MS_SENDACK 0x05
#define MS_STOP 0x06
#define MS_START_SENDDAT_RECVACK 0x09
#define MS_SENDDAT_RECVACK 0x0a
#define MS_RECVDAT_SENDACK 0x0b
#define MS_RECVDAT_SENDNAK 0x0c
#define I2CMSST (*(unsigned char volatile __far *)0x7efe82)
#define MSBUSY 0x80
#define MSIF 0x40
#define MSACKI 0x02
#define MSACKO 0x01
#define I2CSLCR (*(unsigned char volatile __far *)0x7efe83)
#define ESTAI 0x40
#define ERXI 0x20
#define ETXI 0x10
#define ESTOI 0x08
#define SLRST 0x01
#define I2CSLST (*(unsigned char volatile __far *)0x7efe84)
#define SLBUSY 0x80
#define STAIF 0x40
#define RXIF 0x20
#define TXIF 0x10
#define STOIF 0x08
#define TXING 0x04
#define SLACKI 0x02
#define SLACKO 0x01
#define I2CSLADR (*(unsigned char volatile __far *)0x7efe85)
#define I2CTXD (*(unsigned char volatile __far *)0x7efe86)
#define I2CRXD (*(unsigned char volatile __far *)0x7efe87)
#define I2CMSAUX (*(unsigned char volatile __far *)0x7efe88)

#define TIMER2PS (*(unsigned char volatile __far *)0x7efea2)
#define TIMER3PS (*(unsigned char volatile __far *)0x7efea3)
#define TIMER4PS (*(unsigned char volatile __far *)0x7efea4)

#define ADCTIM (*(unsigned char volatile __far *)0x7efeab)
#define T3T4PS (*(unsigned char volatile __far *)0x7efeac)

#define PWM1_ETRPS (*(unsigned char volatile __far *)0x7efeb0)
#define PWM1_ENO (*(unsigned char volatile __far *)0x7efeb1)
#define PWM1_PS (*(unsigned char volatile __far *)0x7efeb2)
#define PWM1_IOAUX (*(unsigned char volatile __far *)0x7efeb3)
#define PWM2_ETRPS (*(unsigned char volatile __far *)0x7efeb4)
#define PWM2_ENO (*(unsigned char volatile __far *)0x7efeb5)
#define PWM2_PS (*(unsigned char volatile __far *)0x7efeb6)
#define PWM2_IOAUX (*(unsigned char volatile __far *)0x7efeb7)

#define PWMA_ETRPS (*(unsigned char volatile __far *)0x7efeb0)
#define PWMA_ENO (*(unsigned char volatile __far *)0x7efeb1)
#define PWMA_PS (*(unsigned char volatile __far *)0x7efeb2)
#define PWMA_IOAUX (*(unsigned char volatile __far *)0x7efeb3)
#define PWMB_ETRPS (*(unsigned char volatile __far *)0x7efeb4)
#define PWMB_ENO (*(unsigned char volatile __far *)0x7efeb5)
#define PWMB_PS (*(unsigned char volatile __far *)0x7efeb6)
#define PWMB_IOAUX (*(unsigned char volatile __far *)0x7efeb7)

#define PWM1_CR1 (*(unsigned char volatile __far *)0x7efec0)
#define PWM1_CR2 (*(unsigned char volatile __far *)0x7efec1)
#define PWM1_SMCR (*(unsigned char volatile __far *)0x7efec2)
#define PWM1_ETR (*(unsigned char volatile __far *)0x7efec3)
#define PWM1_IER (*(unsigned char volatile __far *)0x7efec4)
#define PWM1_SR1 (*(unsigned char volatile __far *)0x7efec5)
#define PWM1_SR2 (*(unsigned char volatile __far *)0x7efec6)
#define PWM1_EGR (*(unsigned char volatile __far *)0x7efec7)
#define PWM1_CCMR1 (*(unsigned char volatile __far *)0x7efec8)
#define PWM1_CCMR2 (*(unsigned char volatile __far *)0x7efec9)
#define PWM1_CCMR3 (*(unsigned char volatile __far *)0x7efeca)
#define PWM1_CCMR4 (*(unsigned char volatile __far *)0x7efecb)
#define PWM1_CCER1 (*(unsigned char volatile __far *)0x7efecc)
#define PWM1_CCER2 (*(unsigned char volatile __far *)0x7efecd)
#define PWM1_CNTRH (*(unsigned char volatile __far *)0x7efece)
#define PWM1_CNTRL (*(unsigned char volatile __far *)0x7efecf)
#define PWM1_PSCRH (*(unsigned char volatile __far *)0x7efed0)
#define PWM1_PSCRL (*(unsigned char volatile __far *)0x7efed1)
#define PWM1_ARRH (*(unsigned char volatile __far *)0x7efed2)
#define PWM1_ARRL (*(unsigned char volatile __far *)0x7efed3)
#define PWM1_RCR (*(unsigned char volatile __far *)0x7efed4)
#define PWM1_CCR1H (*(unsigned char volatile __far *)0x7efed5)
#define PWM1_CCR1L (*(unsigned char volatile __far *)0x7efed6)
#define PWM1_CCR2H (*(unsigned char volatile __far *)0x7efed7)
#define PWM1_CCR2L (*(unsigned char volatile __far *)0x7efed8)
#define PWM1_CCR3H (*(unsigned char volatile __far *)0x7efed9)
#define PWM1_CCR3L (*(unsigned char volatile __far *)0x7efeda)
#define PWM1_CCR4H (*(unsigned char volatile __far *)0x7efedb)
#define PWM1_CCR4L (*(unsigned char volatile __far *)0x7efedc)
#define PWM1_BKR (*(unsigned char volatile __far *)0x7efedd)
#define PWM1_DTR (*(unsigned char volatile __far *)0x7efede)
#define PWM1_OISR (*(unsigned char volatile __far *)0x7efedf)

#define PWM2_CR1 (*(unsigned char volatile __far *)0x7efee0)
#define PWM2_CR2 (*(unsigned char volatile __far *)0x7efee1)
#define PWM2_SMCR (*(unsigned char volatile __far *)0x7efee2)
#define PWM2_ETR (*(unsigned char volatile __far *)0x7efee3)
#define PWM2_IER (*(unsigned char volatile __far *)0x7efee4)
#define PWM2_SR1 (*(unsigned char volatile __far *)0x7efee5)
#define PWM2_SR2 (*(unsigned char volatile __far *)0x7efee6)
#define PWM2_EGR (*(unsigned char volatile __far *)0x7efee7)
#define PWM2_CCMR1 (*(unsigned char volatile __far *)0x7efee8)
#define PWM2_CCMR2 (*(unsigned char volatile __far *)0x7efee9)
#define PWM2_CCMR3 (*(unsigned char volatile __far *)0x7efeea)
#define PWM2_CCMR4 (*(unsigned char volatile __far *)0x7efeeb)
#define PWM2_CCER1 (*(unsigned char volatile __far *)0x7efeec)
#define PWM2_CCER2 (*(unsigned char volatile __far *)0x7efeed)
#define PWM2_CNTRH (*(unsigned char volatile __far *)0x7efeee)
#define PWM2_CNTRL (*(unsigned char volatile __far *)0x7efeef)
#define PWM2_PSCRH (*(unsigned char volatile __far *)0x7efef0)
#define PWM2_PSCRL (*(unsigned char volatile __far *)0x7efef1)
#define PWM2_ARRH (*(unsigned char volatile __far *)0x7efef2)
#define PWM2_ARRL (*(unsigned char volatile __far *)0x7efef3)
#define PWM2_RCR (*(unsigned char volatile __far *)0x7efef4)
#define PWM2_CCR1H (*(unsigned char volatile __far *)0x7efef5)
#define PWM2_CCR1L (*(unsigned char volatile __far *)0x7efef6)
#define PWM2_CCR2H (*(unsigned char volatile __far *)0x7efef7)
#define PWM2_CCR2L (*(unsigned char volatile __far *)0x7efef8)
#define PWM2_CCR3H (*(unsigned char volatile __far *)0x7efef9)
#define PWM2_CCR3L (*(unsigned char volatile __far *)0x7efefa)
#define PWM2_CCR4H (*(unsigned char volatile __far *)0x7efefb)
#define PWM2_CCR4L (*(unsigned char volatile __far *)0x7efefc)
#define PWM2_BKR (*(unsigned char volatile __far *)0x7efefd)
#define PWM2_DTR (*(unsigned char volatile __far *)0x7efefe)
#define PWM2_OISR (*(unsigned char volatile __far *)0x7efeff)

#define PWMA_CR1 (*(unsigned char volatile __far *)0x7efec0)
#define PWMA_CR2 (*(unsigned char volatile __far *)0x7efec1)
#define PWMA_SMCR (*(unsigned char volatile __far *)0x7efec2)
#define PWMA_ETR (*(unsigned char volatile __far *)0x7efec3)
#define PWMA_IER (*(unsigned char volatile __far *)0x7efec4)
#define PWMA_SR1 (*(unsigned char volatile __far *)0x7efec5)
#define PWMA_SR2 (*(unsigned char volatile __far *)0x7efec6)
#define PWMA_EGR (*(unsigned char volatile __far *)0x7efec7)
#define PWMA_CCMR1 (*(unsigned char volatile __far *)0x7efec8)
#define PWMA_CCMR2 (*(unsigned char volatile __far *)0x7efec9)
#define PWMA_CCMR3 (*(unsigned char volatile __far *)0x7efeca)
#define PWMA_CCMR4 (*(unsigned char volatile __far *)0x7efecb)
#define PWMA_CCER1 (*(unsigned char volatile __far *)0x7efecc)
#define PWMA_CCER2 (*(unsigned char volatile __far *)0x7efecd)
#define PWMA_CNTRH (*(unsigned char volatile __far *)0x7efece)
#define PWMA_CNTRL (*(unsigned char volatile __far *)0x7efecf)
#define PWMA_PSCRH (*(unsigned char volatile __far *)0x7efed0)
#define PWMA_PSCRL (*(unsigned char volatile __far *)0x7efed1)
#define PWMA_ARRH (*(unsigned char volatile __far *)0x7efed2)
#define PWMA_ARRL (*(unsigned char volatile __far *)0x7efed3)
#define PWMA_RCR (*(unsigned char volatile __far *)0x7efed4)
#define PWMA_CCR1H (*(unsigned char volatile __far *)0x7efed5)
#define PWMA_CCR1L (*(unsigned char volatile __far *)0x7efed6)
#define PWMA_CCR2H (*(unsigned char volatile __far *)0x7efed7)
#define PWMA_CCR2L (*(unsigned char volatile __far *)0x7efed8)
#define PWMA_CCR3H (*(unsigned char volatile __far *)0x7efed9)
#define PWMA_CCR3L (*(unsigned char volatile __far *)0x7efeda)
#define PWMA_CCR4H (*(unsigned char volatile __far *)0x7efedb)
#define PWMA_CCR4L (*(unsigned char volatile __far *)0x7efedc)
#define PWMA_BKR (*(unsigned char volatile __far *)0x7efedd)
#define PWMA_DTR (*(unsigned char volatile __far *)0x7efede)
#define PWMA_OISR (*(unsigned char volatile __far *)0x7efedf)

#define PWMB_CR1 (*(unsigned char volatile __far *)0x7efee0)
#define PWMB_CR2 (*(unsigned char volatile __far *)0x7efee1)
#define PWMB_SMCR (*(unsigned char volatile __far *)0x7efee2)
#define PWMB_ETR (*(unsigned char volatile __far *)0x7efee3)
#define PWMB_IER (*(unsigned char volatile __far *)0x7efee4)
#define PWMB_SR1 (*(unsigned char volatile __far *)0x7efee5)
#define PWMB_SR2 (*(unsigned char volatile __far *)0x7efee6)
#define PWMB_EGR (*(unsigned char volatile __far *)0x7efee7)
#define PWMB_CCMR1 (*(unsigned char volatile __far *)0x7efee8)
#define PWMB_CCMR2 (*(unsigned char volatile __far *)0x7efee9)
#define PWMB_CCMR3 (*(unsigned char volatile __far *)0x7efeea)
#define PWMB_CCMR4 (*(unsigned char volatile __far *)0x7efeeb)
#define PWMB_CCER1 (*(unsigned char volatile __far *)0x7efeec)
#define PWMB_CCER2 (*(unsigned char volatile __far *)0x7efeed)
#define PWMB_CNTRH (*(unsigned char volatile __far *)0x7efeee)
#define PWMB_CNTRL (*(unsigned char volatile __far *)0x7efeef)
#define PWMB_PSCRH (*(unsigned char volatile __far *)0x7efef0)
#define PWMB_PSCRL (*(unsigned char volatile __far *)0x7efef1)
#define PWMB_ARRH (*(unsigned char volatile __far *)0x7efef2)
#define PWMB_ARRL (*(unsigned char volatile __far *)0x7efef3)
#define PWMB_RCR (*(unsigned char volatile __far *)0x7efef4)
#define PWMB_CCR1H (*(unsigned char volatile __far *)0x7efef5)
#define PWMB_CCR1L (*(unsigned char volatile __far *)0x7efef6)
#define PWMB_CCR2H (*(unsigned char volatile __far *)0x7efef7)
#define PWMB_CCR2L (*(unsigned char volatile __far *)0x7efef8)
#define PWMB_CCR3H (*(unsigned char volatile __far *)0x7efef9)
#define PWMB_CCR3L (*(unsigned char volatile __far *)0x7efefa)
#define PWMB_CCR4H (*(unsigned char volatile __far *)0x7efefb)
#define PWMB_CCR4L (*(unsigned char volatile __far *)0x7efefc)
#define PWMB_BKR (*(unsigned char volatile __far *)0x7efefd)
#define PWMB_DTR (*(unsigned char volatile __far *)0x7efefe)
#define PWMB_OISR (*(unsigned char volatile __far *)0x7efeff)

/////////////////////////////////////////////////
//7E:FD00H-7E:FDFFH
/////////////////////////////////////////////////



/////////////////////////////////////////////////
//7E:FC00H-7E:FCFFH
/////////////////////////////////////////////////



/////////////////////////////////////////////////
//7E:FB00H-7E:FBFFH
/////////////////////////////////////////////////



/////////////////////////////////////////////////
//7E:FA00H-7E:FAFFH
/////////////////////////////////////////////////


/////////////////////////////////////////////////

#define INT0_VECTOR 0//0003H
#define TMR0_VECTOR 1//000BH
#define INT1_VECTOR 2//0013H
#define TMR1_VECTOR 3//001BH
#define UART1_VECTOR 4//0023H
#define ADC_VECTOR 5//002BH
#define LVD_VECTOR 6//0033H
#define PWM1_VECTOR 7//003BH
#define UART2_VECTOR 8//0043H
#define SPI_VECTOR 9//004BH
#define INT2_VECTOR 10//0053H
#define INT3_VECTOR 11//005BH
#define TMR2_VECTOR 12//0063H
#define USER_VECTOR 13//006BH
#define INT4_VECTOR 16//0083H
#define UART3_VECTOR 17//008BH
#define UART4_VECTOR 18//0093H
#define TMR3_VECTOR 19//009BH
#define TMR4_VECTOR 20//00A3H
#define CMP_VECTOR 21//00ABH
#define USB_VECTOR 22//00B3H
#define PWM2_VECTOR 23//00BBH
#define I2C_VECTOR 24//00C3H
#define CAN_VECTOR 28//00E3H
#define LIN_VECTOR 29//00EBH

/////////////////////////////////////////////////

#endif

