#ifndef __STC8H_H__
#define __STC8H_H__

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
__sfr __at (0x84) S4CON;
__sfr __at (0x85) S4BUF;
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
__sfr __at (0x8a) TL0;
__sfr __at (0x8b) TL1;
__sfr __at (0x8c) TH0;
__sfr __at (0x8d) TH1;
__sfr __at (0x8e) AUXR;
__sfr __at (0x8f) INTCLKO;
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
__sfr __at (0x9a) S2CON;
__sfr __at (0x9b) S2BUF;
__sfr __at (0x9d) IRCBAND;
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
__sfr __at (0xa2) P_SW1;
__sfr __at (0xa8) IE;
__sbit __at (0xa8+7) EA;
__sbit __at (0xa8+6) ELVD;
__sbit __at (0xa8+5) EADC;
__sbit __at (0xa8+4) ES;
__sbit __at (0xa8+3) ET1;
__sbit __at (0xa8+2) EX1;
__sbit __at (0xa8+1) ET0;
__sbit __at (0xa8+0) EX0;
__sfr __at (0xa9) SADDR;
__sfr __at (0xaa) WKTCL;
__sfr __at (0xab) WKTCH;
__sfr __at (0xac) S3CON;
__sfr __at (0xad) S3BUF;
__sfr __at (0xae) TA;
__sfr __at (0xaf) IE2;
__sfr __at (0xb0) P3;
__sbit __at (0xb0+0) P30;
__sbit __at (0xb0+1) P31;
__sbit __at (0xb0+2) P32;
__sbit __at (0xb0+3) P33;
__sbit __at (0xb0+4) P34;
__sbit __at (0xb0+5) P35;
__sbit __at (0xb0+6) P36;
__sbit __at (0xb0+7) P37;
__sfr __at (0xb1) P3M1;
__sfr __at (0xb2) P3M0;
__sfr __at (0xb3) P4M1;
__sfr __at (0xb4) P4M0;
__sfr __at (0xb5) IP2;
__sfr __at (0xb6) IP2H;
__sfr __at (0xb7) IPH;
__sfr __at (0xb8) IP;
__sbit __at (0xb8+7) PPCA;
__sbit __at (0xb8+6) PLVD;
__sbit __at (0xb8+5) PADC;
__sbit __at (0xb8+4) PS;
__sbit __at (0xb8+3) PT1;
__sbit __at (0xb8+2) PX1;
__sbit __at (0xb8+1) PT0;
__sbit __at (0xb8+0) PX0;
__sfr __at (0xb9) SADEN;
__sfr __at (0xba) P_SW2;
__sfr __at (0xbc) ADC_CONTR;
__sfr __at (0xbd) ADC_RES;
__sfr __at (0xbe) ADC_RESL;
__sfr __at (0xc0) P4;
__sbit __at (0xc0+0) P40;
__sbit __at (0xc0+1) P41;
__sbit __at (0xc0+2) P42;
__sbit __at (0xc0+3) P43;
__sbit __at (0xc0+4) P44;
__sbit __at (0xc0+5) P45;
__sbit __at (0xc0+6) P46;
__sbit __at (0xc0+7) P47;
__sfr __at (0xc1) WDT_CONTR;
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
__sfr __at (0xc9) P5M1;
__sfr __at (0xca) P5M0;
__sfr __at (0xcb) P6M1;
__sfr __at (0xcc) P6M0;
__sfr __at (0xcd) SPSTAT;
__sfr __at (0xce) SPCTL;
__sfr __at (0xcf) SPDAT;
__sfr __at (0xd0) PSW;
__sbit __at (0xd0+7) CY;
__sbit __at (0xd0+6) AC;
__sbit __at (0xd0+5) F0;
__sbit __at (0xd0+4) RS1;
__sbit __at (0xd0+3) RS0;
__sbit __at (0xd0+2) OV;
__sbit __at (0xd0+1) F1;
__sbit __at (0xd0+0) P;
__sfr __at (0xd1) T4T3M;
__sfr __at (0xd2) T4H;
__sfr __at (0xd3) T4L;
__sfr __at (0xd4) T3H;
__sfr __at (0xd5) T3L;
__sfr __at (0xd6) T2H;
__sfr __at (0xd7) T2L;
__sfr __at (0xdc) USBCLK;
__sfr __at (0xde) ADCCFG;
__sfr __at (0xdf) IP3;
__sfr __at (0xe0) ACC;
__sfr __at (0xe1) P7M1;
__sfr __at (0xe2) P7M0;
__sfr __at (0xe3) DPS;
__sfr __at (0xe4) DPL1;
__sfr __at (0xe5) DPH1;
__sfr __at (0xe6) CMPCR1;
__sfr __at (0xe7) CMPCR2;
__sfr __at (0xe8) P6;
__sbit __at (0xe8+0) P60;
__sbit __at (0xe8+1) P61;
__sbit __at (0xe8+2) P62;
__sbit __at (0xe8+3) P63;
__sbit __at (0xe8+4) P64;
__sbit __at (0xe8+5) P65;
__sbit __at (0xe8+6) P66;
__sbit __at (0xe8+7) P67;
__sfr __at (0xec) USBDAT;
__sfr __at (0xee) IP3H;
__sfr __at (0xef) AUXINTIF;
__sfr __at (0xf0) B;
__sfr __at (0xf4) USBCON;
__sfr __at (0xf5) IAP_TPS;
__sfr __at (0xf8) P7;
__sbit __at (0xf8+0) P70;
__sbit __at (0xf8+1) P71;
__sbit __at (0xf8+2) P72;
__sbit __at (0xf8+3) P73;
__sbit __at (0xf8+4) P74;
__sbit __at (0xf8+5) P75;
__sbit __at (0xf8+6) P76;
__sbit __at (0xf8+7) P77;
__sfr __at (0xfc) USBADR;
__sfr __at (0xff) RSTCFG;

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
#define X32KCR (*(unsigned char volatile __xdata *)0xfe08)

