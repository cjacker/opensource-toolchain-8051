#ifndef __STC12H_H_
#define __STC12H_H_

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
#define S2ST4 0x40
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
__sfr __at (0xa2) P_SW1;
#define UART1_S1 0x00
#define UART1_S2 0x40
#define UART1_S3 0x80
#define UART1_S4 0xc0
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
#define S3ST4 0x40
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
#define PPWM2 0x08
#define PPWM1 0x04
#define PSPI 0x02
#define PS2 0x01
__sfr __at (0xb6) IP2H;
#define PI2CH 0x40
#define PCMPH 0x20
#define PX4H 0x10
#define PPWM2H 0x08
#define PPWM1H 0x04
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
__sfr __at (0xbb) VOCTRL;
__sfr __at (0xbc) ADC_CONTR;
#define ADC_POWER 0x80
#define ADC_START 0x40
#define ADC_FLAG 0x20
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
__sfr __at (0xdb) CCAPM1;
__sfr __at (0xdc) CCAPM2;
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
#define PIS 0x08
#define NIS 0x04
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
__sfr __at (0xf2) PCA_PWM0;
__sfr __at (0xf3) PCA_PWM1;
__sfr __at (0xf4) PCA_PWM2;
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

__sfr __at (0xdc) USBCLK;
__sfr __at (0xec) USBDAT;
__sfr __at (0xf4) USBCON;
__sfr __at (0xfc) USBADR;

