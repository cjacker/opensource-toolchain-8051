#ifndef __STC8A8K64D4_H__
#define __STC8A8K64D4_H__

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
#define S4SM0 0x80
#define S4ST4 0x40
#define S4SM2 0x20
#define S4REN 0x10
#define S4TB8 0x08
#define S4RB8 0x04
#define S4TI 0x02
#define S4RI 0x01
__sfr __at (0x85) S4BUF;
__sfr __at (0x87) PCON;
#define SMOD 0x80
#define SMOD0 0x40
#define LVDF 0x20
#define POF 0x10
#define GF1 0x08
#define GF0 0x04
#define PD 0x02
#define IDL 0x01
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
#define T1_GATE 0x80
#define T1_CT 0x40
#define T1_M1 0x20
#define T1_M0 0x10
#define T0_GATE 0x08
#define T0_CT 0x04
#define T0_M1 0x02
#define T0_M0 0x01
__sfr __at (0x8a) TL0;
__sfr __at (0x8b) TL1;
__sfr __at (0x8c) TH0;
__sfr __at (0x8d) TH1;
__sfr __at (0x8e) AUXR;
#define T0x12 0x80
#define T1x12 0x40
#define UART_M0x6 0x20
#define T2R 0x10
#define T2_CT 0x08
#define T2x12 0x04
#define EXTRAM 0x02
#define S1ST2 0x01
__sfr __at (0x8f) INTCLKO;
#define EX4 0x40
#define EX3 0x20
#define EX2 0x10
#define T2CLKO 0x04
#define T1CLKO 0x02
#define T0CLKO 0x01
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
#define S2SM0 0x80
#define S2SM2 0x20
#define S2REN 0x10
#define S2TB8 0x08
#define S2RB8 0x04
#define S2TI 0x02
#define S2RI 0x01
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
__sfr __at (0xa1) BUS_SPEED;
__sfr __at (0xa2) P_SW1;
#define UART1_S1 0x00
#define UART1_S2 0x40
#define UART1_S3 0x80
#define UART1_S4 0xc0
#define CCP_S1 0x00
#define CCP_S2 0x10
#define CCP_S3 0x20
#define CCP_S4 0x30
#define SPI_S1 0x00
#define SPI_S2 0x04
#define SPI_S3 0x08
#define SPI_S4 0x0c
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
#define WKTEN 0x80
__sfr __at (0xac) S3CON;
#define S3SM0 0x80
#define S3ST3 0x40
#define S3SM2 0x20
#define S3REN 0x10
#define S3TB8 0x08
#define S3RB8 0x04
#define S3TI 0x02
#define S3RI 0x01
__sfr __at (0xad) S3BUF;
__sfr __at (0xae) TA;
__sfr __at (0xaf) IE2;
#define ET4 0x40
#define ET3 0x20
#define ES4 0x10
#define ES3 0x08
#define ET2 0x04
#define ESPI 0x02
#define ES2 0x01
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
#define PI2C 0x40
#define PCMP 0x20
#define PX4 0x10
#define PPWMFD 0x08
#define PPWM 0x04
#define PSPI 0x02
#define PS2 0x01
__sfr __at (0xb6) IP2H;
#define PI2CH 0x40
#define PCMPH 0x20
#define PX4H 0x10
#define PPWMFDH 0x08
#define PPWMH 0x04
#define PSPIH 0x02
#define PS2H 0x01
__sfr __at (0xb7) IPH;
#define PPCAH 0x80
#define PLVDH 0x40
#define PADCH 0x20
#define PSH 0x10
#define PT1H 0x08
#define PX1H 0x04
#define PT0H 0x02
#define PX0H 0x01
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
#define EAXFR 0x80
#define I2C_S1 0x00
#define I2C_S2 0x10
#define I2C_S3 0x20
#define I2C_S4 0x30
#define CMPO_S1 0x00
#define CMPO_S2 0x08
#define UART4_S1 0x00
#define UART4_S2 0x04
#define UART3_S1 0x00
#define UART3_S2 0x02
#define UART2_S1 0x00
#define UART2_S2 0x01
__sfr __at (0xbc) ADC_CONTR;
#define ADC_POWER 0x80
#define ADC_START 0x40
#define ADC_FLAG 0x20
#define ADC_EPWMT 0x10
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
#define WDT_FLAG 0x80
#define EN_WDT 0x20
#define CLR_WDT 0x10
#define IDL_WDT 0x08
__sfr __at (0xc2) IAP_DATA;
__sfr __at (0xc3) IAP_ADDRH;
__sfr __at (0xc4) IAP_ADDRL;
__sfr __at (0xc5) IAP_CMD;
#define IAP_IDL 0x00
#define IAP_READ 0x01
#define IAP_WRITE 0x02
#define IAP_ERASE 0x03
__sfr __at (0xc6) IAP_TRIG;
__sfr __at (0xc7) IAP_CONTR;
#define IAPEN 0x80
#define SWBS 0x40
#define SWRST 0x20
#define CMD_FAIL 0x10
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
#define SPIF 0x80
#define WCOL 0x40
__sfr __at (0xce) SPCTL;
#define SSIG 0x80
#define SPEN 0x40
#define DORD 0x20
#define MSTR 0x10
#define CPOL 0x08
#define CPHA 0x04
__sfr __at (0xcf) SPDAT;
__sfr __at (0xd0) PSW;
__sbit __at (0xd0+7) CY;
__sbit __at (0xd0+6) AC;
__sbit __at (0xd0+5) F0;
__sbit __at (0xd0+4) RS1;
__sbit __at (0xd0+3) RS0;
__sbit __at (0xd0+2) OV;
__sbit __at (0xd0+0) P;
__sfr __at (0xd1) T4T3M;
#define T4R 0x80
#define T4_CT 0x40
#define T4x12 0x20
#define T4CLKO 0x10
#define T3R 0x08
#define T3_CT 0x04
#define T3x12 0x02
#define T3CLKO 0x01
__sfr __at (0xd2) T4H;
__sfr __at (0xd3) T4L;
__sfr __at (0xd4) T3H;
__sfr __at (0xd5) T3L;
__sfr __at (0xd6) T2H;
__sfr __at (0xd7) T2L;
__sfr __at (0xd8) CCON;
__sbit __at (0xd8+7) CF;
__sbit __at (0xd8+6) CR;
__sbit __at (0xd8+3) CCF3;
__sbit __at (0xd8+2) CCF2;
__sbit __at (0xd8+1) CCF1;
__sbit __at (0xd8+0) CCF0;
__sfr __at (0xd9) CMOD;
#define CIDL 0x80
#define ECF 0x01
__sfr __at (0xda) CCAPM0;
#define ECOM0 0x40
#define CCAPP0 0x20
#define CCAPN0 0x10
#define MAT0 0x08
#define TOG0 0x04
#define PWM0 0x02
#define ECCF0 0x01
__sfr __at (0xdb) CCAPM1;
#define ECOM1 0x40
#define CCAPP1 0x20
#define CCAPN1 0x10
#define MAT1 0x08
#define TOG1 0x04
#define PWM1 0x02
#define ECCF1 0x01
__sfr __at (0xdc) CCAPM2;
#define ECOM2 0x40
#define CCAPP2 0x20
#define CCAPN2 0x10
#define MAT2 0x08
#define TOG2 0x04
#define PWM2 0x02
#define ECCF2 0x01
__sfr __at (0xde) ADCCFG;
#define ADC_RESFMT 0x20
__sfr __at (0xdf) IP3;
#define PS4 0x02
#define PS3 0x01
__sfr __at (0xe0) ACC;
__sfr __at (0xe1) P7M1;
__sfr __at (0xe2) P7M0;
__sfr __at (0xe3) DPS;
__sfr __at (0xe4) DPL1;
__sfr __at (0xe5) DPH1;
__sfr __at (0xe6) CMPCR1;
#define CMPEN 0x80
#define CMPIF 0x40
#define PIE 0x20
#define NIE 0x10
#define CMPOE 0x02
#define CMPRES 0x01
__sfr __at (0xe7) CMPCR2;
#define INVCMPO 0x80
#define DISFLT 0x40
__sfr __at (0xe8) P6;
__sbit __at (0xe8+0) P60;
__sbit __at (0xe8+1) P61;
__sbit __at (0xe8+2) P62;
__sbit __at (0xe8+3) P63;
__sbit __at (0xe8+4) P64;
__sbit __at (0xe8+5) P65;
__sbit __at (0xe8+6) P66;
__sbit __at (0xe8+7) P67;
__sfr __at (0xe9) CL;
__sfr __at (0xea) CCAP0L;
__sfr __at (0xeb) CCAP1L;
__sfr __at (0xec) CCAP2L;
__sfr __at (0xee) IP3H;
#define PS4H 0x02
#define PS3H 0x01
__sfr __at (0xef) AUXINTIF;
#define INT4IF 0x40
#define INT3IF 0x20
#define INT2IF 0x10
#define T4IF 0x04
#define T3IF 0x02
#define T2IF 0x01
__sfr __at (0xf0) B;
__sfr __at (0xf1) PWMSET;
#define PWMRST 0x40
#define ENPWM 0x01
__sfr __at (0xf2) PCA_PWM0;
__sfr __at (0xf3) PCA_PWM1;
__sfr __at (0xf4) PCA_PWM2;
__sfr __at (0xf5) IAP_TPS;
__sfr __at (0xf6) PWMCFG;
#define PWMCBIF 0x08
#define PWMCBIE 0x04
#define PWMETA 0x02
#define PWMCEN 0x01
__sfr __at (0xf8) P7;
__sbit __at (0xf8+0) P70;
__sbit __at (0xf8+1) P71;
__sbit __at (0xf8+2) P72;
__sbit __at (0xf8+3) P73;
__sbit __at (0xf8+4) P74;
__sbit __at (0xf8+5) P75;
__sbit __at (0xf8+6) P76;
__sbit __at (0xf8+7) P77;
__sfr __at (0xf9) CH;
__sfr __at (0xfa) CCAP0H;
__sfr __at (0xfb) CCAP1H;
__sfr __at (0xfc) CCAP2H;
__sfr __at (0xff) RSTCFG;
#define ENLVR 0x40
#define P54RST 0x10
#define LVD_S1 0x00
#define LVD_S2 0x01
#define LVD_S3 0x02
#define LVD_S4 0x03

