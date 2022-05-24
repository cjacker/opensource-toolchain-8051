/*--------------------------------------------------------------------------
N76E616.H

Header file for Nuvoton N76E616
--------------------------------------------------------------------------*/
/*  BYTE Registers  */
__sfr __at (0x80) P0;
__sfr __at (0x81) SP;
__sfr __at (0x82) DPL;
__sfr __at (0x83) DPH;
__sfr __at (0x86) RWK;
__sfr __at (0x87) PCON;

__sfr __at (0x88) TCON;
__sfr __at (0x89) TMOD;
__sfr __at (0x8A) TL0;
__sfr __at (0x8B) TL1;
__sfr __at (0x8C) TH0;
__sfr __at (0x8D) TH1;
__sfr __at (0x8E) CKCON;
__sfr __at (0x8F) WKCON;

__sfr __at (0x90) P1;
__sfr __at (0x95) CKDIV;
__sfr __at (0x96) CKSWT;
__sfr __at (0x97) CKEN;

__sfr __at (0x98) SCON;
__sfr __at (0x99) SBUF;
__sfr __at (0x9A) SBUF_1;
__sfr __at (0x9B) EIE;
__sfr __at (0x9C) EIE1;
__sfr __at (0x9F) CHPCON;

__sfr __at (0xA0) P2;
__sfr __at (0xA2) AUXR1;
__sfr __at (0xA3) BODCON0;
__sfr __at (0xA4) IAPTRG;
__sfr __at (0xA5) IAPUEN;
__sfr __at (0xA6) IAPAL;
__sfr __at (0xA7) IAPAH;

__sfr __at (0xA8) IE;
__sfr __at (0xA9) SADDR;
__sfr __at (0xAA) WDCON;
__sfr __at (0xAB) BODCON1;
__sfr __at (0xAC) P3M1;
__sfr __at (0xAC) P3S;
__sfr __at (0xAD) P3M2;
__sfr __at (0xAE) IAPFD;
__sfr __at (0xAF) IAPCN;

__sfr __at (0xB0) P3;
__sfr __at (0xB1) P0M1;
__sfr __at (0xB1) P0S;
__sfr __at (0xB2) P0M2;
__sfr __at (0xB3) P1M1;
__sfr __at (0xB3) P1S;
__sfr __at (0xB4) P1M2;
__sfr __at (0xB5) P2M1;
__sfr __at (0xB5) P2S;
__sfr __at (0xB6) P2M2;
__sfr __at (0xB7) IPH;

__sfr __at (0xB8) IP;
__sfr __at (0xB9) SADEN;
__sfr __at (0xBA) SADEN_1;
__sfr __at (0xBB) SADDR_1;
__sfr __at (0xBC) I2DAT;
__sfr __at (0xBD) I2STAT;
__sfr __at (0xBE) I2CLK;
__sfr __at (0xBF) I2TOC;

__sfr __at (0xC0) I2CON;
__sfr __at (0xC1) I2ADDR;
__sfr __at (0xC2) ADCRL;
__sfr __at (0xC3) ADCRH;
__sfr __at (0xC4) T3CON;
__sfr __at (0xC5) R3L;
__sfr __at (0xC6) R3H;
__sfr __at (0xC7) TA;

__sfr __at (0xC8) T2CON;
__sfr __at (0xC9) T2MOD0;
__sfr __at (0xCA) T2MOD1;
__sfr __at (0xCB) T2OE;
__sfr __at (0xCC) R2AL;
__sfr __at (0xCD) R2AH;
__sfr __at (0xCE) R2BL;
__sfr __at (0xCF) R2BH;

__sfr __at (0xD0) PSW;
__sfr __at (0xD4) R2CL;
__sfr __at (0xD5) R2CH;
__sfr __at (0xD6) R2DL;
__sfr __at (0xD7) R2DH;

__sfr __at (0xD8) P5;
__sfr __at (0xD9) P4;
__sfr __at (0xDA) P4M1;
__sfr __at (0xDA) P4S;
__sfr __at (0xDB) P4M2;
__sfr __at (0xDC) P5M1;
__sfr __at (0xDC) P5S;
__sfr __at (0xDD) P5M2;