#define P0PU (*(unsigned char volatile __xdata *)0xfe10)
#define P1PU (*(unsigned char volatile __xdata *)0xfe11)
#define P2PU (*(unsigned char volatile __xdata *)0xfe12)
#define P3PU (*(unsigned char volatile __xdata *)0xfe13)
#define P4PU (*(unsigned char volatile __xdata *)0xfe14)
#define P5PU (*(unsigned char volatile __xdata *)0xfe15)
#define P6PU (*(unsigned char volatile __xdata *)0xfe16)
#define P7PU (*(unsigned char volatile __xdata *)0xfe17)
#define P0NCS (*(unsigned char volatile __xdata *)0xfe18)
#define P1NCS (*(unsigned char volatile __xdata *)0xfe19)
#define P2NCS (*(unsigned char volatile __xdata *)0xfe1a)
#define P3NCS (*(unsigned char volatile __xdata *)0xfe1b)
#define P4NCS (*(unsigned char volatile __xdata *)0xfe1c)
#define P5NCS (*(unsigned char volatile __xdata *)0xfe1d)
#define P6NCS (*(unsigned char volatile __xdata *)0xfe1e)
#define P7NCS (*(unsigned char volatile __xdata *)0xfe1f)
#define P0SR (*(unsigned char volatile __xdata *)0xfe20)
#define P1SR (*(unsigned char volatile __xdata *)0xfe21)
#define P2SR (*(unsigned char volatile __xdata *)0xfe22)
#define P3SR (*(unsigned char volatile __xdata *)0xfe23)
#define P4SR (*(unsigned char volatile __xdata *)0xfe24)
#define P5SR (*(unsigned char volatile __xdata *)0xfe25)
#define P6SR (*(unsigned char volatile __xdata *)0xfe26)
#define P7SR (*(unsigned char volatile __xdata *)0xfe27)
#define P0DR (*(unsigned char volatile __xdata *)0xfe28)
#define P1DR (*(unsigned char volatile __xdata *)0xfe29)
#define P2DR (*(unsigned char volatile __xdata *)0xfe2a)
#define P3DR (*(unsigned char volatile __xdata *)0xfe2b)
#define P4DR (*(unsigned char volatile __xdata *)0xfe2c)
#define P5DR (*(unsigned char volatile __xdata *)0xfe2d)
#define P6DR (*(unsigned char volatile __xdata *)0xfe2e)
#define P7DR (*(unsigned char volatile __xdata *)0xfe2f)
#define P0IE (*(unsigned char volatile __xdata *)0xfe30)
#define P1IE (*(unsigned char volatile __xdata *)0xfe31)
#define P2IE (*(unsigned char volatile __xdata *)0xfe32)
#define P3IE (*(unsigned char volatile __xdata *)0xfe33)
#define P4IE (*(unsigned char volatile __xdata *)0xfe34)
#define P5IE (*(unsigned char volatile __xdata *)0xfe35)
#define P6IE (*(unsigned char volatile __xdata *)0xfe36)
#define P7IE (*(unsigned char volatile __xdata *)0xfe37)

#define RTCCR (*(unsigned char volatile __xdata *)0xfe60)
#define RTCCFG (*(unsigned char volatile __xdata *)0xfe61)
#define RTCIEN (*(unsigned char volatile __xdata *)0xfe62)
#define RTCIF (*(unsigned char volatile __xdata *)0xfe63)
#define ALAHOUR (*(unsigned char volatile __xdata *)0xfe64)
#define ALAMIN (*(unsigned char volatile __xdata *)0xfe65)
#define ALASEC (*(unsigned char volatile __xdata *)0xfe66)
#define ALASSEC (*(unsigned char volatile __xdata *)0xfe67)
#define INIYEAR (*(unsigned char volatile __xdata *)0xfe68)
#define INIMONTH (*(unsigned char volatile __xdata *)0xfe69)
#define INIDAY (*(unsigned char volatile __xdata *)0xfe6a)
#define INIHOUR (*(unsigned char volatile __xdata *)0xfe6b)
#define INIMIN (*(unsigned char volatile __xdata *)0xfe6c)
#define INISEC (*(unsigned char volatile __xdata *)0xfe6d)
#define INISSEC (*(unsigned char volatile __xdata *)0xfe6e)
#define YEAR (*(unsigned char volatile __xdata *)0xfe70)
#define MONTH (*(unsigned char volatile __xdata *)0xfe71)
#define DAY (*(unsigned char volatile __xdata *)0xfe72)
#define HOUR (*(unsigned char volatile __xdata *)0xfe73)
#define MIN (*(unsigned char volatile __xdata *)0xfe74)
#define SEC (*(unsigned char volatile __xdata *)0xfe75)
#define SSEC (*(unsigned char volatile __xdata *)0xfe76)

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
#define ADCTIM (*(unsigned char volatile __xdata *)0xfea8)
#define T3T4PIN (*(unsigned char volatile __xdata *)0xfeac)