//如下特殊功能寄存器位于扩展RAM区域
//访问这些寄存器,需先将P_SW2的BIT7设置为1,才可正常读写
#define CCAPM3 (*(unsigned char volatile __xdata *)0xfd54)
#define CCAP3L (*(unsigned char volatile __xdata *)0xfd55)
#define CCAP3H (*(unsigned char volatile __xdata *)0xfd56)
#define PCA_PWM3 (*(unsigned char volatile __xdata *)0xfd57)

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
#define IRC48MCR (*(unsigned char volatile __xdata *)0xfe07)
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
#define T3T4PIN (*(unsigned char volatile __xdata *)0xfeac)
#define PWM1_ETRPS (*(unsigned char volatile __xdata *)0xfeb0)
#define PWM1_BRK_S1 0x00
#define PWM1_BRK_S2 0x04
#define PWM1_ETR_S1 0x00
#define PWM1_ETR_S2 0x01
#define PWM1_ETR_S3 0x02
#define PWM1_ETR_S4 0x03
#define PWM1_ENO (*(unsigned char volatile __xdata *)0xfeb1)
#define PWM1_ENO4N 0x80
#define PWM1_ENO4P 0x40
#define PWM1_ENO3N 0x20
#define PWM1_ENO3P 0x10
#define PWM1_ENO2N 0x08
#define PWM1_ENO2P 0x04
#define PWM1_ENO1N 0x02
#define PWM1_ENO1P 0x01
#define PWM1_PS (*(unsigned char volatile __xdata *)0xfeb2)
#define PWM1_C4_S1 0x00
#define PWM1_C4_S2 0x40
#define PWM1_C4_S3 0x80
#define PWM1_C4_S4 0xc0
#define PWM1_C3_S1 0x00
#define PWM1_C3_S2 0x10
#define PWM1_C3_S3 0x20
#define PWM1_C3_S4 0x30
#define PWM1_C2_S1 0x00
#define PWM1_C2_S2 0x04
#define PWM1_C2_S3 0x08
#define PWM1_C2_S4 0x0c
#define PWM1_C1_S1 0x00
#define PWM1_C1_S2 0x01
#define PWM1_C1_S3 0x02
#define PWM1_C1_S4 0x03
#define PWM1_IOAUX (*(unsigned char volatile __xdata *)0xfeb3)
#define PWM1_AUX4N 0x80
#define PWM1_AUX4P 0x40
#define PWM1_AUX3N 0x20
#define PWM1_AUX3P 0x10
#define PWM1_AUX2N 0x08
#define PWM1_AUX2P 0x04
#define PWM1_AUX1N 0x02
#define PWM1_AUX1P 0x01
#define PWM2_ETRPS (*(unsigned char volatile __xdata *)0xfeb4)
#define PWm2_BRK_S1 0x00
#define PWm2_BRK_S2 0x04
#define PWm2_ETR_S1 0x00
#define PWm2_ETR_S2 0x01
#define PWm2_ETR_S3 0x02
#define PWm2_ETR_S4 0x03
#define PWM2_ENO (*(unsigned char volatile __xdata *)0xfeb5)
#define PWM2_ENO8P 0x40
#define PWM2_ENO7P 0x10
#define PWM2_ENO6P 0x04
#define PWM2_ENO5P 0x01
#define PWM2_PS (*(unsigned char volatile __xdata *)0xfeb6)
#define PWM2_C8_S1 0x00
#define PWM2_C8_S2 0x40
#define PWM2_C8_S3 0x80
#define PWM2_C8_S4 0xc0
#define PWM2_C7_S1 0x00
#define PWM2_C7_S2 0x10
#define PWM2_C7_S3 0x20
#define PWM2_C7_S4 0x30
#define PWM2_C6_S1 0x00
#define PWM2_C6_S2 0x04
#define PWM2_C6_S3 0x08
#define PWM2_C6_S4 0x0c
#define PWM2_C5_S1 0x00
#define PWM2_C5_S2 0x01
#define PWM2_C5_S3 0x02
#define PWM2_C5_S4 0x03
#define PWM2_IOAUX (*(unsigned char volatile __xdata *)0xfeb7)
#define PWM2_AUX8P 0x40
#define PWM2_AUX7P 0x10
#define PWM2_AUX6P 0x04
#define PWM2_AUX5P 0x01
#define PWM1_CR1 (*(unsigned char volatile __xdata *)0xfec0)
#define PWM1_ARPE 0x80
#define PWM1_CMS0 0x00
#define PWM1_CMS1 0x20
#define PWM1_CMS2 0x40
#define PWM1_CMS3 0x60
#define PWM1_UP 0x00
#define PWM1_DOWN 0x10
#define PWM1_OPM 0x08
#define PWM1_URS 0x04
#define PWM1_UDIS 0x02
#define PWM1_CEN 0x01
#define PWM1_CR2 (*(unsigned char volatile __xdata *)0xfec1)
#define PWM1_TI1S 0x80
#define PWM1_MMS0 0x00
#define PWM1_MMS1 0x10
#define PWM1_MMS2 0x20
#define PWM1_MMS3 0x30
#define PWM1_MMS4 0x40
#define PWM1_MMS5 0x50
#define PWM1_MMS6 0x60
#define PWM1_MMS7 0x70
#define PWM1_COMS 0x04
#define PWM1_CCPS 0x01
#define PWM1_SMCR (*(unsigned char volatile __xdata *)0xfec2)
#define PWM1_MSM 0x80
#define PWM1_TS0 0x00
#define PWM1_TS1 0x10
#define PWM1_TS2 0x20
#define PWM1_TS3 0x30
#define PWM1_TS4 0x40
#define PWM1_TS5 0x50
#define PWM1_TS6 0x60
#define PWM1_TS7 0x70
#define PWM1_SMS0 0x00
#define PWM1_SMS1 0x01
#define PWM1_SMS2 0x02
#define PWM1_SMS3 0x03
#define PWM1_SMS4 0x04
#define PWM1_SMS5 0x05
#define PWM1_SMS6 0x06
#define PWM1_SMS7 0x07
#define PWM1_ETR (*(unsigned char volatile __xdata *)0xfec3)
#define PWM1_ETP 0x80
#define PWM1_ECE 0x40
#define PWM1_ETPS0 0x00
#define PWM1_ETPS1 0x10
#define PWM1_ETPS2 0x20
#define PWM1_ETPS3 0x30
#define PWM1_IER (*(unsigned char volatile __xdata *)0xfec4)
#define PWM1_BIE 0x80
#define PWM1_TIE 0x40
#define PWM1_COMIE 0x20
#define PWM1_CC4IE 0x10
#define PWM1_CC3IE 0x08
#define PWM1_CC2IE 0x04
#define PWM1_CC1IE 0x02
#define PWM1_UIE 0x01
#define PWM1_SR1 (*(unsigned char volatile __xdata *)0xfec5)
#define PWM1_BIF 0x80
#define PWM1_TIF 0x40
#define PWM1_COMIF 0x20
#define PWM1_CC4IF 0x10
#define PWM1_CC3IF 0x08
#define PWM1_CC2IF 0x04
#define PWM1_CC1IF 0x02
#define PWM1_UIF 0x01
#define PWM1_SR2 (*(unsigned char volatile __xdata *)0xfec6)
#define PWM1_CC4OF 0x10
#define PWM1_CC3OF 0x08
#define PWM1_CC2OF 0x04
#define PWM1_CC1OF 0x02
#define PWM1_EGR (*(unsigned char volatile __xdata *)0xfec7)
#define PWM1_BG 0x80
#define PWM1_TG 0x40
#define PWM1_COMG 0x20
#define PWM1_CC4G 0x10
#define PWM1_CC3G 0x08
#define PWM1_CC2G 0x04
#define PWM1_CC1G 0x02
#define PWM1_UG 0x01
#define PWM1_CCMR1 (*(unsigned char volatile __xdata *)0xfec8)
#define PWM1_OC1CE 0x80
#define PWM1_OC1M0 0x00
#define PWM1_OC1M1 0x10
#define PWM1_OC1M2 0x20
#define PWM1_OC1M3 0x30
#define PWM1_OC1M4 0x40
#define PWM1_OC1M5 0x50
#define PWM1_OC1M6 0x60
#define PWM1_OC1M7 0x70
#define PWM1_OC1PE 0x08
#define PWM1_OC1FE 0x04
#define PWM1_CC1S0 0x00
#define PWM1_CC1S1 0x01
#define PWM1_CC1S2 0x02
#define PWM1_CC1S3 0x03
#define PWM1_IC1F0 0x00
#define PWM1_IC1F1 0x01
#define PWM1_IC1F2 0x02
#define PWM1_IC1F3 0x03
#define PWM1_IC1F4 0x04
#define PWM1_IC1F5 0x05
#define PWM1_IC1F6 0x06
#define PWM1_IC1F7 0x07
#define PWM1_IC1F8 0x08
#define PWM1_IC1F9 0x09
#define PWM1_IC1F10 0x0a
#define PWM1_IC1F11 0x0b
#define PWM1_IC1F12 0x0c
#define PWM1_IC1F13 0x0d
#define PWM1_IC1F14 0x0e
#define PWM1_IC1F15 0x0f
#define PWM1_CCMR2 (*(unsigned char volatile __xdata *)0xfec9)
#define PWM1_OC2CE 0x80
#define PWM1_OC2M0 0x00
#define PWM1_OC2M1 0x10
#define PWM1_OC2M2 0x20
#define PWM1_OC2M3 0x30
#define PWM1_OC2M4 0x40
#define PWM1_OC2M5 0x50
#define PWM1_OC2M6 0x60
#define PWM1_OC2M7 0x70
#define PWM1_OC2PE 0x08
#define PWM1_OC2FE 0x04
#define PWM1_CC2S0 0x00
#define PWM1_CC2S1 0x01
#define PWM1_CC2S2 0x02
#define PWM1_CC2S3 0x03
#define PWM1_IC2F0 0x00
#define PWM1_IC2F1 0x01
#define PWM1_IC2F2 0x02
#define PWM1_IC2F3 0x03
#define PWM1_IC2F4 0x04
#define PWM1_IC2F5 0x05
#define PWM1_IC2F6 0x06
#define PWM1_IC2F7 0x07
#define PWM1_IC2F8 0x08
#define PWM1_IC2F9 0x09
#define PWM1_IC2F10 0x0a
#define PWM1_IC2F11 0x0b
#define PWM1_IC2F12 0x0c
#define PWM1_IC2F13 0x0d
#define PWM1_IC2F14 0x0e
#define PWM1_IC2F15 0x0f
#define PWM1_CCMR3 (*(unsigned char volatile __xdata *)0xfeca)
#define PWM1_OC3CE 0x80
#define PWM1_OC3M0 0x00
#define PWM1_OC3M1 0x10
#define PWM1_OC3M2 0x20
#define PWM1_OC3M3 0x30
#define PWM1_OC3M4 0x40
#define PWM1_OC3M5 0x50
#define PWM1_OC3M6 0x60
#define PWM1_OC3M7 0x70
#define PWM1_OC3PE 0x08
#define PWM1_OC3FE 0x04
#define PWM1_CC3S0 0x00
#define PWM1_CC3S1 0x01
#define PWM1_CC3S2 0x02
#define PWM1_CC3S3 0x03
#define PWM1_IC3F0 0x00
#define PWM1_IC3F1 0x01
#define PWM1_IC3F2 0x02
#define PWM1_IC3F3 0x03
#define PWM1_IC3F4 0x04
#define PWM1_IC3F5 0x05
#define PWM1_IC3F6 0x06
#define PWM1_IC3F7 0x07
#define PWM1_IC3F8 0x08
#define PWM1_IC3F9 0x09
#define PWM1_IC3F10 0x0a
#define PWM1_IC3F11 0x0b
#define PWM1_IC3F12 0x0c
#define PWM1_IC3F13 0x0d
#define PWM1_IC3F14 0x0e
#define PWM1_IC3F15 0x0f
#define PWM1_CCMR4 (*(unsigned char volatile __xdata *)0xfecb)
#define PWM1_OC4CE 0x80
#define PWM1_OC4M0 0x00
#define PWM1_OC4M1 0x10
#define PWM1_OC4M2 0x20
#define PWM1_OC4M3 0x30
#define PWM1_OC4M4 0x40
#define PWM1_OC4M5 0x50
#define PWM1_OC4M6 0x60
#define PWM1_OC4M7 0x70
#define PWM1_OC4PE 0x08
#define PWM1_OC4FE 0x04
#define PWM1_CC4S0 0x00
#define PWM1_CC4S1 0x01
#define PWM1_CC4S2 0x02
#define PWM1_CC4S3 0x03
#define PWM1_IC4F0 0x00
#define PWM1_IC4F1 0x01
#define PWM1_IC4F2 0x02
#define PWM1_IC4F3 0x03
#define PWM1_IC4F4 0x04
#define PWM1_IC4F5 0x05
#define PWM1_IC4F6 0x06
#define PWM1_IC4F7 0x07
#define PWM1_IC4F8 0x08
#define PWM1_IC4F9 0x09
#define PWM1_IC4F10 0x0a
#define PWM1_IC4F11 0x0b
#define PWM1_IC4F12 0x0c
#define PWM1_IC4F13 0x0d
#define PWM1_IC4F14 0x0e
#define PWM1_IC4F15 0x0f
#define PWM1_CCER1 (*(unsigned char volatile __xdata *)0xfecc)
#define PWM1_CC2NP 0x80
#define PWM1_CC2NE 0x40
#define PWM1_CC2P 0x20
#define PWM1_CC2E 0x10
#define PWM1_CC1NP 0x08
#define PWM1_CC1NE 0x04
#define PWM1_CC1P 0x02
#define PWM1_CC1E 0x01
#define PWM1_CCER2 (*(unsigned char volatile __xdata *)0xfecd)
#define PWM1_CC4NP 0x80
#define PWM1_CC4NE 0x40
#define PWM1_CC4P 0x20
#define PWM1_CC4E 0x10
#define PWM1_CC3NP 0x08
#define PWM1_CC3NE 0x04
#define PWM1_CC3P 0x02
#define PWM1_CC3E 0x01
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
#define PWM1_MOE 0x80
#define PWM1_AOE 0x40
#define PWM1_BKP 0x20
#define PWM1_BKE 0x10
#define PWM1_OSSR 0x08
#define PWM1_OSSI 0x04
#define PWM1_LOCK0 0x00
#define PWM1_LOCK1 0x01
#define PWM1_LOCK2 0x02
#define PWM1_LOCK3 0x03
#define PWM1_DTR (*(unsigned char volatile __xdata *)0xfede)
#define PWM1_OISR (*(unsigned char volatile __xdata *)0xfedf)
#define PWM1_OIS4N 0x80
#define PWM1_OIS4 0x40
#define PWM1_OIS3N 0x20
#define PWM1_OIS3 0x10
#define PWM1_OIS2N 0x08
#define PWM1_OIS2 0x04
#define PWM1_OIS1N 0x02
#define PWM1_OIS1 0x01
#define PWM2_CR1 (*(unsigned char volatile __xdata *)0xfee0)
#define PWM2_ARPE 0x80
#define PWM2_CMS0 0x00
#define PWM2_CMS1 0x20
#define PWM2_CMS2 0x40
#define PWM2_CMS3 0x60
#define PWM2_UP 0x00
#define PWM2_DOWN 0x10
#define PWM2_OPM 0x08
#define PWM2_URS 0x04
#define PWM2_UDIS 0x02
#define PWM2_CEN 0x01
#define PWM2_CR2 (*(unsigned char volatile __xdata *)0xfee1)
#define PWM2_TI2S 0x80
#define PWM2_MMS0 0x00
#define PWM2_MMS1 0x10
#define PWM2_MMS2 0x20
#define PWM2_MMS3 0x30
#define PWM2_MMS4 0x40
#define PWM2_MMS5 0x50
#define PWM2_MMS6 0x60
#define PWM2_MMS7 0x70
#define PWM2_COMS 0x04
#define PWM2_CCPS 0x01
#define PWM2_SMCR (*(unsigned char volatile __xdata *)0xfee2)
#define PWM2_MSM 0x80
#define PWM2_TS0 0x00
#define PWM2_TS1 0x10
#define PWM2_TS2 0x20
#define PWM2_TS3 0x30
#define PWM2_TS4 0x40
#define PWM2_TS5 0x50
#define PWM2_TS6 0x60
#define PWM2_TS7 0x70
#define PWM2_SMS0 0x00
#define PWM2_SMS1 0x01
#define PWM2_SMS2 0x02
#define PWM2_SMS3 0x03
#define PWM2_SMS4 0x04
#define PWM2_SMS5 0x05
#define PWM2_SMS6 0x06
#define PWM2_SMS7 0x07
#define PWM2_ETR (*(unsigned char volatile __xdata *)0xfee3)
#define PWM2_ETP 0x80
#define PWM2_ECE 0x40
#define PWM2_ETPS0 0x00
#define PWM2_ETPS1 0x10
#define PWM2_ETPS2 0x20
#define PWM2_ETPS3 0x30
#define PWM2_IER (*(unsigned char volatile __xdata *)0xfee4)
#define PWM2_BIE 0x80
#define PWM2_TIE 0x40
#define PWM2_COMIE 0x20
#define PWM2_CC8IE 0x10
#define PWM2_CC7IE 0x08
#define PWM2_CC6IE 0x04
#define PWM2_CC5IE 0x02
#define PWM2_UIE 0x01
#define PWM2_SR1 (*(unsigned char volatile __xdata *)0xfee5)
#define PWM2_BIF 0x80
#define PWM2_TIF 0x40
#define PWM2_COMIF 0x20
#define PWM2_CC8IF 0x10
#define PWM2_CC7IF 0x08
#define PWM2_CC6IF 0x04
#define PWM2_CC5IF 0x02
#define PWM2_UIF 0x01
#define PWM2_SR2 (*(unsigned char volatile __xdata *)0xfee6)
#define PWM2_CC8OF 0x10
#define PWM2_CC7OF 0x08
#define PWM2_CC6OF 0x04
#define PWM2_CC5OF 0x02
#define PWM2_EGR (*(unsigned char volatile __xdata *)0xfee7)
#define PWM2_BG 0x80
#define PWM2_TG 0x40
#define PWM2_COMG 0x20
#define PWM2_CC8G 0x10
#define PWM2_CC7G 0x08
#define PWM2_CC6G 0x04
#define PWM2_CC5G 0x02
#define PWM2_UG 0x01
#define PWM2_CCMR1 (*(unsigned char volatile __xdata *)0xfee8)
#define PWM2_OC5CE 0x80
#define PWM2_OC5M0 0x00
#define PWM2_OC5M1 0x10
#define PWM2_OC5M2 0x20
#define PWM2_OC5M3 0x30
#define PWM2_OC5M4 0x40
#define PWM2_OC5M5 0x50
#define PWM2_OC5M6 0x60
#define PWM2_OC5M7 0x70
#define PWM2_OC5PE 0x08
#define PWM2_OC5FE 0x04
#define PWM2_CC5S0 0x00
#define PWM2_CC5S1 0x01
#define PWM2_CC5S2 0x02
#define PWM2_CC5S3 0x03
#define PWM2_IC5F0 0x00
#define PWM2_IC5F1 0x01
#define PWM2_IC5F2 0x02
#define PWM2_IC5F3 0x03
#define PWM2_IC5F4 0x04
#define PWM2_IC5F5 0x05
#define PWM2_IC5F6 0x06
#define PWM2_IC5F7 0x07
#define PWM2_IC5F8 0x08
#define PWM2_IC5F9 0x09
#define PWM2_IC5F10 0x0a
#define PWM2_IC5F11 0x0b
#define PWM2_IC5F12 0x0c
#define PWM2_IC5F13 0x0d
#define PWM2_IC5F14 0x0e
#define PWM2_IC5F15 0x0f
#define PWM2_CCMR2 (*(unsigned char volatile __xdata *)0xfee9)
#define PWM2_OC6CE 0x80
#define PWM2_OC6M0 0x00
#define PWM2_OC6M1 0x10
#define PWM2_OC6M2 0x20
#define PWM2_OC6M3 0x30
#define PWM2_OC6M4 0x40
#define PWM2_OC6M5 0x50
#define PWM2_OC6M6 0x60
#define PWM2_OC6M7 0x70
#define PWM2_OC6PE 0x08
#define PWM2_OC6FE 0x04
#define PWM2_CC6S0 0x00
#define PWM2_CC6S1 0x01
#define PWM2_CC6S2 0x02
#define PWM2_CC6S3 0x03
#define PWM2_IC6F0 0x00
#define PWM2_IC6F1 0x01
#define PWM2_IC6F2 0x02
#define PWM2_IC6F3 0x03
#define PWM2_IC6F4 0x04
#define PWM2_IC6F5 0x05
#define PWM2_IC6F6 0x06
#define PWM2_IC6F7 0x07
#define PWM2_IC6F8 0x08
#define PWM2_IC6F9 0x09
#define PWM2_IC6F10 0x0a
#define PWM2_IC6F11 0x0b
#define PWM2_IC6F12 0x0c
#define PWM2_IC6F13 0x0d
#define PWM2_IC6F14 0x0e
#define PWM2_IC6F15 0x0f
#define PWM2_CCMR3 (*(unsigned char volatile __xdata *)0xfeea)
#define PWM2_OC7CE 0x80
#define PWM2_OC7M0 0x00
#define PWM2_OC7M1 0x10
#define PWM2_OC7M2 0x20
#define PWM2_OC7M3 0x30
#define PWM2_OC7M4 0x40
#define PWM2_OC7M5 0x50
#define PWM2_OC7M6 0x60
#define PWM2_OC7M7 0x70
#define PWM2_OC7PE 0x08
#define PWM2_OC7FE 0x04
#define PWM2_CC7S0 0x00
#define PWM2_CC7S1 0x01
#define PWM2_CC7S2 0x02
#define PWM2_CC7S3 0x03
#define PWM2_IC7F0 0x00
#define PWM2_IC7F1 0x01
#define PWM2_IC7F2 0x02
#define PWM2_IC7F3 0x03
#define PWM2_IC7F4 0x04
#define PWM2_IC7F5 0x05
#define PWM2_IC7F6 0x06
#define PWM2_IC7F7 0x07
#define PWM2_IC7F8 0x08
#define PWM2_IC7F9 0x09
#define PWM2_IC7F10 0x0a
#define PWM2_IC7F11 0x0b
#define PWM2_IC7F12 0x0c
#define PWM2_IC7F13 0x0d
#define PWM2_IC7F14 0x0e
#define PWM2_IC7F15 0x0f
#define PWM2_CCMR4 (*(unsigned char volatile __xdata *)0xfeeb)
#define PWM2_OC8CE 0x80
#define PWM2_OC8M0 0x00
#define PWM2_OC8M1 0x10
#define PWM2_OC8M2 0x20
#define PWM2_OC8M3 0x30
#define PWM2_OC8M4 0x40
#define PWM2_OC8M5 0x50
#define PWM2_OC8M6 0x60
#define PWM2_OC8M7 0x70
#define PWM2_OC8PE 0x08
#define PWM2_OC8FE 0x04
#define PWM2_CC8S0 0x00
#define PWM2_CC8S1 0x01
#define PWM2_CC8S2 0x02
#define PWM2_CC8S3 0x03
#define PWM2_IC8F0 0x00
#define PWM2_IC8F1 0x01
#define PWM2_IC8F2 0x02
#define PWM2_IC8F3 0x03
#define PWM2_IC8F4 0x04
#define PWM2_IC8F5 0x05
#define PWM2_IC8F6 0x06
#define PWM2_IC8F7 0x07
#define PWM2_IC8F8 0x08
#define PWM2_IC8F9 0x09
#define PWM2_IC8F10 0x0a
#define PWM2_IC8F11 0x0b
#define PWM2_IC8F12 0x0c
#define PWM2_IC8F13 0x0d
#define PWM2_IC8F14 0x0e
#define PWM2_IC8F15 0x0f
#define PWM2_CCER1 (*(unsigned char volatile __xdata *)0xfeec)
#define PWM2_CC6P 0x20
#define PWM2_CC6E 0x10
#define PWM2_CC5P 0x02
#define PWM2_CC5E 0x01
#define PWM2_CCER2 (*(unsigned char volatile __xdata *)0xfeed)
#define PWM2_CC8P 0x20
#define PWM2_CC8E 0x10
#define PWM2_CC7P 0x02
#define PWM2_CC7E 0x01
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
#define PWM2_MOE 0x80
#define PWM2_AOE 0x40
#define PWM2_BKP 0x20
#define PWM2_BKE 0x10
#define PWM2_OSSR 0x08
#define PWM2_OSSI 0x04
#define PWM2_LOCK0 0x00
#define PWM2_LOCK1 0x01
#define PWM2_LOCK2 0x02
#define PWM2_LOCK3 0x03
#define PWM2_DTR (*(unsigned char volatile __xdata *)0xfefe)
#define PWM2_OISR (*(unsigned char volatile __xdata *)0xfeff)
#define PWM2_OIS8 0x40
#define PWM2_OIS7 0x10
#define PWM2_OIS6 0x04
#define PWM2_OIS5 0x01

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