//如下特殊功能寄存器位于扩展RAM区域
//访问这些寄存器,需先将P_SW2的BIT7设置为1,才可正常读写

/////////////////////////////////////////////////
//FF00H-FFFFH
/////////////////////////////////////////////////


#define PWMC (*(unsigned int volatile __xdata *)0xff00)
#define PWMCH (*(unsigned char volatile __xdata *)0xff00)
#define PWMCL (*(unsigned char volatile __xdata *)0xff01)
#define PWMCKS (*(unsigned char volatile __xdata *)0xff02)
#define PWM_SELT2 0x10
#define PWMTADC (*(unsigned int volatile __xdata *)0xff03)
#define PWMTADCH (*(unsigned char volatile __xdata *)0xff03)
#define PWMTADCL (*(unsigned char volatile __xdata *)0xff04)
#define PWMIF (*(unsigned char volatile __xdata *)0xff05)
#define PWM_C7IF 0x80
#define PWM_C6IF 0x40
#define PWM_C5IF 0x20
#define PWM_C4IF 0x10
#define PWM_C3IF 0x08
#define PWM_C2IF 0x04
#define PWM_C1IF 0x02
#define PWM_C0IF 0x01
#define PWMFDCR (*(unsigned char volatile __xdata *)0xff06)
#define PWMFD_INVCMP 0x80
#define PWMFD_INVIO 0x40
#define PWMFD_ENFD 0x20
#define PWMFD_FLTFLIO 0x10
#define PWMFD_EFDI 0x08
#define PWMFD_FDCMP 0x04
#define PWMFD_FDIO 0x02
#define PWMFD_FDIF 0x01
#define PWMDELSEL (*(unsigned char volatile __xdata *)0xff07)
#define PWM_CH03FULL 0x00
#define PWM_CH03HALF 0x01
#define PWM_CH03NONE 0x02
#define PWM_CH47FULL 0x00
#define PWM_CH47HALF 0x04
#define PWM_CH47NONE 0x08
#define PWM0T1 (*(unsigned int volatile __xdata *)0xff10)
#define PWM0T1H (*(unsigned char volatile __xdata *)0xff10)
#define PWM0T1L (*(unsigned char volatile __xdata *)0xff11)
#define PWM0T2 (*(unsigned int volatile __xdata *)0xff12)
#define PWM0T2H (*(unsigned char volatile __xdata *)0xff12)
#define PWM0T2L (*(unsigned char volatile __xdata *)0xff13)
#define PWM0CR (*(unsigned char volatile __xdata *)0xff14)
#define PWM_ENO 0x80
#define PWM_INI0 0x00
#define PWM_INI1 0x40
#define PWM_ENI 0x04
#define PWM_ENT2I 0x02
#define PWM_ENT1I 0x01
#define PWM0HLD (*(unsigned char volatile __xdata *)0xff15)
#define PWM_HLDH 0x02
#define PWM_HLDL 0x01
#define PWM1T1 (*(unsigned int volatile __xdata *)0xff18)
#define PWM1T1H (*(unsigned char volatile __xdata *)0xff18)
#define PWM1T1L (*(unsigned char volatile __xdata *)0xff19)
#define PWM1T2 (*(unsigned int volatile __xdata *)0xff1a)
#define PWM1T2H (*(unsigned char volatile __xdata *)0xff1a)
#define PWM1T2L (*(unsigned char volatile __xdata *)0xff1b)
#define PWM1CR (*(unsigned char volatile __xdata *)0xff1c)
#define PWM1HLD (*(unsigned char volatile __xdata *)0xff1d)
#define PWM2T1 (*(unsigned int volatile __xdata *)0xff20)
#define PWM2T1H (*(unsigned char volatile __xdata *)0xff20)
#define PWM2T1L (*(unsigned char volatile __xdata *)0xff21)
#define PWM2T2 (*(unsigned int volatile __xdata *)0xff22)
#define PWM2T2H (*(unsigned char volatile __xdata *)0xff22)
#define PWM2T2L (*(unsigned char volatile __xdata *)0xff23)
#define PWM2CR (*(unsigned char volatile __xdata *)0xff24)
#define PWM2HLD (*(unsigned char volatile __xdata *)0xff25)
#define PWM3T1 (*(unsigned int volatile __xdata *)0xff28)
#define PWM3T1H (*(unsigned char volatile __xdata *)0xff28)
#define PWM3T1L (*(unsigned char volatile __xdata *)0xff29)
#define PWM3T2 (*(unsigned int volatile __xdata *)0xff2a)
#define PWM3T2H (*(unsigned char volatile __xdata *)0xff2a)
#define PWM3T2L (*(unsigned char volatile __xdata *)0xff2b)
#define PWM3CR (*(unsigned char volatile __xdata *)0xff2c)
#define PWM3HLD (*(unsigned char volatile __xdata *)0xff2d)
#define PWM4T1 (*(unsigned int volatile __xdata *)0xff30)
#define PWM4T1H (*(unsigned char volatile __xdata *)0xff30)
#define PWM4T1L (*(unsigned char volatile __xdata *)0xff31)
#define PWM4T2 (*(unsigned int volatile __xdata *)0xff32)
#define PWM4T2H (*(unsigned char volatile __xdata *)0xff32)
#define PWM4T2L (*(unsigned char volatile __xdata *)0xff33)
#define PWM4CR (*(unsigned char volatile __xdata *)0xff34)
#define PWM4HLD (*(unsigned char volatile __xdata *)0xff35)
#define PWM5T1 (*(unsigned int volatile __xdata *)0xff38)
#define PWM5T1H (*(unsigned char volatile __xdata *)0xff38)
#define PWM5T1L (*(unsigned char volatile __xdata *)0xff39)
#define PWM5T2 (*(unsigned int volatile __xdata *)0xff3a)
#define PWM5T2H (*(unsigned char volatile __xdata *)0xff3a)
#define PWM5T2L (*(unsigned char volatile __xdata *)0xff3b)
#define PWM5CR (*(unsigned char volatile __xdata *)0xff3c)
#define PWM5HLD (*(unsigned char volatile __xdata *)0xff3d)
#define PWM6T1 (*(unsigned int volatile __xdata *)0xff40)
#define PWM6T1H (*(unsigned char volatile __xdata *)0xff40)
#define PWM6T1L (*(unsigned char volatile __xdata *)0xff41)
#define PWM6T2 (*(unsigned int volatile __xdata *)0xff42)
#define PWM6T2H (*(unsigned char volatile __xdata *)0xff42)
#define PWM6T2L (*(unsigned char volatile __xdata *)0xff43)
#define PWM6CR (*(unsigned char volatile __xdata *)0xff44)
#define PWM6HLD (*(unsigned char volatile __xdata *)0xff45)
#define PWM7T1 (*(unsigned int volatile __xdata *)0xff48)
#define PWM7T1H (*(unsigned char volatile __xdata *)0xff48)
#define PWM7T1L (*(unsigned char volatile __xdata *)0xff49)
#define PWM7T2 (*(unsigned int volatile __xdata *)0xff4a)
#define PWM7T2H (*(unsigned char volatile __xdata *)0xff4a)
#define PWM7T2L (*(unsigned char volatile __xdata *)0xff4b)
#define PWM7CR (*(unsigned char volatile __xdata *)0xff4c)
#define PWM7HLD (*(unsigned char volatile __xdata *)0xff4d)