#define PWM1_ETRPS (*(unsigned char volatile __xdata *)0xfeb0)
#define PWM1_ENO (*(unsigned char volatile __xdata *)0xfeb1)
#define PWM1_PS (*(unsigned char volatile __xdata *)0xfeb2)
#define PWM1_IOAUX (*(unsigned char volatile __xdata *)0xfeb3)
#define PWM2_ETRPS (*(unsigned char volatile __xdata *)0xfeb4)
#define PWM2_ENO (*(unsigned char volatile __xdata *)0xfeb5)
#define PWM2_PS (*(unsigned char volatile __xdata *)0xfeb6)
#define PWM2_IOAUX (*(unsigned char volatile __xdata *)0xfeb7)
#define PWM1_CR1 (*(unsigned char volatile __xdata *)0xfec0)
#define PWM1_CR2 (*(unsigned char volatile __xdata *)0xfec1)
#define PWM1_SMCR (*(unsigned char volatile __xdata *)0xfec2)
#define PWM1_ETR (*(unsigned char volatile __xdata *)0xfec3)
#define PWM1_IER (*(unsigned char volatile __xdata *)0xfec4)
#define PWM1_SR1 (*(unsigned char volatile __xdata *)0xfec5)
#define PWM1_SR2 (*(unsigned char volatile __xdata *)0xfec6)
#define PWM1_EGR (*(unsigned char volatile __xdata *)0xfec7)
#define PWM1_CCMR1 (*(unsigned char volatile __xdata *)0xfec8)
#define PWM1_CCMR2 (*(unsigned char volatile __xdata *)0xfec9)
#define PWM1_CCMR3 (*(unsigned char volatile __xdata *)0xfeca)
#define PWM1_CCMR4 (*(unsigned char volatile __xdata *)0xfecb)
#define PWM1_CCER1 (*(unsigned char volatile __xdata *)0xfecc)
#define PWM1_CCER2 (*(unsigned char volatile __xdata *)0xfecd)
#define PWM1_CNTR (*(unsigned int volatile __xdata *)0xfece)
#define PWM1_CNTRH (*(unsigned char volatile __xdata *)0xfece)
#define PWM1_CNTRL (*(unsigned char volatile __xdata *)0xfecf)
#define PWM1_PSCR (*(unsigned int volatile __xdata *)0xfed0)
#define PWM1_PSCRH (*(unsigned char volatile __xdata *)0xfed0)
#define PWM1_PSCRL (*(unsigned char volatile __xdata *)0xfed1)
#define PWM1_ARR (*(unsigned int volatile __xdata *)0xfed2)
#define PWM1_ARRH (*(unsigned char volatile __xdata *)0xfed2)
#define PWM1_ARRL (*(unsigned char volatile __xdata *)0xfed3)
#define PWM1_RCR (*(unsigned char volatile __xdata *)0xfed4)
#define PWM1_CCR1 (*(unsigned int volatile __xdata *)0xfed5)
#define PWM1_CCR1H (*(unsigned char volatile __xdata *)0xfed5)
#define PWM1_CCR1L (*(unsigned char volatile __xdata *)0xfed6)
#define PWM1_CCR2 (*(unsigned int volatile __xdata *)0xfed7)
#define PWM1_CCR2H (*(unsigned char volatile __xdata *)0xfed7)
#define PWM1_CCR2L (*(unsigned char volatile __xdata *)0xfed8)
#define PWM1_CCR3 (*(unsigned int volatile __xdata *)0xfed9)
#define PWM1_CCR3H (*(unsigned char volatile __xdata *)0xfed9)
#define PWM1_CCR3L (*(unsigned char volatile __xdata *)0xfeda)
#define PWM1_CCR4 (*(unsigned int volatile __xdata *)0xfedb)
#define PWM1_CCR4H (*(unsigned char volatile __xdata *)0xfedb)
#define PWM1_CCR4L (*(unsigned char volatile __xdata *)0xfedc)
#define PWM1_BKR (*(unsigned char volatile __xdata *)0xfedd)
#define PWM1_DTR (*(unsigned char volatile __xdata *)0xfede)
#define PWM1_OISR (*(unsigned char volatile __xdata *)0xfedf)
#define PWM2_CR1 (*(unsigned char volatile __xdata *)0xfee0)
#define PWM2_CR2 (*(unsigned char volatile __xdata *)0xfee1)
#define PWM2_SMCR (*(unsigned char volatile __xdata *)0xfee2)
#define PWM2_ETR (*(unsigned char volatile __xdata *)0xfee3)
#define PWM2_IER (*(unsigned char volatile __xdata *)0xfee4)
#define PWM2_SR1 (*(unsigned char volatile __xdata *)0xfee5)
#define PWM2_SR2 (*(unsigned char volatile __xdata *)0xfee6)
#define PWM2_EGR (*(unsigned char volatile __xdata *)0xfee7)
#define PWM2_CCMR1 (*(unsigned char volatile __xdata *)0xfee8)
#define PWM2_CCMR2 (*(unsigned char volatile __xdata *)0xfee9)
#define PWM2_CCMR3 (*(unsigned char volatile __xdata *)0xfeea)
#define PWM2_CCMR4 (*(unsigned char volatile __xdata *)0xfeeb)
#define PWM2_CCER1 (*(unsigned char volatile __xdata *)0xfeec)
#define PWM2_CCER2 (*(unsigned char volatile __xdata *)0xfeed)
#define PWM2_CNTR (*(unsigned int volatile __xdata *)0xfeee)
#define PWM2_CNTRH (*(unsigned char volatile __xdata *)0xfeee)
#define PWM2_CNTRL (*(unsigned char volatile __xdata *)0xfeef)
#define PWM2_PSCR (*(unsigned int volatile __xdata *)0xfef0)
#define PWM2_PSCRH (*(unsigned char volatile __xdata *)0xfef0)
#define PWM2_PSCRL (*(unsigned char volatile __xdata *)0xfef1)
#define PWM2_ARR (*(unsigned int volatile __xdata *)0xfef2)
#define PWM2_ARRH (*(unsigned char volatile __xdata *)0xfef2)
#define PWM2_ARRL (*(unsigned char volatile __xdata *)0xfef3)
#define PWM2_RCR (*(unsigned char volatile __xdata *)0xfef4)
#define PWM2_CCR1 (*(unsigned int volatile __xdata *)0xfef5)
#define PWM2_CCR1H (*(unsigned char volatile __xdata *)0xfef5)
#define PWM2_CCR1L (*(unsigned char volatile __xdata *)0xfef6)
#define PWM2_CCR2 (*(unsigned int volatile __xdata *)0xfef7)
#define PWM2_CCR2H (*(unsigned char volatile __xdata *)0xfef7)
#define PWM2_CCR2L (*(unsigned char volatile __xdata *)0xfef8)
#define PWM2_CCR3 (*(unsigned int volatile __xdata *)0xfef9)
#define PWM2_CCR3H (*(unsigned char volatile __xdata *)0xfef9)
#define PWM2_CCR3L (*(unsigned char volatile __xdata *)0xfefa)
#define PWM2_CCR4 (*(unsigned int volatile __xdata *)0xfefb)
#define PWM2_CCR4H (*(unsigned char volatile __xdata *)0xfefb)
#define PWM2_CCR4L (*(unsigned char volatile __xdata *)0xfefc)
#define PWM2_BKR (*(unsigned char volatile __xdata *)0xfefd)
#define PWM2_DTR (*(unsigned char volatile __xdata *)0xfefe)
#define PWM2_OISR (*(unsigned char volatile __xdata *)0xfeff)

