/*--------------------------------------------------------------------------
Registers definition for Dallas Semiconductors DS89C420/430/440/450
-------------------------------------------------------------------------- */

/* Byte Addresses */
__sfr __at (0x80) P0;
__sfr __at (0x81) SP;
__sfr __at (0x82) DPL;
__sfr __at (0x83) DPH;
__sfr __at (0x84) DPL1;
__sfr __at (0x85) DPH1;
__sfr __at (0x86) DPS;
__sfr __at (0x87) PCON;
__sfr __at (0x88) TCON;
__sfr __at (0x89) TMOD;
__sfr __at (0x8A) TL0;
__sfr __at (0x8B) TL1;
__sfr __at (0x8C) TH0;
__sfr __at (0x8D) TH1;
__sfr __at (0x8E) CKCON;
__sfr __at (0x90) P1;
__sfr __at (0x91) EXIF;
__sfr __at (0x96) CKMOD;
__sfr __at (0x98) SCON0;
__sfr __at (0x99) SBUF0;
__sfr __at (0x9D) ACON;
__sfr __at (0xA0) P2;
__sfr __at (0xA8) IE;
__sfr __at (0xA9) SADDR0;
__sfr __at (0xAA) SADDR1;
__sfr __at (0xB0) P3;
__sfr __at (0xB1) IP1;
__sfr __at (0xB8) IP0;
__sfr __at (0xB9) SADEN0;
__sfr __at (0xBA) SADEN1;
__sfr __at (0xC0) SCON1;
__sfr __at (0xC1) SBUF1;
__sfr __at (0xC2) ROMSIZE;
__sfr __at (0xC4) PMR;
__sfr __at (0xC5) STATUS;
__sfr __at (0xC7) TA;
__sfr __at (0xC8) T2CON;
__sfr __at (0xC9) T2MOD;
__sfr __at (0xCA) RCAP2L;
__sfr __at (0xCB) RCAP2H;
__sfr __at (0xCC) TL2;
__sfr __at (0xCD) TH2;
__sfr __at (0xD0) PSW;
__sfr __at (0xD5) FCNTL;
__sfr __at (0xD6) FDATA;
__sfr __at (0xD8) WDCON;
__sfr __at (0xE0) ACC;
__sfr __at (0xE8) EIE;
__sfr __at (0xF0) B;
__sfr __at (0xF1) EIP1;
__sfr __at (0xF8) EIP0;

/* Bit Addresses */

/* TCON */
__sbit __at (0x88+0) IT0;
__sbit __at (0x88+1) IE0;
__sbit __at (0x88+2) IT1;
__sbit __at (0x88+3) IE1;
__sbit __at (0x88+4) TR0;
__sbit __at (0x88+5) TF0;
__sbit __at (0x88+6) TR1;
__sbit __at (0x88+7) TF1;

/* SCON0 */
__sbit __at (0x98+0) RI_0;
__sbit __at (0x98+1) TI_0;
__sbit __at (0x98+2) RB8_0;
__sbit __at (0x98+3) TB8_0;
__sbit __at (0x98+4) REN_0;
__sbit __at (0x98+5) SM2_0;
__sbit __at (0x98+6) SM1_0;
__sbit __at (0x98+7) FE_0;

/* IE */
__sbit __at (0xA8+0) EX0;
__sbit __at (0xA8+1) ET0;
__sbit __at (0xA8+2) EX1;
__sbit __at (0xA8+3) ET1;
__sbit __at (0xA8+4) ES0;
__sbit __at (0xA8+5) ET2;
__sbit __at (0xA8+6) ES1;
__sbit __at (0xA8+7) EA;

/* IP0 */
__sbit __at (0xB8+0) PX0;
__sbit __at (0xB8+1) PT0;
__sbit __at (0xB8+2) PX1;
__sbit __at (0xB8+3) PT1;
__sbit __at (0xB8+4) PS;

/* SCON1 */
__sbit __at (0xC0+0) RI_1;
__sbit __at (0xC0+1) TI_1;
__sbit __at (0xC0+2) RB8_1;
__sbit __at (0xC0+3) TB8_1;
__sbit __at (0xC0+4) REN_1;
__sbit __at (0xC0+5) SM2_1;
__sbit __at (0xC0+6) SM1_1;
__sbit __at (0xC0+7) FE_1;

/* T2CON */
__sbit __at (0xC8+0) CP;

__sbit __at (0xC8+2) TR2;
__sbit __at (0xC8+3) EXEN2;
__sbit __at (0xC8+4) TCLK;
__sbit __at (0xC8+5) RCLK;
__sbit __at (0xC8+6) EXF2;
__sbit __at (0xC8+7) TF2;

/* PSW */
__sbit __at (0xD0+0) P;
__sbit __at (0xD0+1) F1;
__sbit __at (0xD0+2) OV;
__sbit __at (0xD0+3) RS0;
__sbit __at (0xD0+4) RS1;
__sbit __at (0xD0+5) F0;
__sbit __at (0xD0+6) AC;
__sbit __at (0xD0+7) CY;

/* WDCON */
__sbit __at (0xD8+0) RWT;
__sbit __at (0xD8+1) EWT;
__sbit __at (0xD8+2) WTRF;
__sbit __at (0xD8+3) WDIF;
__sbit __at (0xD8+4) PFI;
__sbit __at (0xD8+5) EPFI;
__sbit __at (0xD8+6) POR;
__sbit __at (0xD8+7) SMOD_1;

/* EIE */
__sbit __at (0xE8+0) EX2;
__sbit __at (0xE8+1) EX3;
__sbit __at (0xE8+2) EX4;
__sbit __at (0xE8+3) EX5;
__sbit __at (0xE8+4) EWDI;

/* EIP0 */
__sbit __at (0xF8+0) LPX2;
__sbit __at (0xF8+1) LPX3;
__sbit __at (0xF8+2) LPX4;
__sbit __at (0xF8+3) LPX5;
__sbit __at (0xF8+4) LPXWDI;