/////////////////////////////////////////////////
//FE00H-FEFFH
/////////////////////////////////////////////////

#define CKSEL (*(unsigned char volatile __xdata *)0xfe00)
#define MCK_IRC24M 0x00
#define MCK_XOSC 0x01
#define MCK_IRC32K 0x03
#define CLKDIV (*(unsigned char volatile __xdata *)0xfe01)
#define IRC24MCR (*(unsigned char volatile __xdata *)0xfe02)
#define ENIRC24M 0x80
#define IRC24MST 0x01
#define XOSCCR (*(unsigned char volatile __xdata *)0xfe03)
#define ENXOSC 0x80
#define XITYPE 0x40
#define XOSCST 0x01
#define IRC32KCR (*(unsigned char volatile __xdata *)0xfe04)
#define ENIRC32K 0x80
#define IRC32KST 0x01
#define MCLKOCR (*(unsigned char volatile __xdata *)0xfe05)
#define MCLKO_S 0x80
#define IRCDB (*(unsigned char volatile __xdata *)0xfe06)

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

#define LCMIFCFG (*(unsigned char volatile __xdata *)0xfe50)
#define LCMIFCFG2 (*(unsigned char volatile __xdata *)0xfe51)
#define LCMIFCR (*(unsigned char volatile __xdata *)0xfe52)
#define LCMIFSTA (*(unsigned char volatile __xdata *)0xfe53)
#define LCMIFDATL (*(unsigned char volatile __xdata *)0xfe54)
#define LCMIFDATH (*(unsigned char volatile __xdata *)0xfe55)