#define PWMA_ETRPS (*(unsigned char volatile __xdata *)0xfeb0)
#define PWMA_ENO (*(unsigned char volatile __xdata *)0xfeb1)
#define PWMA_PS (*(unsigned char volatile __xdata *)0xfeb2)
#define PWMA_IOAUX (*(unsigned char volatile __xdata *)0xfeb3)
#define PWMB_ETRPS (*(unsigned char volatile __xdata *)0xfeb4)
#define PWMB_ENO (*(unsigned char volatile __xdata *)0xfeb5)
#define PWMB_PS (*(unsigned char volatile __xdata *)0xfeb6)
#define PWMB_IOAUX (*(unsigned char volatile __xdata *)0xfeb7)
#define PWMA_CR1 (*(unsigned char volatile __xdata *)0xfec0)
#define PWMA_CR2 (*(unsigned char volatile __xdata *)0xfec1)
#define PWMA_SMCR (*(unsigned char volatile __xdata *)0xfec2)
#define PWMA_ETR (*(unsigned char volatile __xdata *)0xfec3)
#define PWMA_IER (*(unsigned char volatile __xdata *)0xfec4)
#define PWMA_SR1 (*(unsigned char volatile __xdata *)0xfec5)
#define PWMA_SR2 (*(unsigned char volatile __xdata *)0xfec6)
#define PWMA_EGR (*(unsigned char volatile __xdata *)0xfec7)
#define PWMA_CCMR1 (*(unsigned char volatile __xdata *)0xfec8)
#define PWMA_CCMR2 (*(unsigned char volatile __xdata *)0xfec9)
#define PWMA_CCMR3 (*(unsigned char volatile __xdata *)0xfeca)
#define PWMA_CCMR4 (*(unsigned char volatile __xdata *)0xfecb)
#define PWMA_CCER1 (*(unsigned char volatile __xdata *)0xfecc)
#define PWMA_CCER2 (*(unsigned char volatile __xdata *)0xfecd)
#define PWMA_CNTR (*(unsigned int volatile __xdata *)0xfece)
#define PWMA_CNTRH (*(unsigned char volatile __xdata *)0xfece)
#define PWMA_CNTRL (*(unsigned char volatile __xdata *)0xfecf)
#define PWMA_PSCR (*(unsigned int volatile __xdata *)0xfed0)
#define PWMA_PSCRH (*(unsigned char volatile __xdata *)0xfed0)
#define PWMA_PSCRL (*(unsigned char volatile __xdata *)0xfed1)
#define PWMA_ARR (*(unsigned int volatile __xdata *)0xfed2)
#define PWMA_ARRH (*(unsigned char volatile __xdata *)0xfed2)
#define PWMA_ARRL (*(unsigned char volatile __xdata *)0xfed3)
#define PWMA_RCR (*(unsigned char volatile __xdata *)0xfed4)
#define PWMA_CCR1 (*(unsigned int volatile __xdata *)0xfed5)
#define PWMA_CCR1H (*(unsigned char volatile __xdata *)0xfed5)
#define PWMA_CCR1L (*(unsigned char volatile __xdata *)0xfed6)
#define PWMA_CCR2 (*(unsigned int volatile __xdata *)0xfed7)
#define PWMA_CCR2H (*(unsigned char volatile __xdata *)0xfed7)
#define PWMA_CCR2L (*(unsigned char volatile __xdata *)0xfed8)
#define PWMA_CCR3 (*(unsigned int volatile __xdata *)0xfed9)
#define PWMA_CCR3H (*(unsigned char volatile __xdata *)0xfed9)
#define PWMA_CCR3L (*(unsigned char volatile __xdata *)0xfeda)
#define PWMA_CCR4 (*(unsigned int volatile __xdata *)0xfedb)
#define PWMA_CCR4H (*(unsigned char volatile __xdata *)0xfedb)
#define PWMA_CCR4L (*(unsigned char volatile __xdata *)0xfedc)
#define PWMA_BKR (*(unsigned char volatile __xdata *)0xfedd)
#define PWMA_DTR (*(unsigned char volatile __xdata *)0xfede)
#define PWMA_OISR (*(unsigned char volatile __xdata *)0xfedf)
#define PWMB_CR1 (*(unsigned char volatile __xdata *)0xfee0)
#define PWMB_CR2 (*(unsigned char volatile __xdata *)0xfee1)
#define PWMB_SMCR (*(unsigned char volatile __xdata *)0xfee2)
#define PWMB_ETR (*(unsigned char volatile __xdata *)0xfee3)
#define PWMB_IER (*(unsigned char volatile __xdata *)0xfee4)
#define PWMB_SR1 (*(unsigned char volatile __xdata *)0xfee5)
#define PWMB_SR2 (*(unsigned char volatile __xdata *)0xfee6)
#define PWMB_EGR (*(unsigned char volatile __xdata *)0xfee7)
#define PWMB_CCMR1 (*(unsigned char volatile __xdata *)0xfee8)
#define PWMB_CCMR2 (*(unsigned char volatile __xdata *)0xfee9)
#define PWMB_CCMR3 (*(unsigned char volatile __xdata *)0xfeea)
#define PWMB_CCMR4 (*(unsigned char volatile __xdata *)0xfeeb)
#define PWMB_CCER1 (*(unsigned char volatile __xdata *)0xfeec)
#define PWMB_CCER2 (*(unsigned char volatile __xdata *)0xfeed)
#define PWMB_CNTR (*(unsigned int volatile __xdata *)0xfeee)
#define PWMB_CNTRH (*(unsigned char volatile __xdata *)0xfeee)
#define PWMB_CNTRL (*(unsigned char volatile __xdata *)0xfeef)
#define PWMB_PSCR (*(unsigned int volatile __xdata *)0xfef0)
#define PWMB_PSCRH (*(unsigned char volatile __xdata *)0xfef0)
#define PWMB_PSCRL (*(unsigned char volatile __xdata *)0xfef1)
#define PWMB_ARR (*(unsigned int volatile __xdata *)0xfef2)
#define PWMB_ARRH (*(unsigned char volatile __xdata *)0xfef2)
#define PWMB_ARRL (*(unsigned char volatile __xdata *)0xfef3)
#define PWMB_RCR (*(unsigned char volatile __xdata *)0xfef4)
#define PWMB_CCR5 (*(unsigned int volatile __xdata *)0xfef5)
#define PWMB_CCR5H (*(unsigned char volatile __xdata *)0xfef5)
#define PWMB_CCR5L (*(unsigned char volatile __xdata *)0xfef6)
#define PWMB_CCR6 (*(unsigned int volatile __xdata *)0xfef7)
#define PWMB_CCR6H (*(unsigned char volatile __xdata *)0xfef7)
#define PWMB_CCR6L (*(unsigned char volatile __xdata *)0xfef8)
#define PWMB_CCR7 (*(unsigned int volatile __xdata *)0xfef9)
#define PWMB_CCR7H (*(unsigned char volatile __xdata *)0xfef9)
#define PWMB_CCR7L (*(unsigned char volatile __xdata *)0xfefa)
#define PWMB_CCR8 (*(unsigned int volatile __xdata *)0xfefb)
#define PWMB_CCR8H (*(unsigned char volatile __xdata *)0xfefb)
#define PWMB_CCR8L (*(unsigned char volatile __xdata *)0xfefc)
#define PWMB_BKR (*(unsigned char volatile __xdata *)0xfefd)
#define PWMB_DTR (*(unsigned char volatile __xdata *)0xfefe)
#define PWMB_OISR (*(unsigned char volatile __xdata *)0xfeff)