__sfr __at (0xE0) ACC;
__sfr __at (0xE1) ADCCON1;
__sfr __at (0xE2) ADCCON2;
__sfr __at (0xE3) ADCMPL;
__sfr __at (0xE4) ADCMPH;
__sfr __at (0xE5) LCDSEG0;
__sfr __at (0xE6) LCDSEG1;
__sfr __at (0xE7) LCDSEG2;

__sfr __at (0xE8) ADCCON0;
__sfr __at (0xE9) PICON;
__sfr __at (0xEA) PINEN;
__sfr __at (0xEB) PIPEN;
__sfr __at (0xEC) PIF;
__sfr __at (0xED) PITYP;
__sfr __at (0xEE) LCDSEG3;
__sfr __at (0xEF) EIP;

__sfr __at (0xF0) B;
__sfr __at (0xF2) ADCAQT;
__sfr __at (0xF6) P0DIDS;
__sfr __at (0xF7) EIPH;

__sfr __at (0xF8) SCON_1;
__sfr __at (0xF9) LCDCON;
__sfr __at (0xFA) LCDCLK;
__sfr __at (0xFB) LCDPTR;
__sfr __at (0xFC) LCDDAT;
__sfr __at (0xFE) EIP1;
__sfr __at (0xFF) EIPH1;

/*  BIT Registers  */
/*  TCON  */
__sbit __at (0x88+7) TF1;
__sbit __at (0x88+6) TR1;
__sbit __at (0x88+5) TF0;
__sbit __at (0x88+4) TR0;
__sbit __at (0x88+3) IE1;
__sbit __at (0x88+2) IT1;
__sbit __at (0x88+1) IE0;
__sbit __at (0x88+0) IT0;

/*  SCON  */
__sbit __at (0x98+7) SM0;
__sbit __at (0x98+7) FE;
__sbit __at (0x98+6) SM1;
__sbit __at (0x98+5) SM2;
__sbit __at (0x98+4) REN;
__sbit __at (0x98+3) TB8;
__sbit __at (0x98+2) RB8;
__sbit __at (0x98+1) TI;
__sbit __at (0x98+0) RI;

/*  IE  */
__sbit __at (0xA8+7) EA;
__sbit __at (0xA8+6) EADC;
__sbit __at (0xA8+5) EBOD;
__sbit __at (0xA8+4) ES;
__sbit __at (0xA8+3) ET1;
__sbit __at (0xA8+2) EX1;
__sbit __at (0xA8+1) ET0;
__sbit __at (0xA8+0) EX0;

/*  IP  */  
__sbit __at (0xB8+6) PADC;
__sbit __at (0xB8+5) PBOD;
__sbit __at (0xB8+4) PS;
__sbit __at (0xB8+3) PT1;
__sbit __at (0xB8+2) PX1;
__sbit __at (0xB8+1) PT0;
__sbit __at (0xB8+0) PX0;

/*  I2CON  */
__sbit __at (0xC0+6) I2CEN;
__sbit __at (0xC0+5) STA;
__sbit __at (0xC0+4) STO;
__sbit __at (0xC0+3) SI;
__sbit __at (0xC0+2) AA;

/*  T2CON  */
__sbit __at (0xC8+7) TF2D;
__sbit __at (0xC8+6) TF2C;
__sbit __at (0xC8+5) TF2B;
__sbit __at (0xC8+4) TF2A;
__sbit __at (0xC8+3) TR2D;
__sbit __at (0xC8+2) TR2C;
__sbit __at (0xC8+1) TR2B;
__sbit __at (0xC8+0) TR2A;

/*  PSW */
__sbit __at (0xD0+7) CY;
__sbit __at (0xD0+6) AC;
__sbit __at (0xD0+5) F0;
__sbit __at (0xD0+4) RS1;
__sbit __at (0xD0+3) RS0;
__sbit __at (0xD0+2) OV;
__sbit __at (0xD0+0) P;