#define I2CCFG (*(unsigned char volatile __xdata *)0xfe80)
#define ENI2C 0x80
#define I2CMASTER 0x40
#define I2CSLAVE 0x00
#define I2CMSCR (*(unsigned char volatile __xdata *)0xfe81)
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
#define I2CMSST (*(unsigned char volatile __xdata *)0xfe82)
#define MSBUSY 0x80
#define MSIF 0x40
#define MSACKI 0x02
#define MSACKO 0x01
#define I2CSLCR (*(unsigned char volatile __xdata *)0xfe83)
#define ESTAI 0x40
#define ERXI 0x20
#define ETXI 0x10
#define ESTOI 0x08
#define SLRST 0x01
#define I2CSLST (*(unsigned char volatile __xdata *)0xfe84)
#define SLBUSY 0x80
#define STAIF 0x40
#define RXIF 0x20
#define TXIF 0x10
#define STOIF 0x08
#define TXING 0x04
#define SLACKI 0x02
#define SLACKO 0x01
#define I2CSLADR (*(unsigned char volatile __xdata *)0xfe85)
#define I2CTXD (*(unsigned char volatile __xdata *)0xfe86)
#define I2CRXD (*(unsigned char volatile __xdata *)0xfe87)
#define I2CMSAUX (*(unsigned char volatile __xdata *)0xfe88)
#define WDTA 0x01