/////////////////////////////////////////////////
//FD00H-FDFFH
/////////////////////////////////////////////////

#define P0INTE (*(unsigned char volatile __xdata *)0xfd00)
#define P1INTE (*(unsigned char volatile __xdata *)0xfd01)
#define P2INTE (*(unsigned char volatile __xdata *)0xfd02)
#define P3INTE (*(unsigned char volatile __xdata *)0xfd03)
#define P4INTE (*(unsigned char volatile __xdata *)0xfd04)
#define P5INTE (*(unsigned char volatile __xdata *)0xfd05)
#define P6INTE (*(unsigned char volatile __xdata *)0xfd06)
#define P7INTE (*(unsigned char volatile __xdata *)0xfd07)
#define P0INTF (*(unsigned char volatile __xdata *)0xfd10)
#define P1INTF (*(unsigned char volatile __xdata *)0xfd11)
#define P2INTF (*(unsigned char volatile __xdata *)0xfd12)
#define P3INTF (*(unsigned char volatile __xdata *)0xfd13)
#define P4INTF (*(unsigned char volatile __xdata *)0xfd14)
#define P5INTF (*(unsigned char volatile __xdata *)0xfd15)
#define P6INTF (*(unsigned char volatile __xdata *)0xfd16)
#define P7INTF (*(unsigned char volatile __xdata *)0xfd17)
#define P0IM0 (*(unsigned char volatile __xdata *)0xfd20)
#define P1IM0 (*(unsigned char volatile __xdata *)0xfd21)
#define P2IM0 (*(unsigned char volatile __xdata *)0xfd22)
#define P3IM0 (*(unsigned char volatile __xdata *)0xfd23)
#define P4IM0 (*(unsigned char volatile __xdata *)0xfd24)
#define P5IM0 (*(unsigned char volatile __xdata *)0xfd25)
#define P6IM0 (*(unsigned char volatile __xdata *)0xfd26)
#define P7IM0 (*(unsigned char volatile __xdata *)0xfd27)
#define P0IM1 (*(unsigned char volatile __xdata *)0xfd30)
#define P1IM1 (*(unsigned char volatile __xdata *)0xfd31)
#define P2IM1 (*(unsigned char volatile __xdata *)0xfd32)
#define P3IM1 (*(unsigned char volatile __xdata *)0xfd33)
#define P4IM1 (*(unsigned char volatile __xdata *)0xfd34)
#define P5IM1 (*(unsigned char volatile __xdata *)0xfd35)
#define P6IM1 (*(unsigned char volatile __xdata *)0xfd36)
#define P7IM1 (*(unsigned char volatile __xdata *)0xfd37)
#define P0WKUE (*(unsigned char volatile __xdata *)0xfd40)
#define P1WKUE (*(unsigned char volatile __xdata *)0xfd41)
#define P2WKUE (*(unsigned char volatile __xdata *)0xfd42)
#define P3WKUE (*(unsigned char volatile __xdata *)0xfd43)
#define P4WKUE (*(unsigned char volatile __xdata *)0xfd44)
#define P5WKUE (*(unsigned char volatile __xdata *)0xfd45)
#define P6WKUE (*(unsigned char volatile __xdata *)0xfd46)
#define P7WKUE (*(unsigned char volatile __xdata *)0xfd47)
#define PIN_IP (*(unsigned char volatile __xdata *)0xfd60)
#define PIN_IPH (*(unsigned char volatile __xdata *)0xfd61)

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