typedef struct TAG_PWM_STRUCT
{
    unsigned char CR1;
    unsigned char CR2;
    unsigned char SMCR;
    unsigned char ETR;
    unsigned char IER;
    unsigned char SR1;
    unsigned char SR2;
    unsigned char EGR;
    unsigned char CCMR1;
    unsigned char CCMR2;
    unsigned char CCMR3;
    unsigned char CCMR4;
    unsigned char CCER1;
    unsigned char CCER2;
    unsigned int CNTR;
    unsigned int PSCR;
    unsigned int ARR;
    unsigned char RCR;
    unsigned int CCR1;
    unsigned int CCR2;
    unsigned int CCR3;
    unsigned int CCR4;
    unsigned char BKR;
    unsigned char DTR;
    unsigned char OISR;
} PWM_STRUCT;

#define PWM1 ((PWM_STRUCT volatile __xdata *)0xfec0)
#define PWM2 ((PWM_STRUCT volatile __xdata *)0xfee0)

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
#define INT4_VECTOR 16//0083H
#define UART3_VECTOR 17//008BH
#define UART4_VECTOR 18//0093H
#define TMR3_VECTOR 19//009BH
#define TMR4_VECTOR 20//00A3H
#define CMP_VECTOR 21//00ABH
#define I2C_VECTOR 24//00C3H
#define PWM1_VECTOR 26//00D3H
#define PWM2_VECTOR 27//00DBH
#define P0INT_VECTOR 37//011B
#define P1INT_VECTOR 38//0123
#define P2INT_VECTOR 39//012B
#define P3INT_VECTOR 40//0133
#define P4INT_VECTOR 41//013B
#define P5INT_VECTOR 42//0143
#define P6INT_VECTOR 43//014B
#define P7INT_VECTOR 44//0153
#define P8INT_VECTOR 45//015B
#define P9INT_VECTOR 46//0163

/////////////////////////////////////////////////

#endif