#define TM2PS (*(unsigned char volatile __xdata *)0xfea2)
#define TM3PS (*(unsigned char volatile __xdata *)0xfea3)
#define TM4PS (*(unsigned char volatile __xdata *)0xfea4)
#define ADCTIM (*(unsigned char volatile __xdata *)0xfea8)
#define ADCEXCFG (*(unsigned char volatile __xdata *)0xfead)
#define CMPEXCFG (*(unsigned char volatile __xdata *)0xfeae)

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

#define CCAPM3 (*(unsigned char volatile __xdata *)0xfd54)
#define CCAP3L (*(unsigned char volatile __xdata *)0xfd55)
#define CCAP3H (*(unsigned char volatile __xdata *)0xfd56)
#define PCA_PWM3 (*(unsigned char volatile __xdata *)0xfd57)

#define PIN_IP (*(unsigned char volatile __xdata *)0xfd60)
#define PIN_IPH (*(unsigned char volatile __xdata *)0xfd61)

#define CHIPID0 (*(unsigned char volatile __xdata *)0xfde0)
#define CHIPID1 (*(unsigned char volatile __xdata *)0xfde1)
#define CHIPID2 (*(unsigned char volatile __xdata *)0xfde2)
#define CHIPID3 (*(unsigned char volatile __xdata *)0xfde3)
#define CHIPID4 (*(unsigned char volatile __xdata *)0xfde4)
#define CHIPID5 (*(unsigned char volatile __xdata *)0xfde5)
#define CHIPID6 (*(unsigned char volatile __xdata *)0xfde6)
#define CHIPID7 (*(unsigned char volatile __xdata *)0xfde7)
#define CHIPID8 (*(unsigned char volatile __xdata *)0xfde8)
#define CHIPID9 (*(unsigned char volatile __xdata *)0xfde9)
#define CHIPID10 (*(unsigned char volatile __xdata *)0xfdea)
#define CHIPID11 (*(unsigned char volatile __xdata *)0xfdeb)
#define CHIPID12 (*(unsigned char volatile __xdata *)0xfdec)
#define CHIPID13 (*(unsigned char volatile __xdata *)0xfded)
#define CHIPID14 (*(unsigned char volatile __xdata *)0xfdee)
#define CHIPID15 (*(unsigned char volatile __xdata *)0xfdef)
#define CHIPID16 (*(unsigned char volatile __xdata *)0xfdf0)
#define CHIPID17 (*(unsigned char volatile __xdata *)0xfdf1)
#define CHIPID18 (*(unsigned char volatile __xdata *)0xfdf2)
#define CHIPID19 (*(unsigned char volatile __xdata *)0xfdf3)
#define CHIPID20 (*(unsigned char volatile __xdata *)0xfdf4)
#define CHIPID21 (*(unsigned char volatile __xdata *)0xfdf5)
#define CHIPID22 (*(unsigned char volatile __xdata *)0xfdf6)
#define CHIPID23 (*(unsigned char volatile __xdata *)0xfdf7)
#define CHIPID24 (*(unsigned char volatile __xdata *)0xfdf8)
#define CHIPID25 (*(unsigned char volatile __xdata *)0xfdf9)
#define CHIPID26 (*(unsigned char volatile __xdata *)0xfdfa)
#define CHIPID27 (*(unsigned char volatile __xdata *)0xfdfb)
#define CHIPID28 (*(unsigned char volatile __xdata *)0xfdfc)
#define CHIPID29 (*(unsigned char volatile __xdata *)0xfdfd)
#define CHIPID30 (*(unsigned char volatile __xdata *)0xfdfe)
#define CHIPID31 (*(unsigned char volatile __xdata *)0xfdff)