#define COMEN (*(unsigned char volatile __xdata *)0xfb00)
#define SEGENL (*(unsigned char volatile __xdata *)0xfb01)
#define SEGENH (*(unsigned char volatile __xdata *)0xfb02)
#define LEDCTRL (*(unsigned char volatile __xdata *)0xfb03)
#define LEDCKS (*(unsigned char volatile __xdata *)0xfb04)
#define COM0_DA_L (*(unsigned char volatile __xdata *)0xfb10)
#define COM1_DA_L (*(unsigned char volatile __xdata *)0xfb11)
#define COM2_DA_L (*(unsigned char volatile __xdata *)0xfb12)
#define COM3_DA_L (*(unsigned char volatile __xdata *)0xfb13)
#define COM4_DA_L (*(unsigned char volatile __xdata *)0xfb14)
#define COM5_DA_L (*(unsigned char volatile __xdata *)0xfb15)
#define COM6_DA_L (*(unsigned char volatile __xdata *)0xfb16)
#define COM7_DA_L (*(unsigned char volatile __xdata *)0xfb17)
#define COM0_DA_H (*(unsigned char volatile __xdata *)0xfb18)
#define COM1_DA_H (*(unsigned char volatile __xdata *)0xfb19)
#define COM2_DA_H (*(unsigned char volatile __xdata *)0xfb1a)
#define COM3_DA_H (*(unsigned char volatile __xdata *)0xfb1b)
#define COM4_DA_H (*(unsigned char volatile __xdata *)0xfb1c)
#define COM5_DA_H (*(unsigned char volatile __xdata *)0xfb1d)
#define COM6_DA_H (*(unsigned char volatile __xdata *)0xfb1e)
#define COM7_DA_H (*(unsigned char volatile __xdata *)0xfb1f)
#define COM0_DC_L (*(unsigned char volatile __xdata *)0xfb20)
#define COM1_DC_L (*(unsigned char volatile __xdata *)0xfb21)
#define COM2_DC_L (*(unsigned char volatile __xdata *)0xfb22)
#define COM3_DC_L (*(unsigned char volatile __xdata *)0xfb23)
#define COM4_DC_L (*(unsigned char volatile __xdata *)0xfb24)
#define COM5_DC_L (*(unsigned char volatile __xdata *)0xfb25)
#define COM6_DC_L (*(unsigned char volatile __xdata *)0xfb26)
#define COM7_DC_L (*(unsigned char volatile __xdata *)0xfb27)
#define COM0_DC_H (*(unsigned char volatile __xdata *)0xfb28)
#define COM1_DC_H (*(unsigned char volatile __xdata *)0xfb29)
#define COM2_DC_H (*(unsigned char volatile __xdata *)0xfb2a)
#define COM3_DC_H (*(unsigned char volatile __xdata *)0xfb2b)
#define COM4_DC_H (*(unsigned char volatile __xdata *)0xfb2c)
#define COM5_DC_H (*(unsigned char volatile __xdata *)0xfb2d)
#define COM6_DC_H (*(unsigned char volatile __xdata *)0xfb2e)
#define COM7_DC_H (*(unsigned char volatile __xdata *)0xfb2f)

#define TSCHEN1 (*(unsigned char volatile __xdata *)0xfb40)
#define TSCHEN2 (*(unsigned char volatile __xdata *)0xfb41)
#define TSCFG1 (*(unsigned char volatile __xdata *)0xfb42)
#define TSCFG2 (*(unsigned char volatile __xdata *)0xfb43)
#define TSWUTC (*(unsigned char volatile __xdata *)0xfb44)
#define TSCTRL (*(unsigned char volatile __xdata *)0xfb45)
#define TSSTA1 (*(unsigned char volatile __xdata *)0xfb46)
#define TSSTA2 (*(unsigned char volatile __xdata *)0xfb47)
#define TSRT (*(unsigned char volatile __xdata *)0xfb48)
#define TSDAT (*(unsigned int volatile __xdata *)0xfb49)
#define TSDATH (*(unsigned char volatile __xdata *)0xfb49)
#define TSDATL (*(unsigned char volatile __xdata *)0xfb4A)
#define TSTH00 (*(unsigned int volatile __xdata *)0xfb50)
#define TSTH00H (*(unsigned char volatile __xdata *)0xfb50)
#define TSTH00L (*(unsigned char volatile __xdata *)0xfb51)
#define TSTH01 (*(unsigned int volatile __xdata *)0xfb52)
#define TSTH01H (*(unsigned char volatile __xdata *)0xfb52)
#define TSTH01L (*(unsigned char volatile __xdata *)0xfb53)
#define TSTH02 (*(unsigned int volatile __xdata *)0xfb54)
#define TSTH02H (*(unsigned char volatile __xdata *)0xfb54)
#define TSTH02L (*(unsigned char volatile __xdata *)0xfb55)
#define TSTH03 (*(unsigned int volatile __xdata *)0xfb56)
#define TSTH03H (*(unsigned char volatile __xdata *)0xfb56)
#define TSTH03L (*(unsigned char volatile __xdata *)0xfb57)
#define TSTH04 (*(unsigned int volatile __xdata *)0xfb58)
#define TSTH04H (*(unsigned char volatile __xdata *)0xfb58)
#define TSTH04L (*(unsigned char volatile __xdata *)0xfb59)
#define TSTH05 (*(unsigned int volatile __xdata *)0xfb5a)
#define TSTH05H (*(unsigned char volatile __xdata *)0xfb5a)
#define TSTH05L (*(unsigned char volatile __xdata *)0xfb5b)
#define TSTH06 (*(unsigned int volatile __xdata *)0xfb5c)
#define TSTH06H (*(unsigned char volatile __xdata *)0xfb5c)
#define TSTH06L (*(unsigned char volatile __xdata *)0xfb5d)
#define TSTH07 (*(unsigned int volatile __xdata *)0xfb5e)
#define TSTH07H (*(unsigned char volatile __xdata *)0xfb5e)
#define TSTH07L (*(unsigned char volatile __xdata *)0xfb5f)
#define TSTH08 (*(unsigned int volatile __xdata *)0xfb60)
#define TSTH08H (*(unsigned char volatile __xdata *)0xfb60)
#define TSTH08L (*(unsigned char volatile __xdata *)0xfb61)
#define TSTH09 (*(unsigned int volatile __xdata *)0xfb62)
#define TSTH09H (*(unsigned char volatile __xdata *)0xfb62)
#define TSTH09L (*(unsigned char volatile __xdata *)0xfb63)
#define TSTH10 (*(unsigned int volatile __xdata *)0xfb64)
#define TSTH10H (*(unsigned char volatile __xdata *)0xfb64)
#define TSTH10L (*(unsigned char volatile __xdata *)0xfb65)
#define TSTH11 (*(unsigned int volatile __xdata *)0xfb66)
#define TSTH11H (*(unsigned char volatile __xdata *)0xfb66)
#define TSTH11L (*(unsigned char volatile __xdata *)0xfb67)
#define TSTH12 (*(unsigned int volatile __xdata *)0xfb68)
#define TSTH12H (*(unsigned char volatile __xdata *)0xfb68)
#define TSTH12L (*(unsigned char volatile __xdata *)0xfb69)
#define TSTH13 (*(unsigned int volatile __xdata *)0xfb6a)
#define TSTH13H (*(unsigned char volatile __xdata *)0xfb6a)
#define TSTH13L (*(unsigned char volatile __xdata *)0xfb6b)
#define TSTH14 (*(unsigned int volatile __xdata *)0xfb6c)
#define TSTH14H (*(unsigned char volatile __xdata *)0xfb6c)
#define TSTH14L (*(unsigned char volatile __xdata *)0xfb6d)
#define TSTH15 (*(unsigned int volatile __xdata *)0xfb6e)
#define TSTH15H (*(unsigned char volatile __xdata *)0xfb6e)
#define TSTH15L (*(unsigned char volatile __xdata *)0xfb6f)