/*  ADCCON0  */
__sbit __at (0xE8+7) ADCF;
__sbit __at (0xE8+6) ADCS;
__sbit __at (0xE8+3) ADCHS3;
__sbit __at (0xE8+2) ADCHS2;
__sbit __at (0xE8+1) ADCHS1;
__sbit __at (0xE8+0) ADCHS0;

/*  SCON_1  */
__sbit __at (0xF8+7) SM0_1;
__sbit __at (0xF8+7) FE_1;
__sbit __at (0xF8+6) SM1_1;
__sbit __at (0xF8+5) SM2_1;
__sbit __at (0xF8+4) REN_1;
__sbit __at (0xF8+3) TB8_1;
__sbit __at (0xF8+2) RB8_1;
__sbit __at (0xF8+1) TI_1;
__sbit __at (0xF8+0) RI_1;
 

/*  P0  */  
__sbit __at (0x80+0) P00;
__sbit __at (0x80+0) AIN0;
__sbit __at (0x80+0) T0;
__sbit __at (0x80+1) P01;
__sbit __at (0x80+1) AIN1;
__sbit __at (0x80+1) INT0;
__sbit __at (0x80+2) P02;
__sbit __at (0x80+2) AIN2;
__sbit __at (0x80+3) P03;
__sbit __at (0x80+3) AIN3;
__sbit __at (0x80+4) P04;
__sbit __at (0x80+4) AIN4;
__sbit __at (0x80+5) P05;
__sbit __at (0x80+5) AIN5;
__sbit __at (0x80+6) P06;
__sbit __at (0x80+6) AIN6;
__sbit __at (0x80+7) P07;
__sbit __at (0x80+7) AIN7;
__sbit __at (0x80+7) CLO;
                
/*  P1  */                      
__sbit __at (0x90+0) P10;
__sbit __at (0x90+1) P11;
__sbit __at (0x90+2) P12;
__sbit __at (0x90+3) P13;
__sbit __at (0x90+3) INT1;
__sbit __at (0x90+4) P14;
__sbit __at (0x90+4) T1;
__sbit __at (0x90+5) P15;
__sbit __at (0x90+5) T2AO1;
__sbit __at (0x90+6) P16;
__sbit __at (0x90+6) T2AO2;
__sbit __at (0x90+7) P17;
__sbit __at (0x90+7) T2BO1;

/*  P2  */ 
__sbit __at (0xA0+0) P20;
__sbit __at (0xA0+0) T2BO2;
__sbit __at (0xA0+1) P21;
__sbit __at (0xA0+1) RXD;
__sbit __at (0xA0+2) P22;
__sbit __at (0xA0+2) TXD;
__sbit __at (0xA0+3) P23;
__sbit __at (0xA0+3) SDA;
__sbit __at (0xA0+4) P24;
__sbit __at (0xA0+4) SCL;
__sbit __at (0xA0+5) P25;
__sbit __at (0xA0+6) P26;
__sbit __at (0xA0+6) T2CO1;
__sbit __at (0xA0+7) P27;
__sbit __at (0xA0+7) T2CO2;

/*  P3  */  
__sbit __at (0xB0+0) P30;
__sbit __at (0xB0+0) T2DO1;
__sbit __at (0xB0+1) P31;
__sbit __at (0xB0+1) T2DO2;
__sbit __at (0xB0+2) P32;
__sbit __at (0xB0+3) P33;
__sbit __at (0xB0+4) P34;
__sbit __at (0xB0+5) P35;
__sbit __at (0xB0+6) P36;
__sbit __at (0xB0+7) P37;

/*  P5  */  
__sbit __at (0xD8+0) P50;
__sbit __at (0xD8+0) STADC;
__sbit __at (0xD8+1) P51;
__sbit __at (0xD8+2) P52;
__sbit __at (0xD8+3) P53;
__sbit __at (0xD8+4) P54;
__sbit __at (0xD8+5) P55;
__sbit __at (0xD8+6) P56;
__sbit __at (0xD8+6) RXD_1;
__sbit __at (0xD8+7) P57;
__sbit __at (0xD8+7) TXD_1;