/////////////////////////////////////////////////
//FC00H-FCFFH
/////////////////////////////////////////////////

#define MD3 (*(unsigned char volatile __xdata *)0xfcf0)
#define MD2 (*(unsigned char volatile __xdata *)0xfcf1)
#define MD1 (*(unsigned char volatile __xdata *)0xfcf2)
#define MD0 (*(unsigned char volatile __xdata *)0xfcf3)
#define MD5 (*(unsigned char volatile __xdata *)0xfcf4)
#define MD4 (*(unsigned char volatile __xdata *)0xfcf5)
#define dwOP1 (*(unsigned long volatile __xdata *)0xfcf0)
#define wOP1 (*(unsigned int volatile __xdata *)0xfcf2)
#define wOP2 (*(unsigned int volatile __xdata *)0xfcf4)
#define ARCON (*(unsigned char volatile __xdata *)0xfcf6)
#define MDU16_OP_RSHIFT (1 << 5)
#define MDU16_OP_LSHIFT (2 << 5)
#define MDU16_OP_NORMALIZE (3 << 5)
#define MDU16_OP_16MUL16 (4 << 5)
#define MDU16_OP_16DIV16 (5 << 5)
#define MDU16_OP_32DIV16 (6 << 5)
#define OPCON (*(unsigned char volatile __xdata *)0xfcf7)
#define MDU16_START 0x01
#define MDU16_BUSY 0x01
#define MDU16_RESET 0x02