/////////////////////////////////////////////////
//FA00H-FAFFH
/////////////////////////////////////////////////

#define DMA_ADC_CFG (*(unsigned char volatile __xdata *)0xfa10)
#define DMA_ADC_CR (*(unsigned char volatile __xdata *)0xfa11)
#define DMA_ADC_STA (*(unsigned char volatile __xdata *)0xfa12)
#define DMA_ADC_RXA (*(unsigned int volatile __xdata *)0xfa17)
#define DMA_ADC_RXAH (*(unsigned char volatile __xdata *)0xfa17)
#define DMA_ADC_RXAL (*(unsigned char volatile __xdata *)0xfa18)
#define DMA_ADC_CFG2 (*(unsigned char volatile __xdata *)0xfa19)
#define DMA_ADC_CHSW0 (*(unsigned char volatile __xdata *)0xfa1a)
#define DMA_ADC_CHSW1 (*(unsigned char volatile __xdata *)0xfa1b)

#define DMA_SPI_CFG (*(unsigned char volatile __xdata *)0xfa20)
#define DMA_SPI_CR (*(unsigned char volatile __xdata *)0xfa21)
#define DMA_SPI_STA (*(unsigned char volatile __xdata *)0xfa22)
#define DMA_SPI_AMT (*(unsigned char volatile __xdata *)0xfa23)
#define DMA_SPI_DONE (*(unsigned char volatile __xdata *)0xfa24)
#define DMA_SPI_TXA (*(unsigned int volatile __xdata *)0xfa25)
#define DMA_SPI_TXAH (*(unsigned char volatile __xdata *)0xfa25)
#define DMA_SPI_TXAL (*(unsigned char volatile __xdata *)0xfa26)
#define DMA_SPI_RXA (*(unsigned int volatile __xdata *)0xfa27)
#define DMA_SPI_RXAH (*(unsigned char volatile __xdata *)0xfa27)
#define DMA_SPI_RXAL (*(unsigned char volatile __xdata *)0xfa28)
#define DMA_SPI_CFG2 (*(unsigned char volatile __xdata *)0xfa29)

#define DMA_UR1T_CFG (*(unsigned char volatile __xdata *)0xfa30)
#define DMA_UR1T_CR (*(unsigned char volatile __xdata *)0xfa31)
#define DMA_UR1T_STA (*(unsigned char volatile __xdata *)0xfa32)
#define DMA_UR1T_AMT (*(unsigned char volatile __xdata *)0xfa33)
#define DMA_UR1T_DONE (*(unsigned char volatile __xdata *)0xfa34)
#define DMA_UR1T_TXA (*(unsigned int volatile __xdata *)0xfa35)
#define DMA_UR1T_TXAH (*(unsigned char volatile __xdata *)0xfa35)
#define DMA_UR1T_TXAL (*(unsigned char volatile __xdata *)0xfa36)
#define DMA_UR1R_CFG (*(unsigned char volatile __xdata *)0xfa38)
#define DMA_UR1R_CR (*(unsigned char volatile __xdata *)0xfa39)
#define DMA_UR1R_STA (*(unsigned char volatile __xdata *)0xfa3a)
#define DMA_UR1R_AMT (*(unsigned char volatile __xdata *)0xfa3b)
#define DMA_UR1R_DONE (*(unsigned char volatile __xdata *)0xfa3c)
#define DMA_UR1R_RXA (*(unsigned int volatile __xdata *)0xfa3d)
#define DMA_UR1R_RXAH (*(unsigned char volatile __xdata *)0xfa3d)
#define DMA_UR1R_RXAL (*(unsigned char volatile __xdata *)0xfa3e)