/////////////////////////////////////////////////
//FB00H-FBFFH
/////////////////////////////////////////////////


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

#define INT0_VECTOR 0//0003H
#define TMR0_VECTOR 1//000BH
#define INT1_VECTOR 2//0013H
#define TMR1_VECTOR 3//001BH
#define UART1_VECTOR 4//0023H
#define ADC_VECTOR 5//002BH
#define LVD_VECTOR 6//0033H
#define PCA_VECTOR 7//003BH
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
#define PWM_VECTOR 22//00B3H
#define PWMFD_VECTOR 23//00BBH
#define I2C_VECTOR 24//00C3H
#define P0INT_VECTOR 37//012BH
#define P1INT_VECTOR 38//0133H
#define P2INT_VECTOR 39//013BH
#define P3INT_VECTOR 40//0143H
#define P4INT_VECTOR 41//014BH
#define P5INT_VECTOR 42//0153H
#define P6INT_VECTOR 43//015BH
#define P7INT_VECTOR 44//0163H
#define M2MDMA_VECTOR 47//017BH
#define ADCDMA_VECTOR 48//0183H
#define SPIDMA_VECTOR 49//018BH
#define U1TXDMA_VECTOR 50//0193H
#define U1RXDMA_VECTOR 51//019BH
#define U2TXDMA_VECTOR 52//01A3H
#define U2RXDMA_VECTOR 53//01ABH
#define U3TXDMA_VECTOR 54//01B3H
#define U3RXDMA_VECTOR 55//01BBH
#define U4TXDMA_VECTOR 56//01C3H
#define U4RXDMA_VECTOR 57//01CBH
#define LCMDMA_VECTOR 58//01D3H
#define LCM_VECTOR 59//01DBH

/////////////////////////////////////////////////

#endif