#define DMA_UR2T_CFG (*(unsigned char volatile __xdata *)0xfa40)
#define DMA_UR2T_CR (*(unsigned char volatile __xdata *)0xfa41)
#define DMA_UR2T_STA (*(unsigned char volatile __xdata *)0xfa42)
#define DMA_UR2T_AMT (*(unsigned char volatile __xdata *)0xfa43)
#define DMA_UR2T_DONE (*(unsigned char volatile __xdata *)0xfa44)
#define DMA_UR2T_TXA (*(unsigned int volatile __xdata *)0xfa45)
#define DMA_UR2T_TXAH (*(unsigned char volatile __xdata *)0xfa45)
#define DMA_UR2T_TXAL (*(unsigned char volatile __xdata *)0xfa46)
#define DMA_UR2R_CFG (*(unsigned char volatile __xdata *)0xfa48)
#define DMA_UR2R_CR (*(unsigned char volatile __xdata *)0xfa49)
#define DMA_UR2R_STA (*(unsigned char volatile __xdata *)0xfa4a)
#define DMA_UR2R_AMT (*(unsigned char volatile __xdata *)0xfa4b)
#define DMA_UR2R_DONE (*(unsigned char volatile __xdata *)0xfa4c)
#define DMA_UR2R_RXA (*(unsigned int volatile __xdata *)0xfa4d)
#define DMA_UR2R_RXAH (*(unsigned char volatile __xdata *)0xfa4d)
#define DMA_UR2R_RXAL (*(unsigned char volatile __xdata *)0xfa4e)

#define DMA_UR3T_CFG (*(unsigned char volatile __xdata *)0xfa50)
#define DMA_UR3T_CR (*(unsigned char volatile __xdata *)0xfa51)
#define DMA_UR3T_STA (*(unsigned char volatile __xdata *)0xfa52)
#define DMA_UR3T_AMT (*(unsigned char volatile __xdata *)0xfa53)
#define DMA_UR3T_DONE (*(unsigned char volatile __xdata *)0xfa54)
#define DMA_UR3T_TXA (*(unsigned int volatile __xdata *)0xfa55)
#define DMA_UR3T_TXAH (*(unsigned char volatile __xdata *)0xfa55)
#define DMA_UR3T_TXAL (*(unsigned char volatile __xdata *)0xfa56)
#define DMA_UR3R_CFG (*(unsigned char volatile __xdata *)0xfa58)
#define DMA_UR3R_CR (*(unsigned char volatile __xdata *)0xfa59)
#define DMA_UR3R_STA (*(unsigned char volatile __xdata *)0xfa5a)
#define DMA_UR3R_AMT (*(unsigned char volatile __xdata *)0xfa5b)
#define DMA_UR3R_DONE (*(unsigned char volatile __xdata *)0xfa5c)
#define DMA_UR3R_RXA (*(unsigned int volatile __xdata *)0xfa5d)
#define DMA_UR3R_RXAH (*(unsigned char volatile __xdata *)0xfa5d)
#define DMA_UR3R_RXAL (*(unsigned char volatile __xdata *)0xfa5e)

#define DMA_UR4T_CFG (*(unsigned char volatile __xdata *)0xfa60)
#define DMA_UR4T_CR (*(unsigned char volatile __xdata *)0xfa61)
#define DMA_UR4T_STA (*(unsigned char volatile __xdata *)0xfa62)
#define DMA_UR4T_AMT (*(unsigned char volatile __xdata *)0xfa63)
#define DMA_UR4T_DONE (*(unsigned char volatile __xdata *)0xfa64)
#define DMA_UR4T_TXA (*(unsigned int volatile __xdata *)0xfa65)
#define DMA_UR4T_TXAH (*(unsigned char volatile __xdata *)0xfa65)
#define DMA_UR4T_TXAL (*(unsigned char volatile __xdata *)0xfa66)
#define DMA_UR4R_CFG (*(unsigned char volatile __xdata *)0xfa68)
#define DMA_UR4R_CR (*(unsigned char volatile __xdata *)0xfa69)
#define DMA_UR4R_STA (*(unsigned char volatile __xdata *)0xfa6a)
#define DMA_UR4R_AMT (*(unsigned char volatile __xdata *)0xfa6b)
#define DMA_UR4R_DONE (*(unsigned char volatile __xdata *)0xfa6c)
#define DMA_UR4R_RXA (*(unsigned int volatile __xdata *)0xfa6d)
#define DMA_UR4R_RXAH (*(unsigned char volatile __xdata *)0xfa6d)
#define DMA_UR4R_RXAL (*(unsigned char volatile __xdata *)0xfa6e)

#define DMA_LCM_CFG (*(unsigned char volatile __xdata *)0xfa70)
#define DMA_LCM_CR (*(unsigned char volatile __xdata *)0xfa71)
#define DMA_LCM_STA (*(unsigned char volatile __xdata *)0xfa72)
#define DMA_LCM_AMT (*(unsigned char volatile __xdata *)0xfa73)
#define DMA_LCM_DONE (*(unsigned char volatile __xdata *)0xfa74)
#define DMA_LCM_TXA (*(unsigned int volatile __xdata *)0xfa75)
#define DMA_LCM_TXAH (*(unsigned char volatile __xdata *)0xfa75)
#define DMA_LCM_TXAL (*(unsigned char volatile __xdata *)0xfa76)
#define DMA_LCM_RXA (*(unsigned int volatile __xdata *)0xfa77)
#define DMA_LCM_RXAH (*(unsigned char volatile __xdata *)0xfa77)
#define DMA_LCM_RXAL (*(unsigned char volatile __xdata *)0xfa78)


/////////////////////////////////////////////////

#endif

