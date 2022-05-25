/*--------------------------------------------------------------------------
CH552.H
Header file for CH552 microcontrollers.
****************************************
**  Copyright  (C)  W.ch  1999-2016   **
**  Web:              http://wch.cn   **
****************************************
--------------------------------------------------------------------------*/

// 3 blocks: __BASE_TYPE__, __CH552_H__, __USB_DEF__

#ifndef __BASE_TYPE__
#define __BASE_TYPE__

#ifdef __cplusplus
extern "C" {
#endif

/*----- constant and type define -----------------------------------------*/

#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif
#ifndef NULL
#define NULL 0
#endif

#ifndef BOOL
typedef __bit BOOL;
#endif
#ifndef UINT8
typedef unsigned char UINT8;
#endif
#ifndef UINT16
typedef unsigned short UINT16;
#endif
#ifndef UINT32
typedef unsigned long UINT32;
#endif
#ifndef UINT8D
typedef unsigned char __data UINT8D;
#endif
#ifndef UINT16D
typedef unsigned short __data UINT16D;
#endif
#ifndef UINT32D
typedef unsigned long __data UINT32D;
#endif
#ifndef UINT8I
typedef unsigned char __idata UINT8I;
#endif
#ifndef UINT16I
typedef unsigned short __idata UINT16I;
#endif
#ifndef UINT32I
typedef unsigned long __idata UINT32I;
#endif
#ifndef UINT8X
typedef unsigned char __xdata UINT8X;
#endif
#ifndef UINT16X
typedef unsigned short __xdata UINT16X;
#endif
#ifndef UINT32X
typedef unsigned long __xdata UINT32X;
#endif
#ifndef UINT8V
typedef unsigned char volatile UINT8V;
#endif
#ifndef UINT8DV
typedef unsigned char volatile __data UINT8DV;
#endif
#ifndef UINT8XV
typedef unsigned char volatile __xdata UINT8XV;
#endif
#ifndef UINT8PV
typedef unsigned char volatile __pdata UINT8PV;
#endif
#ifndef UINT8C
typedef const unsigned char __code UINT8C;
#endif
#ifndef PUINT8
typedef unsigned char *PUINT8;
#endif
#ifndef PUINT16
typedef unsigned short *PUINT16;
#endif
#ifndef PUINT32
typedef unsigned long *PUINT32;
#endif
#ifndef PUINT8I
typedef unsigned char __idata *PUINT8I;
#endif
#ifndef PUINT16I
typedef unsigned short __idata *PUINT16I;
#endif
#ifndef PUINT32I
typedef unsigned long __idata *PUINT32I;
#endif
#ifndef PUINT8X
typedef unsigned char __xdata *PUINT8X;
#endif
#ifndef PUINT16X
typedef unsigned short __xdata *PUINT16X;
#endif
#ifndef PUINT32X
typedef unsigned long __xdata *PUINT32X;
#endif
#ifndef PUINT8V
typedef unsigned char volatile *PUINT8V;
#endif
#ifndef PUINT8DV
typedef unsigned char volatile __data *PUINT8DV;
#endif
#ifndef PUINT8XV
typedef unsigned char volatile __xdata *PUINT8XV;
#endif
#ifndef PUINT8PV
typedef unsigned char volatile __pdata *PUINT8PV;
#endif
#ifndef PUINT8C
typedef const unsigned char __code *PUINT8C;
#endif

#ifndef STRUCT_OFFSET
#define STRUCT_OFFSET( s, m ) ( (UINT8)( & (((s) *)0) -> (m) ) )/* get the offset address for a member of a structure */
#endif

#ifdef __cplusplus
}
#endif

#endif// __BASE_TYPE__

#ifndef __CH552_H__
#define __CH552_H__

#ifdef __cplusplus
extern "C" {
#endif

/*----- SFR --------------------------------------------------------------*/
/*  sbit are bit addressable, others are byte addressable */

/*  System Registers  */
__sfr __at (0xD0) PSW;// program status word
 __sbit __at (0xD0+7) CY;// carry flag
 __sbit __at (0xD0+6) AC;// auxiliary carry flag
 __sbit __at (0xD0+5) F0;// bit addressable general purpose flag 0
 __sbit __at (0xD0+4) RS1;// register R0-R7 bank selection high bit
 __sbit __at (0xD0+3) RS0;// register R0-R7 bank selection low bit
#define MASK_PSW_RS 0x18// bit mask of register R0-R7 bank selection
// RS1 & RS0: register R0-R7 bank selection
//    00 - bank 0, R0-R7 @ address 0x00-0x07
//    01 - bank 1, R0-R7 @ address 0x08-0x0F
//    10 - bank 2, R0-R7 @ address 0x10-0x17
//    11 - bank 3, R0-R7 @ address 0x18-0x1F
 __sbit __at (0xD0+2) OV;// overflow flag
 __sbit __at (0xD0+1) F1;// bit addressable general purpose flag 1
 __sbit __at (0xD0+0) P;// ReadOnly: parity flag
__sfr __at (0xE0) ACC;// accumulator
__sfr __at (0xF0) B;// general purpose register B
__sfr __at (0x81) SP;// stack pointer
//sfr16 DPTR          = 0x82;         // DPTR pointer, little-endian
__sfr __at (0x82) DPL;// data pointer low
__sfr __at (0x83) DPH;// data pointer high
__sfr __at (0xA1) SAFE_MOD;// WriteOnly: writing safe mode
//sfr CHIP_ID         = 0xA1;         // ReadOnly: reading chip ID
#define CHIP_ID SAFE_MOD
__sfr __at (0xB1) GLOBAL_CFG;// global config, Write@SafeMode
#define bBOOT_LOAD 0x20// ReadOnly: boot loader status for discriminating BootLoader or Application: set 1 by power on reset, clear 0 by software reset
#define bSW_RESET 0x10// software reset bit, auto clear by hardware
#define bCODE_WE 0x08// enable flash-ROM (include code & Data-Flash) being program or erasing: 0=writing protect, 1=enable program and erase
#define bDATA_WE 0x04// enable Data-Flash (flash-ROM data area) being program or erasing: 0=writing protect, 1=enable program and erase
#define bLDO3V3_OFF 0x02// disable 5V->3.3V LDO: 0=enable LDO for USB and internal oscillator under 5V power, 1=disable LDO, V33 pin input external 3.3V power
#define bWDOG_EN 0x01// enable watch-dog reset if watch-dog timer overflow: 0=as timer only, 1=enable reset if timer overflow

/* Clock and Sleep and Power Registers */
__sfr __at (0x87) PCON;// power control and reset flag
#define SMOD 0x80// baud rate selection for UART0 mode 1/2/3: 0=slow(Fsys/128 @mode2, TF1/32 @mode1/3, no effect for TF2),
                                    //   1=fast(Fsys/32 @mode2, TF1/16 @mode1/3, no effect for TF2)
#define bRST_FLAG1 0x20// ReadOnly: recent reset flag high bit
#define bRST_FLAG0 0x10// ReadOnly: recent reset flag low bit
#define MASK_RST_FLAG 0x30// ReadOnly: bit mask of recent reset flag
#define RST_FLAG_SW 0x00
#define RST_FLAG_POR 0x10
#define RST_FLAG_WDOG 0x20
#define RST_FLAG_PIN 0x30
// bPC_RST_FLAG1 & bPC_RST_FLAG0: recent reset flag
//    00 - software reset, by bSW_RESET=1 @(bBOOT_LOAD=0 or bWDOG_EN=1)
//    01 - power on reset
//    10 - watch-dog timer overflow reset
//    11 - external input manual reset by RST pin
#define GF1 0x08// general purpose flag bit 1
#define GF0 0x04// general purpose flag bit 0
#define PD 0x02// power-down enable bit, auto clear by wake-up hardware
__sfr __at (0xB9) CLOCK_CFG;// system clock config: lower 3 bits for system clock Fsys, Write@SafeMode
#define bOSC_EN_INT 0x80// internal oscillator enable and original clock selection: 1=enable & select internal clock, 0=disable & select external clock
#define bOSC_EN_XT 0x40// external oscillator enable, need quartz crystal or ceramic resonator between XI and XO pins
#define bWDOG_IF_TO 0x20// ReadOnly: watch-dog timer overflow interrupt flag, cleared by reload watch-dog count or auto cleared when MCU enter interrupt routine
#define bROM_CLK_FAST 0x10// flash-ROM clock frequency selection: 0=normal(for Fosc>=16MHz), 1=fast(for Fosc<16MHz)
#define bRST 0x08// ReadOnly: pin RST input
#define bT2EX_ 0x08// alternate pin for T2EX
#define bCAP2_ 0x08// alternate pin for CAP2
#define MASK_SYS_CK_SEL 0x07// bit mask of system clock Fsys selection
/*
   Fxt = 24MHz(8MHz~25MHz for non-USB application), from external oscillator @XI&XO
   Fosc = bOSC_EN_INT ? 24MHz : Fxt
   Fpll = Fosc * 4 => 96MHz (32MHz~100MHz for non-USB application)
   Fusb4x = Fpll / 2 => 48MHz (Fixed)
              MASK_SYS_CK_SEL[2] [1] [0]
   Fsys = Fpll/3   =  32MHz:  1   1   1
   Fsys = Fpll/4   =  24MHz:  1   1   0
   Fsys = Fpll/6   =  16MHz:  1   0   1
   Fsys = Fpll/8   =  12MHz:  1   0   0
   Fsys = Fpll/16  =   6MHz:  0   1   1
   Fsys = Fpll/32  =   3MHz:  0   1   0
   Fsys = Fpll/128 = 750KHz:  0   0   1
   Fsys = Fpll/512 =187.5KHz: 0   0   0
*/
__sfr __at (0xA9) WAKE_CTRL;// wake-up control, Write@SafeMode
#define bWAK_BY_USB 0x80// enable wake-up by USB event
#define bWAK_RXD1_LO 0x40// enable wake-up by RXD1 low level
#define bWAK_P1_5_LO 0x20// enable wake-up by pin P1.5 low level
#define bWAK_P1_4_LO 0x10// enable wake-up by pin P1.4 low level
#define bWAK_P1_3_LO 0x08// enable wake-up by pin P1.3 low level
#define bWAK_RST_HI 0x04// enable wake-up by pin RST high level
#define bWAK_P3_2E_3L 0x02// enable wake-up by pin P3.2 (INT0) edge or pin P3.3 (INT1) low level
#define bWAK_RXD0_LO 0x01// enable wake-up by RXD0 low level
__sfr __at (0xFE) RESET_KEEP;// value keeper during reset
__sfr __at (0xFF) WDOG_COUNT;// watch-dog count, count by clock frequency Fsys/65536

/*  Interrupt Registers  */
__sfr __at (0xA8) IE;// interrupt enable
 __sbit __at (0xA8+7) EA;// enable global interrupts: 0=disable, 1=enable if E_DIS=0
 __sbit __at (0xA8+6) E_DIS;// disable global interrupts, intend to inhibit interrupt during some flash-ROM operation: 0=enable if EA=1, 1=disable
 __sbit __at (0xA8+5) ET2;// enable timer2 interrupt
 __sbit __at (0xA8+4) ES;// enable UART0 interrupt
 __sbit __at (0xA8+3) ET1;// enable timer1 interrupt
 __sbit __at (0xA8+2) EX1;// enable external interrupt INT1
 __sbit __at (0xA8+1) ET0;// enable timer0 interrupt
 __sbit __at (0xA8+0) EX0;// enable external interrupt INT0
__sfr __at (0xB8) IP;// interrupt priority and current priority
 __sbit __at (0xB8+7) PH_FLAG;// ReadOnly: high level priority action flag
 __sbit __at (0xB8+6) PL_FLAG;// ReadOnly: low level priority action flag
// PH_FLAG & PL_FLAG: current interrupt priority
//    00 - no interrupt now
//    01 - low level priority interrupt action now
//    10 - high level priority interrupt action now
//    11 - unknown error
 __sbit __at (0xB8+5) PT2;// timer2 interrupt priority level
 __sbit __at (0xB8+4) PS;// UART0 interrupt priority level
 __sbit __at (0xB8+3) PT1;// timer1 interrupt priority level
 __sbit __at (0xB8+2) PX1;// external interrupt INT1 priority level
 __sbit __at (0xB8+1) PT0;// timer0 interrupt priority level
 __sbit __at (0xB8+0) PX0;// external interrupt INT0 priority level
__sfr __at (0xE8) IE_EX;// extend interrupt enable
 __sbit __at (0xE8+7) IE_WDOG;// enable watch-dog timer interrupt
 __sbit __at (0xE8+6) IE_GPIO;// enable GPIO input interrupt
 __sbit __at (0xE8+5) IE_PWMX;// enable PWM1/2 interrupt
 __sbit __at (0xE8+4) IE_UART1;// enable UART1 interrupt
 __sbit __at (0xE8+3) IE_ADC;// enable ADC interrupt
 __sbit __at (0xE8+2) IE_USB;// enable USB interrupt
 __sbit __at (0xE8+1) IE_TKEY;// enable touch-key timer interrupt
 __sbit __at (0xE8+0) IE_SPI0;// enable SPI0 interrupt
__sfr __at (0xE9) IP_EX;// extend interrupt priority
#define bIP_LEVEL 0x80// ReadOnly: current interrupt nested level: 0=no interrupt or two levels, 1=one level
#define bIP_GPIO 0x40// GPIO input interrupt priority level
#define bIP_PWMX 0x20// PWM1/2 interrupt priority level
#define bIP_UART1 0x10// UART1 interrupt priority level
#define bIP_ADC 0x08// ADC interrupt priority level
#define bIP_USB 0x04// USB interrupt priority level
#define bIP_TKEY 0x02// touch-key timer interrupt priority level
#define bIP_SPI0 0x01// SPI0 interrupt priority level
__sfr __at (0xC7) GPIO_IE;// GPIO interrupt enable
#define bIE_IO_EDGE 0x80// enable GPIO edge interrupt: 0=low/high level, 1=falling/rising edge
#define bIE_RXD1_LO 0x40// enable interrupt by RXD1 low level / falling edge
#define bIE_P1_5_LO 0x20// enable interrupt by pin P1.5 low level / falling edge
#define bIE_P1_4_LO 0x10// enable interrupt by pin P1.4 low level / falling edge
#define bIE_P1_3_LO 0x08// enable interrupt by pin P1.3 low level / falling edge
#define bIE_RST_HI 0x04// enable interrupt by pin RST high level / rising edge
#define bIE_P3_1_LO 0x02// enable interrupt by pin P3.1 low level / falling edge
#define bIE_RXD0_LO 0x01// enable interrupt by RXD0 low level / falling edge

/*  FlashROM and Data-Flash Registers  */
// _sfr16 __at (0x84) ROM_ADDR;// address for flash-ROM, little-endian
__sfr __at (0x84) ROM_ADDR_L;// address low byte for flash-ROM
__sfr __at (0x85) ROM_ADDR_H;// address high byte for flash-ROM
// _sfr16 __at (0x8E) ROM_DATA;// data for flash-ROM writing, little-endian
__sfr __at (0x8E) ROM_DATA_L;// data low byte for flash-ROM writing, data byte for Data-Flash reading/writing
__sfr __at (0x8F) ROM_DATA_H;// data high byte for flash-ROM writing
__sfr __at (0x86) ROM_CTRL;// WriteOnly: flash-ROM control
#define ROM_CMD_WRITE 0x9A// WriteOnly: flash-ROM word or Data-Flash byte write operation command
#define ROM_CMD_READ 0x8E// WriteOnly: Data-Flash byte read operation command
//sfr ROM_STATUS      = 0x86;         // ReadOnly: flash-ROM status
#define ROM_STATUS ROM_CTRL
#define bROM_ADDR_OK 0x40// ReadOnly: flash-ROM writing operation address valid flag, can be reviewed before or after operation: 0=invalid parameter, 1=address valid
#define bROM_CMD_ERR 0x02// ReadOnly: flash-ROM operation command error flag: 0=command accepted, 1=unknown command

/*  Port Registers  */
__sfr __at (0x90) P1;// port 1 input & output
 __sbit __at (0x90+7) P17;
 __sbit __at (0x90+6) P16;
 __sbit __at (0x90+5) P15;
 __sbit __at (0x90+4) P14;
 __sbit __at (0x90+3) P13;
 __sbit __at (0x90+2) P12;
 __sbit __at (0x90+1) P11;
 __sbit __at (0x90+0) P10;

 __sbit __at (0x90+7) SCK;// serial clock for SPI0
 __sbit __at (0x90+7) TXD1;// TXD output for UART1
 __sbit __at (0x90+7) TIN5;// TIN5 for Touch-Key
 __sbit __at (0x90+6) MISO;// master serial data input or slave serial data output for SPI0
 __sbit __at (0x90+6) RXD1;// RXD input for UART1
 __sbit __at (0x90+6) TIN4;// TIN4 for Touch-Key
 __sbit __at (0x90+5) MOSI;// master serial data output or slave serial data input for SPI0
 __sbit __at (0x90+5) PWM1;// PWM output for PWM1
 __sbit __at (0x90+5) TIN3;// TIN3 for Touch-Key
 __sbit __at (0x90+5) UCC2;// CC2 for USB type-C
 __sbit __at (0x90+5) AIN2;// AIN2 for ADC
 __sbit __at (0x90+4) T2_;// alternate pin for T2
 __sbit __at (0x90+4) CAP1_;// alternate pin for CAP1
 __sbit __at (0x90+4) SCS;// slave chip-selection input for SPI0
 __sbit __at (0x90+4) TIN2;// TIN2 for Touch-Key
 __sbit __at (0x90+4) UCC1;// CC1 for USB type-C
 __sbit __at (0x90+4) AIN1;// AIN1 for ADC
 __sbit __at (0x90+3) TXD_;// alternate pin for TXD of UART0
 __sbit __at (0x90+2) RXD_;// alternate pin for RXD of UART0
 __sbit __at (0x90+1) T2EX;// external trigger input for timer2 reload & capture
 __sbit __at (0x90+1) CAP2;// capture2 input for timer2
 __sbit __at (0x90+1) TIN1;// TIN1 for Touch-Key
 __sbit __at (0x90+1) VBUS2;// VBUS2 for USB type-C
 __sbit __at (0x90+1) AIN0;// AIN0 for ADC
 __sbit __at (0x90+0) T2;// external count input
 __sbit __at (0x90+0) CAP1;// capture1 input for timer2
 __sbit __at (0x90+0) TIN0;// TIN0 for Touch-Key
__sfr __at (0x92) P1_MOD_OC;// port 1 output mode: 0=push-pull, 1=open-drain
__sfr __at (0x93) P1_DIR_PU;// port 1 direction for push-pull or pullup enable for open-drain
// Pn_MOD_OC & Pn_DIR_PU: pin input & output configuration for Pn (n=1/3)
//   0 0:  float input only, without pullup resistance
//   0 1:  push-pull output, strong driving high level and low level
//   1 0:  open-drain output and input without pullup resistance
//   1 1:  quasi-bidirectional (standard 8051 mode), open-drain output and input with pullup resistance, just driving high level strongly for 2 clocks if turning output level from low to high
#define bSCK 0x80// serial clock for SPI0
#define bTXD1 0x80// TXD output for UART1
#define bMISO 0x40// master serial data input or slave serial data output for SPI0
#define bRXD1 0x40// RXD input for UART1
#define bMOSI 0x20// master serial data output or slave serial data input for SPI0
#define bPWM1 0x20// PWM output for PWM1
#define bUCC2 0x20// CC2 for USB type-C
#define bAIN2 0x20// AIN2 for ADC
#define bT2_ 0x10// alternate pin for T2
#define bCAP1_ 0x10// alternate pin for CAP1
#define bSCS 0x10// slave chip-selection input for SPI0
#define bUCC1 0x10// CC1 for USB type-C
#define bAIN1 0x10// AIN1 for ADC
#define bTXD_ 0x08// alternate pin for TXD of UART0
#define bRXD_ 0x04// alternate pin for RXD of UART0
#define bT2EX 0x02// external trigger input for timer2 reload & capture
#define bCAP2 bT2EX// capture2 input for timer2
#define bVBUS2 0x02// VBUS2 for USB type-C
#define bAIN0 0x02// AIN0 for ADC
#define bT2 0x01// external count input or clock output for timer2
#define bCAP1 bT2// capture1 input for timer2
__sfr __at (0xA0) P2;// port 2
 __sbit __at (0xA0+7) P27;
 __sbit __at (0xA0+6) P26;
 __sbit __at (0xA0+5) P25;
 __sbit __at (0xA0+4) P24;
 __sbit __at (0xA0+3) P23;
 __sbit __at (0xA0+2) P22;
 __sbit __at (0xA0+1) P21;
 __sbit __at (0xA0+0) P20;
__sfr __at (0xB0) P3;// port 3 input & output
 __sbit __at (0xB0+7) P37; 
 __sbit __at (0xB0+6) P36; 
 __sbit __at (0xB0+5) P35; 
 __sbit __at (0xB0+4) P34; 
 __sbit __at (0xB0+3) P33; 
 __sbit __at (0xB0+2) P32; 
 __sbit __at (0xB0+1) P31; 
 __sbit __at (0xB0+0) P30; 
 __sbit __at (0xB0+7) UDM;// ReadOnly: pin UDM input
 __sbit __at (0xB0+6) UDP;// ReadOnly: pin UDP input
 __sbit __at (0xB0+5) T1;// external count input for timer1
 __sbit __at (0xB0+4) PWM2;// PWM output for PWM2
 __sbit __at (0xB0+4) RXD1_;// alternate pin for RXD1
 __sbit __at (0xB0+4) T0;// external count input for timer0
 __sbit __at (0xB0+3) INT1;// external interrupt 1 input
 __sbit __at (0xB0+2) TXD1_;// alternate pin for TXD1
 __sbit __at (0xB0+2) INT0;// external interrupt 0 input
 __sbit __at (0xB0+2) VBUS1;// VBUS1 for USB type-C
 __sbit __at (0xB0+2) AIN3;// AIN3 for ADC
 __sbit __at (0xB0+1) PWM2_;// alternate pin for PWM2
 __sbit __at (0xB0+1) TXD;// TXD output for UART0
 __sbit __at (0xB0+0) PWM1_;// alternate pin for PWM1
 __sbit __at (0xB0+0) RXD;// RXD input for UART0
__sfr __at (0x96) P3_MOD_OC;// port 3 output mode: 0=push-pull, 1=open-drain
__sfr __at (0x97) P3_DIR_PU;// port 3 direction for push-pull or pullup enable for open-drain
#define bUDM 0x80// ReadOnly: pin UDM input
#define bUDP 0x40// ReadOnly: pin UDP input
#define bT1 0x20// external count input for timer1
#define bPWM2 0x10// PWM output for PWM2
#define bRXD1_ 0x10// alternate pin for RXD1
#define bT0 0x10// external count input for timer0
#define bINT1 0x08// external interrupt 1 input
#define bTXD1_ 0x04// alternate pin for TXD1
#define bINT0 0x04// external interrupt 0 input
#define bVBUS1 0x04// VBUS1 for USB type-C
#define bAIN3 0x04// AIN3 for ADC
#define bPWM2_ 0x02// alternate pin for PWM2
#define bTXD 0x02// TXD output for UART0
#define bPWM1_ 0x01// alternate pin for PWM1
#define bRXD 0x01// RXD input for UART0
__sfr __at (0xC6) PIN_FUNC;// pin function selection
#define bUSB_IO_EN 0x80// USB UDP/UDM I/O pin enable: 0=P3.6/P3.7 as GPIO, 1=P3.6/P3.7 as USB
#define bIO_INT_ACT 0x40// ReadOnly: GPIO interrupt request action status
#define bUART1_PIN_X 0x20// UART1 alternate pin enable: 0=RXD1/TXD1 on P1.6/P1.7, 1=RXD1/TXD1 on P3.4/P3.2
#define bUART0_PIN_X 0x10// UART0 alternate pin enable: 0=RXD0/TXD0 on P3.0/P3.1, 1=RXD0/TXD0 on P1.2/P1.3
#define bPWM2_PIN_X 0x08// PWM2 alternate pin enable: 0=PWM2 on P3.4, 1=PWM2 on P3.1
#define bPWM1_PIN_X 0x04// PWM1 alternate pin enable: 0=PWM1 on P1.5, 1=PWM1 on P3.0
#define bT2EX_PIN_X 0x02// T2EX/CAP2 alternate pin enable: 0=T2EX/CAP2 on P1.1, 1=T2EX/CAP2 on RST
#define bT2_PIN_X 0x01// T2/CAP1 alternate pin enable: 0=T2/CAP1 on P1.1, 1=T2/CAP1 on P1.4
__sfr __at (0xA2) XBUS_AUX;// xBUS auxiliary setting
#define bUART0_TX 0x80// ReadOnly: indicate UART0 transmittal status
#define bUART0_RX 0x40// ReadOnly: indicate UART0 receiving status
#define bSAFE_MOD_ACT 0x20// ReadOnly: safe mode action status
#define GF2 0x08// general purpose flag bit 2
#define bDPTR_AUTO_INC 0x04// enable DPTR auto increase if finished MOVX_@DPTR instruction
#define DPS 0x01// dual DPTR selection: 0=DPTR0 selected, 1=DPTR1 selected

/*  Timer0/1 Registers  */
__sfr __at (0x88) TCON;// timer 0/1 control and external interrupt control
 __sbit __at (0x88+7) TF1;// timer1 overflow & interrupt flag, auto cleared when MCU enter interrupt routine
 __sbit __at (0x88+6) TR1;// timer1 run enable
 __sbit __at (0x88+5) TF0;// timer0 overflow & interrupt flag, auto cleared when MCU enter interrupt routine
 __sbit __at (0x88+4) TR0;// timer0 run enable
 __sbit __at (0x88+3) IE1;// INT1 interrupt flag, auto cleared when MCU enter interrupt routine
 __sbit __at (0x88+2) IT1;// INT1 interrupt type: 0=low level action, 1=falling edge action
 __sbit __at (0x88+1) IE0;// INT0 interrupt flag, auto cleared when MCU enter interrupt routine
 __sbit __at (0x88+0) IT0;// INT0 interrupt type: 0=low level action, 1=falling edge action
__sfr __at (0x89) TMOD;// timer 0/1 mode
#define bT1_GATE 0x80// gate control of timer1: 0=timer1 run enable while TR1=1, 1=timer1 run enable while P3.3 (INT1) pin is high and TR1=1
#define bT1_CT 0x40// counter or timer mode selection for timer1: 0=timer, use internal clock, 1=counter, use P3.5 (T1) pin falling edge as clock
#define bT1_M1 0x20// timer1 mode high bit
#define bT1_M0 0x10// timer1 mode low bit
#define MASK_T1_MOD 0x30// bit mask of timer1 mode
// bT1_M1 & bT1_M0: timer1 mode
//   00: mode 0, 13-bit timer or counter by cascaded TH1 and lower 5 bits of TL1, the upper 3 bits of TL1 are ignored
//   01: mode 1, 16-bit timer or counter by cascaded TH1 and TL1
//   10: mode 2, TL1 operates as 8-bit timer or counter, and TH1 provide initial value for TL1 auto-reload
//   11: mode 3, stop timer1
#define bT0_GATE 0x08// gate control of timer0: 0=timer0 run enable while TR0=1, 1=timer0 run enable while P3.2 (INT0) pin is high and TR0=1
#define bT0_CT 0x04// counter or timer mode selection for timer0: 0=timer, use internal clock, 1=counter, use P3.4 (T0) pin falling edge as clock
#define bT0_M1 0x02// timer0 mode high bit
#define bT0_M0 0x01// timer0 mode low bit
#define MASK_T0_MOD 0x03// bit mask of timer0 mode
// bT0_M1 & bT0_M0: timer0 mode
//   00: mode 0, 13-bit timer or counter by cascaded TH0 and lower 5 bits of TL0, the upper 3 bits of TL0 are ignored
//   01: mode 1, 16-bit timer or counter by cascaded TH0 and TL0
//   10: mode 2, TL0 operates as 8-bit timer or counter, and TH0 provide initial value for TL0 auto-reload
//   11: mode 3, TL0 is 8-bit timer or counter controlled by standard timer0 bits, TH0 is 8-bit timer using TF1 and controlled by TR1, timer1 run enable if it is not mode 3
__sfr __at (0x8A) TL0;// low byte of timer 0 count
__sfr __at (0x8B) TL1;// low byte of timer 1 count
__sfr __at (0x8C) TH0;// high byte of timer 0 count
__sfr __at (0x8D) TH1;// high byte of timer 1 count

/*  UART0 Registers  */
__sfr __at (0x98) SCON;// UART0 control (serial port control)
 __sbit __at (0x98+7) SM0;// UART0 mode bit0, selection data bit: 0=8 bits data, 1=9 bits data
 __sbit __at (0x98+6) SM1;// UART0 mode bit1, selection baud rate: 0=fixed, 1=variable
// SM0 & SM1: UART0 mode
//    00 - mode 0, shift Register, baud rate fixed at: Fsys/12
//    01 - mode 1, 8-bit UART,     baud rate = variable by timer1 or timer2 overflow rate
//    10 - mode 2, 9-bit UART,     baud rate fixed at: Fsys/128@SMOD=0, Fsys/32@SMOD=1
//    11 - mode 3, 9-bit UART,     baud rate = variable by timer1 or timer2 overflow rate
 __sbit __at (0x98+5) SM2;// enable multi-device communication in mode 2/3
#define MASK_UART0_MOD 0xE0// bit mask of UART0 mode
 __sbit __at (0x98+4) REN;// enable UART0 receiving
 __sbit __at (0x98+3) TB8;// the 9th transmitted data bit in mode 2/3
 __sbit __at (0x98+2) RB8;// 9th data bit received in mode 2/3, or stop bit received for mode 1
 __sbit __at (0x98+1) TI;// transmit interrupt flag, set by hardware after completion of a serial transmittal, need software clear
 __sbit __at (0x98+0) RI;// receive interrupt flag, set by hardware after completion of a serial receiving, need software clear
__sfr __at (0x99) SBUF;// UART0 data buffer: reading for receiving, writing for transmittal

/*  Timer2/Capture2 Registers  */
__sfr __at (0xC8) T2CON;// timer 2 control
 __sbit __at (0xC8+7) TF2;// timer2 overflow & interrupt flag, need software clear, the flag will not be set when either RCLK=1 or TCLK=1
 __sbit __at (0xC8+7) CAP1F;// timer2 capture 1 interrupt flag, set by T2 edge trigger if bT2_CAP1_EN=1, need software clear
 __sbit __at (0xC8+6) EXF2;// timer2 external flag, set by T2EX edge trigger if EXEN2=1, need software clear
 __sbit __at (0xC8+5) RCLK;// selection UART0 receiving clock: 0=timer1 overflow pulse, 1=timer2 overflow pulse
 __sbit __at (0xC8+4) TCLK;// selection UART0 transmittal clock: 0=timer1 overflow pulse, 1=timer2 overflow pulse
 __sbit __at (0xC8+3) EXEN2;// enable T2EX trigger function: 0=ignore T2EX, 1=trigger reload or capture by T2EX edge
 __sbit __at (0xC8+2) TR2;// timer2 run enable
 __sbit __at (0xC8+1) C_T2;// timer2 clock source selection: 0=timer base internal clock, 1=external edge counter base T2 falling edge
 __sbit __at (0xC8+0) CP_RL2;// timer2 function selection (force 0 if RCLK=1 or TCLK=1): 0=timer and auto reload if count overflow or T2EX edge, 1=capture by T2EX edge
__sfr __at (0xC9) T2MOD;// timer 2 mode and timer 0/1/2 clock mode
#define bTMR_CLK 0x80// fastest internal clock mode for timer 0/1/2 under faster clock mode: 0=use divided clock, 1=use original Fsys as clock without dividing
#define bT2_CLK 0x40// timer2 internal clock frequency selection: 0=standard clock, Fsys/12 for timer mode, Fsys/4 for UART0 clock mode,
                                    //   1=faster clock, Fsys/4 @bTMR_CLK=0 or Fsys @bTMR_CLK=1 for timer mode, Fsys/2 @bTMR_CLK=0 or Fsys @bTMR_CLK=1 for UART0 clock mode
#define bT1_CLK 0x20// timer1 internal clock frequency selection: 0=standard clock, Fsys/12, 1=faster clock, Fsys/4 if bTMR_CLK=0 or Fsys if bTMR_CLK=1
#define bT0_CLK 0x10// timer0 internal clock frequency selection: 0=standard clock, Fsys/12, 1=faster clock, Fsys/4 if bTMR_CLK=0 or Fsys if bTMR_CLK=1
#define bT2_CAP_M1 0x08// timer2 capture mode high bit
#define bT2_CAP_M0 0x04// timer2 capture mode low bit
// bT2_CAP_M1 & bT2_CAP_M0: timer2 capture point selection
//   x0: from falling edge to falling edge
//   01: from any edge to any edge (level changing)
//   11: from rising edge to rising edge
#define T2OE 0x02// enable timer2 generated clock output: 0=disable output, 1=enable clock output at T2 pin, frequency = TF2/2
#define bT2_CAP1_EN 0x01// enable T2 trigger function for capture 1 of timer2 if RCLK=0 & TCLK=0 & CP_RL2=1 & C_T2=0 & T2OE=0
// _sfr16 __at (0xCA) RCAP2;// reload & capture value, little-endian
__sfr __at (0xCA) RCAP2L;// low byte of reload & capture value
__sfr __at (0xCB) RCAP2H;// high byte of reload & capture value
// _sfr16 __at (0xCC) T2COUNT;// counter, little-endian
__sfr __at (0xCC) TL2;// low byte of timer 2 count
__sfr __at (0xCD) TH2;// high byte of timer 2 count
// _sfr16 __at (0xCE) T2CAP1;// ReadOnly: capture 1 value for timer2
__sfr __at (0xCE) T2CAP1L;// ReadOnly: capture 1 value low byte for timer2
__sfr __at (0xCF) T2CAP1H;// ReadOnly: capture 1 value high byte for timer2

/*  PWM1/2 Registers  */
__sfr __at (0x9B) PWM_DATA2;// PWM data for PWM2
__sfr __at (0x9C) PWM_DATA1;// PWM data for PWM1
__sfr __at (0x9D) PWM_CTRL;// PWM 1/2 control
#define bPWM_IE_END 0x80// enable interrupt for PWM mode cycle end
#define bPWM2_POLAR 0x40// PWM2 output polarity: 0=default low and high action, 1=default high and low action
#define bPWM1_POLAR 0x20// PWM1 output polarity: 0=default low and high action, 1=default high and low action
#define bPWM_IF_END 0x10// interrupt flag for cycle end, write 1 to clear or write PWM_CYCLE or load new data to clear
#define bPWM2_OUT_EN 0x08// PWM2 output enable
#define bPWM1_OUT_EN 0x04// PWM1 output enable
#define bPWM_CLR_ALL 0x02// force clear FIFO and count of PWM1/2
__sfr __at (0x9E) PWM_CK_SE;// clock divisor setting

/*  SPI0/Master0/Slave Registers  */
__sfr __at (0xF8) SPI0_STAT;// SPI 0 status
 __sbit __at (0xF8+7) S0_FST_ACT;// ReadOnly: indicate first byte received status for SPI0
 __sbit __at (0xF8+6) S0_IF_OV;// interrupt flag for slave mode FIFO overflow, direct bit address clear or write 1 to clear
 __sbit __at (0xF8+5) S0_IF_FIRST;// interrupt flag for first byte received, direct bit address clear or write 1 to clear
 __sbit __at (0xF8+4) S0_IF_BYTE;// interrupt flag for a byte data exchanged, direct bit address clear or write 1 to clear or accessing FIFO to clear if bS0_AUTO_IF=1
 __sbit __at (0xF8+3) S0_FREE;// ReadOnly: SPI0 free status
 __sbit __at (0xF8+2) S0_T_FIFO;// ReadOnly: tx FIFO count for SPI0
 __sbit __at (0xF8+0) S0_R_FIFO;// ReadOnly: rx FIFO count for SPI0
__sfr __at (0xF9) SPI0_DATA;// FIFO data port: reading for receiving, writing for transmittal
__sfr __at (0xFA) SPI0_CTRL;// SPI 0 control
#define bS0_MISO_OE 0x80// SPI0 MISO output enable
#define bS0_MOSI_OE 0x40// SPI0 MOSI output enable
#define bS0_SCK_OE 0x20// SPI0 SCK output enable
#define bS0_DATA_DIR 0x10// SPI0 data direction: 0=out(master_write), 1=in(master_read)
#define bS0_MST_CLK 0x08// SPI0 master clock mode: 0=mode 0 with default low, 1=mode 3 with default high
#define bS0_2_WIRE 0x04// enable SPI0 two wire mode: 0=3 wire (SCK+MOSI+MISO), 1=2 wire (SCK+MISO)
#define bS0_CLR_ALL 0x02// force clear FIFO and count of SPI0
#define bS0_AUTO_IF 0x01// enable FIFO accessing to auto clear S0_IF_BYTE interrupt flag
__sfr __at (0xFB) SPI0_CK_SE;// clock divisor setting
//sfr SPI0_S_PRE      = 0xFB;         // preset value for SPI slave
#define SPI0_S_PRE SPI0_CK_SE
__sfr __at (0xFC) SPI0_SETUP;// SPI 0 setup
#define bS0_MODE_SLV 0x80// SPI0 slave mode: 0=master, 1=slave
#define bS0_IE_FIFO_OV 0x40// enable interrupt for slave mode FIFO overflow
#define bS0_IE_FIRST 0x20// enable interrupt for first byte received for SPI0 slave mode
#define bS0_IE_BYTE 0x10// enable interrupt for a byte received
#define bS0_BIT_ORDER 0x08// SPI0 bit data order: 0=MSB first, 1=LSB first
#define bS0_SLV_SELT 0x02// ReadOnly: SPI0 slave mode chip selected status: 0=unselected, 1=selected
#define bS0_SLV_PRELOAD 0x01// ReadOnly: SPI0 slave mode data pre-loading status just after chip-selection

/*  UART1 Registers  */
__sfr __at (0xC0) SCON1;// UART1 control (serial port control)
 __sbit __at (0xC0+7) U1SM0;// UART1 mode, selection data bit: 0=8 bits data, 1=9 bits data
 __sbit __at (0xC0+5) U1SMOD;// UART1 2X baud rate selection: 0=slow(Fsys/32/(256-SBAUD1)), 1=fast(Fsys/16/(256-SBAUD1))
 __sbit __at (0xC0+4) U1REN;// enable UART1 receiving
 __sbit __at (0xC0+3) U1TB8;// the 9th transmitted data bit in 9 bits data mode
 __sbit __at (0xC0+2) U1RB8;// 9th data bit received in 9 bits data mode, or stop bit received for 8 bits data mode
 __sbit __at (0xC0+1) U1TI;// transmit interrupt flag, set by hardware after completion of a serial transmittal, need software clear
 __sbit __at (0xC0+0) U1RI;// receive interrupt flag, set by hardware after completion of a serial receiving, need software clear
__sfr __at (0xC1) SBUF1;// UART1 data buffer: reading for receiving, writing for transmittal
__sfr __at (0xC2) SBAUD1;// UART1 baud rate setting

/*  ADC and comparator Registers  */
__sfr __at (0x80) ADC_CTRL;// ADC control
 __sbit __at (0x80+7) CMPO;// ReadOnly: comparator result input
 __sbit __at (0x80+6) CMP_IF;// flag for comparator result changed, direct bit address clear
 __sbit __at (0x80+5) ADC_IF;// interrupt flag for ADC finished, direct bit address clear
 __sbit __at (0x80+4) ADC_START;// set 1 to start ADC, auto cleared when ADC finished
 __sbit __at (0x80+3) CMP_CHAN;// comparator IN- input channel selection: 0=AIN1, 1=AIN3
 __sbit __at (0x80+1) ADC_CHAN1;// ADC/comparator IN+ channel selection high bit
 __sbit __at (0x80+0) ADC_CHAN0;// ADC/comparator IN+ channel selection low bit
// ADC_CHAN1 & ADC_CHAN0: ADC/comparator IN+ channel selection
//   00: AIN0(P1.1)
//   01: AIN1(P1.4)
//   10: AIN2(P1.5)
//   11: AIN3(P3.2)
__sfr __at (0x9A) ADC_CFG;// ADC config
#define bADC_EN 0x08// control ADC power: 0=shut down ADC, 1=enable power for ADC
#define bCMP_EN 0x04// control comparator power: 0=shut down comparator, 1=enable power for comparator
#define bADC_CLK 0x01// ADC clock frequency selection: 0=slow clock, 384 Fosc cycles for each ADC, 1=fast clock, 96 Fosc cycles for each ADC
__sfr __at (0x9F) ADC_DATA;// ReadOnly: ADC data

/*  Touch-key timer Registers  */
__sfr __at (0xC3) TKEY_CTRL;// touch-key control
#define bTKC_IF 0x80// ReadOnly: interrupt flag for touch-key timer, cleared by writing touch-key control or auto cleared when start touch-key checking
#define bTKC_2MS 0x10// touch-key timer cycle selection: 0=1mS, 1=2mS
#define bTKC_CHAN2 0x04// touch-key channel selection high bit
#define bTKC_CHAN1 0x02// touch-key channel selection middle bit
#define bTKC_CHAN0 0x01// touch-key channel selection low bit
// bTKC_CHAN2 & bTKC_CHAN1 & bTKC_CHAN0: touch-key channel selection
//   000: disable touch-key
//   001: TIN0(P1.0)
//   010: TIN1(P1.1)
//   011: TIN2(P1.4)
//   100: TIN3(P1.5)
//   101: TIN4(P1.6)
//   110: TIN5(P1.7)
//   111: enable touch-key but disable all channel
// _sfr16 __at (0xC4) TKEY_DAT;// ReadOnly: touch-key data, little-endian
__sfr __at (0xC4) TKEY_DATL;// ReadOnly: low byte of touch-key data
__sfr __at (0xC5) TKEY_DATH;// ReadOnly: high byte of touch-key data
#define bTKD_CHG 0x80// ReadOnly: indicate control changed, current data maybe invalid

/*  USB Device Registers  */
__sfr __at (0x91) USB_C_CTRL;// USB type-C control
#define bVBUS2_PD_EN 0x80// USB VBUS2 10K pulldown resistance: 0=disable, 1=enable pullup
#define bUCC2_PD_EN 0x40// USB CC2 5.1K pulldown resistance: 0=disable, 1=enable pulldown
#define bUCC2_PU1_EN 0x20// USB CC2 pullup resistance control high bit
#define bUCC2_PU0_EN 0x10// USB CC2 pullup resistance control low bit
#define bVBUS1_PD_EN 0x08// USB VBUS1 10K pulldown resistance: 0=disable, 1=enable pullup
#define bUCC1_PD_EN 0x04// USB CC1 5.1K pulldown resistance: 0=disable, 1=enable pulldown
#define bUCC1_PU1_EN 0x02// USB CC1 pullup resistance control high bit
#define bUCC1_PU0_EN 0x01// USB CC1 pullup resistance control low bit
// bUCC?_PU1_EN & bUCC?_PU0_EN: USB CC pullup resistance selection
//   00: disable pullup resistance
//   01: enable 56K pullup resistance for default USB power
//   10: enable 22K pullup resistance for 1.5A USB power
//   11: enable 10K pullup resistance for 3A USB power
__sfr __at (0xD1) UDEV_CTRL;// USB device physical port control
#define bUD_PD_DIS 0x80// disable USB UDP/UDM pulldown resistance: 0=enable pulldown, 1=disable
#define bUD_DP_PIN 0x20// ReadOnly: indicate current UDP pin level
#define bUD_DM_PIN 0x10// ReadOnly: indicate current UDM pin level
#define bUD_LOW_SPEED 0x04// enable USB physical port low speed: 0=full speed, 1=low speed
#define bUD_GP_BIT 0x02// general purpose bit
#define bUD_PORT_EN 0x01// enable USB physical port I/O: 0=disable, 1=enable
__sfr __at (0xD2) UEP1_CTRL;// endpoint 1 control
#define bUEP_R_TOG 0x80// expected data toggle flag of USB endpoint X receiving (OUT): 0=DATA0, 1=DATA1
#define bUEP_T_TOG 0x40// prepared data toggle flag of USB endpoint X transmittal (IN): 0=DATA0, 1=DATA1
#define bUEP_AUTO_TOG 0x10// enable automatic toggle after successful transfer completion on endpoint 1/2/3: 0=manual toggle, 1=automatic toggle
#define bUEP_R_RES1 0x08// handshake response type high bit for USB endpoint X receiving (OUT)
#define bUEP_R_RES0 0x04// handshake response type low bit for USB endpoint X receiving (OUT)
#define MASK_UEP_R_RES 0x0C// bit mask of handshake response type for USB endpoint X receiving (OUT)
#define UEP_R_RES_ACK 0x00
#define UEP_R_RES_TOUT 0x04
#define UEP_R_RES_NAK 0x08
#define UEP_R_RES_STALL 0x0C
// bUEP_R_RES1 & bUEP_R_RES0: handshake response type for USB endpoint X receiving (OUT)
//   00: ACK (ready)
//   01: no response, time out to host, for non-zero endpoint isochronous transactions
//   10: NAK (busy)
//   11: STALL (error)
#define bUEP_T_RES1 0x02// handshake response type high bit for USB endpoint X transmittal (IN)
#define bUEP_T_RES0 0x01// handshake response type low bit for USB endpoint X transmittal (IN)
#define MASK_UEP_T_RES 0x03// bit mask of handshake response type for USB endpoint X transmittal (IN)
#define UEP_T_RES_ACK 0x00
#define UEP_T_RES_TOUT 0x01
#define UEP_T_RES_NAK 0x02
#define UEP_T_RES_STALL 0x03
// bUEP_T_RES1 & bUEP_T_RES0: handshake response type for USB endpoint X transmittal (IN)
//   00: DATA0 or DATA1 then expecting ACK (ready)
//   01: DATA0 or DATA1 then expecting no response, time out from host, for non-zero endpoint isochronous transactions
//   10: NAK (busy)
//   11: STALL (error)
__sfr __at (0xD3) UEP1_T_LEN;// endpoint 1 transmittal length
__sfr __at (0xD4) UEP2_CTRL;// endpoint 2 control
__sfr __at (0xD5) UEP2_T_LEN;// endpoint 2 transmittal length
__sfr __at (0xD6) UEP3_CTRL;// endpoint 3 control
__sfr __at (0xD7) UEP3_T_LEN;// endpoint 3 transmittal length
__sfr __at (0xD8) USB_INT_FG;// USB interrupt flag
 __sbit __at (0xD8+7) U_IS_NAK;// ReadOnly: indicate current USB transfer is NAK received
 __sbit __at (0xD8+6) U_TOG_OK;// ReadOnly: indicate current USB transfer toggle is OK
 __sbit __at (0xD8+5) U_SIE_FREE;// ReadOnly: indicate USB SIE free status
 __sbit __at (0xD8+4) UIF_FIFO_OV;// FIFO overflow interrupt flag for USB, direct bit address clear or write 1 to clear
 __sbit __at (0xD8+2) UIF_SUSPEND;// USB suspend or resume event interrupt flag, direct bit address clear or write 1 to clear
 __sbit __at (0xD8+1) UIF_TRANSFER;// USB transfer completion interrupt flag, direct bit address clear or write 1 to clear
 __sbit __at (0xD8+0) UIF_BUS_RST;// bus reset event interrupt flag, direct bit address clear or write 1 to clear
__sfr __at (0xD9) USB_INT_ST;// ReadOnly: USB interrupt status
#define bUIS_IS_NAK 0x80// ReadOnly: indicate current USB transfer is NAK received
#define bUIS_TOG_OK 0x40// ReadOnly: indicate current USB transfer toggle is OK
#define bUIS_TOKEN1 0x20// ReadOnly: current token PID code bit 1 received
#define bUIS_TOKEN0 0x10// ReadOnly: current token PID code bit 0 received
#define MASK_UIS_TOKEN 0x30// ReadOnly: bit mask of current token PID code received
#define UIS_TOKEN_OUT 0x00
#define UIS_TOKEN_SOF 0x10
#define UIS_TOKEN_IN 0x20
#define UIS_TOKEN_SETUP 0x30
// bUIS_TOKEN1 & bUIS_TOKEN0: current token PID code received
//   00: OUT token PID received
//   01: SOF token PID received
//   10: IN token PID received
//   11: SETUP token PID received
#define MASK_UIS_ENDP 0x0F// ReadOnly: bit mask of current transfer endpoint number
__sfr __at (0xDA) USB_MIS_ST;// ReadOnly: USB miscellaneous status
#define bUMS_SIE_FREE 0x20// ReadOnly: indicate USB SIE free status
#define bUMS_R_FIFO_RDY 0x10// ReadOnly: indicate USB receiving FIFO ready status (not empty)
#define bUMS_BUS_RESET 0x08// ReadOnly: indicate USB bus reset status
#define bUMS_SUSPEND 0x04// ReadOnly: indicate USB suspend status
__sfr __at (0xDB) USB_RX_LEN;// ReadOnly: USB receiving length
__sfr __at (0xDC) UEP0_CTRL;// endpoint 0 control
__sfr __at (0xDD) UEP0_T_LEN;// endpoint 0 transmittal length
__sfr __at (0xDE) UEP4_CTRL;// endpoint 4 control
__sfr __at (0xDF) UEP4_T_LEN;// endpoint 4 transmittal length
__sfr __at (0xE1) USB_INT_EN;// USB interrupt enable
#define bUIE_DEV_SOF 0x80// enable interrupt for SOF received
#define bUIE_DEV_NAK 0x40// enable interrupt for NAK responded
#define bUIE_FIFO_OV 0x10// enable interrupt for FIFO overflow
#define bUIE_SUSPEND 0x04// enable interrupt for USB suspend or resume event
#define bUIE_TRANSFER 0x02// enable interrupt for USB transfer completion
#define bUIE_BUS_RST 0x01// enable interrupt for USB bus reset event
__sfr __at (0xE2) USB_CTRL;// USB base control
#define bUC_LOW_SPEED 0x40// enable USB low speed: 0=full speed, 1=low speed
#define bUC_DEV_PU_EN 0x20// USB device enable and internal pullup resistance enable
#define bUC_SYS_CTRL1 0x20// USB system control high bit
#define bUC_SYS_CTRL0 0x10// USB system control low bit
#define MASK_UC_SYS_CTRL 0x30// bit mask of USB system control
// bUC_SYS_CTRL1 & bUC_SYS_CTRL0: USB system control
//   00: disable USB device and disable internal pullup resistance
//   01: enable USB device and disable internal pullup resistance, need external pullup resistance
//   1x: enable USB device and enable internal pullup resistance
#define bUC_INT_BUSY 0x08// enable automatic responding busy during interrupt flag UIF_TRANSFER valid
#define bUC_RESET_SIE 0x04// force reset USB SIE, need software clear
#define bUC_CLR_ALL 0x02// force clear FIFO and count of USB
#define bUC_DMA_EN 0x01// DMA enable and DMA interrupt enable for USB
__sfr __at (0xE3) USB_DEV_AD;// USB device address, lower 7 bits for USB device address
#define bUDA_GP_BIT 0x80// general purpose bit
#define MASK_USB_ADDR 0x7F// bit mask for USB device address
// _sfr16 __at (0xE4) UEP2_DMA;// endpoint 2 buffer start address, little-endian
__sfr __at (0xE4) UEP2_DMA_L;// endpoint 2 buffer start address low byte
__sfr __at (0xE5) UEP2_DMA_H;// endpoint 2 buffer start address high byte
// _sfr16 __at (0xE6) UEP3_DMA;// endpoint 3 buffer start address, little-endian
__sfr __at (0xE6) UEP3_DMA_L;// endpoint 3 buffer start address low byte
__sfr __at (0xE7) UEP3_DMA_H;// endpoint 3 buffer start address high byte
__sfr __at (0xEA) UEP4_1_MOD;// endpoint 4/1 mode
#define bUEP1_RX_EN 0x80// enable USB endpoint 1 receiving (OUT)
#define bUEP1_TX_EN 0x40// enable USB endpoint 1 transmittal (IN)
#define bUEP1_BUF_MOD 0x10// buffer mode of USB endpoint 1
// bUEPn_RX_EN & bUEPn_TX_EN & bUEPn_BUF_MOD: USB endpoint 1/2/3 buffer mode, buffer start address is UEPn_DMA
//   0 0 x:  disable endpoint and disable buffer
//   1 0 0:  64 bytes buffer for receiving (OUT endpoint)
//   1 0 1:  dual 64 bytes buffer by toggle bit bUEP_R_TOG selection for receiving (OUT endpoint), total=128bytes
//   0 1 0:  64 bytes buffer for transmittal (IN endpoint)
//   0 1 1:  dual 64 bytes buffer by toggle bit bUEP_T_TOG selection for transmittal (IN endpoint), total=128bytes
//   1 1 0:  64 bytes buffer for receiving (OUT endpoint) + 64 bytes buffer for transmittal (IN endpoint), total=128bytes
//   1 1 1:  dual 64 bytes buffer by bUEP_R_TOG selection for receiving (OUT endpoint) + dual 64 bytes buffer by bUEP_T_TOG selection for transmittal (IN endpoint), total=256bytes
#define bUEP4_RX_EN 0x08// enable USB endpoint 4 receiving (OUT)
#define bUEP4_TX_EN 0x04// enable USB endpoint 4 transmittal (IN)
// bUEP4_RX_EN & bUEP4_TX_EN: USB endpoint 4 buffer mode, buffer start address is UEP0_DMA
//   0 0:  single 64 bytes buffer for endpoint 0 receiving & transmittal (OUT & IN endpoint)
//   1 0:  single 64 bytes buffer for endpoint 0 receiving & transmittal (OUT & IN endpoint) + 64 bytes buffer for endpoint 4 receiving (OUT endpoint), total=128bytes
//   0 1:  single 64 bytes buffer for endpoint 0 receiving & transmittal (OUT & IN endpoint) + 64 bytes buffer for endpoint 4 transmittal (IN endpoint), total=128bytes
//   1 1:  single 64 bytes buffer for endpoint 0 receiving & transmittal (OUT & IN endpoint)
//           + 64 bytes buffer for endpoint 4 receiving (OUT endpoint) + 64 bytes buffer for endpoint 4 transmittal (IN endpoint), total=192bytes
__sfr __at (0xEB) UEP2_3_MOD;// endpoint 2/3 mode
#define bUEP3_RX_EN 0x80// enable USB endpoint 3 receiving (OUT)
#define bUEP3_TX_EN 0x40// enable USB endpoint 3 transmittal (IN)
#define bUEP3_BUF_MOD 0x10// buffer mode of USB endpoint 3
#define bUEP2_RX_EN 0x08// enable USB endpoint 2 receiving (OUT)
#define bUEP2_TX_EN 0x04// enable USB endpoint 2 transmittal (IN)
#define bUEP2_BUF_MOD 0x01// buffer mode of USB endpoint 2
// _sfr16 __at (0xEC) UEP0_DMA;// endpoint 0 buffer start address, little-endian
__sfr __at (0xEC) UEP0_DMA_L;// endpoint 0 buffer start address low byte
__sfr __at (0xED) UEP0_DMA_H;// endpoint 0 buffer start address high byte
// _sfr16 __at (0xEE) UEP1_DMA;// endpoint 1 buffer start address, little-endian
__sfr __at (0xEE) UEP1_DMA_L;// endpoint 1 buffer start address low byte
__sfr __at (0xEF) UEP1_DMA_H;// endpoint 1 buffer start address high byte

/*----- XDATA: xRAM ------------------------------------------*/

#define XDATA_RAM_SIZE 0x0400// size of expanded xRAM, xdata SRAM embedded chip

/*----- Reference Information --------------------------------------------*/
#define ID_CH552 0x52// chip ID
#define ID_CH551 0x51// chip ID

/* Interrupt routine address and interrupt number */
#define INT_ADDR_INT0 0x0003// interrupt vector address for INT0
#define INT_ADDR_TMR0 0x000B// interrupt vector address for timer0
#define INT_ADDR_INT1 0x0013// interrupt vector address for INT1
#define INT_ADDR_TMR1 0x001B// interrupt vector address for timer1
#define INT_ADDR_UART0 0x0023// interrupt vector address for UART0
#define INT_ADDR_TMR2 0x002B// interrupt vector address for timer2
#define INT_ADDR_SPI0 0x0033// interrupt vector address for SPI0
#define INT_ADDR_TKEY 0x003B// interrupt vector address for touch-key timer
#define INT_ADDR_USB 0x0043// interrupt vector address for USB
#define INT_ADDR_ADC 0x004B// interrupt vector address for ADC
#define INT_ADDR_UART1 0x0053// interrupt vector address for UART1
#define INT_ADDR_PWMX 0x005B// interrupt vector address for PWM1/2
#define INT_ADDR_GPIO 0x0063// interrupt vector address for GPIO
#define INT_ADDR_WDOG 0x006B// interrupt vector address for watch-dog timer
#define INT_NO_INT0 0// interrupt number for INT0
#define INT_NO_TMR0 1// interrupt number for timer0
#define INT_NO_INT1 2// interrupt number for INT1
#define INT_NO_TMR1 3// interrupt number for timer1
#define INT_NO_UART0 4// interrupt number for UART0
#define INT_NO_TMR2 5// interrupt number for timer2
#define INT_NO_SPI0 6// interrupt number for SPI0
#define INT_NO_TKEY 7// interrupt number for touch-key timer
#define INT_NO_USB 8// interrupt number for USB
#define INT_NO_ADC 9// interrupt number for ADC
#define INT_NO_UART1 10// interrupt number for UART1
#define INT_NO_PWMX 11// interrupt number for PWM1/2
#define INT_NO_GPIO 12// interrupt number for GPIO
#define INT_NO_WDOG 13// interrupt number for watch-dog timer

/* Special Program Space */
#define DATA_FLASH_ADDR 0xC000// start address of Data-Flash
#define BOOT_LOAD_ADDR 0x3800// start address of boot loader program
#define ROM_CFG_ADDR 0x3FF8// chip configuration information address
#define ROM_CHIP_ID_HX 0x3FFA// chip ID number highest byte (only low byte valid)
#define ROM_CHIP_ID_LO 0x3FFC// chip ID number low word
#define ROM_CHIP_ID_HI 0x3FFE// chip ID number high word

/*
New Instruction:   MOVX @DPTR1,A
Instruction Code:  0xA5
Instruction Cycle: 1
Instruction Operation:
   step-1. write ACC @DPTR1 into xdata SRAM embedded chip
   step-2. increase DPTR1
ASM example:
       INC  XBUS_AUX
       MOV  DPTR,#TARGET_ADDR ;DPTR1
       DEC  XBUS_AUX
       MOV  DPTR,#SOURCE_ADDR ;DPTR0
       MOV  R7,#xxH
 LOOP: MOVX A,@DPTR ;DPTR0
       INC  DPTR    ;DPTR0, if need
       DB   0A5H    ;MOVX @DPTR1,A & INC DPTR1
       DJNZ R7,LOOP
*/

#ifdef __cplusplus
}
#endif

#endif// __CH552_H__

#ifndef __USB_DEF__
#define __USB_DEF__

#ifdef __cplusplus
extern "C" {
#endif

/*----- USB constant and structure define --------------------------------*/

/* USB PID */
#ifndef USB_PID_SETUP
#define USB_PID_NULL 0x00/* reserved PID */
#define USB_PID_SOF 0x05
#define USB_PID_SETUP 0x0D
#define USB_PID_IN 0x09
#define USB_PID_OUT 0x01
#define USB_PID_ACK 0x02
#define USB_PID_NAK 0x0A
#define USB_PID_STALL 0x0E
#define USB_PID_DATA0 0x03
#define USB_PID_DATA1 0x0B
#define USB_PID_PRE 0x0C
#endif

/* USB standard device request code */
#ifndef USB_GET_DESCRIPTOR
#define USB_GET_STATUS 0x00
#define USB_CLEAR_FEATURE 0x01
#define USB_SET_FEATURE 0x03
#define USB_SET_ADDRESS 0x05
#define USB_GET_DESCRIPTOR 0x06
#define USB_SET_DESCRIPTOR 0x07
#define USB_GET_CONFIGURATION 0x08
#define USB_SET_CONFIGURATION 0x09
#define USB_GET_INTERFACE 0x0A
#define USB_SET_INTERFACE 0x0B
#define USB_SYNCH_FRAME 0x0C
#endif

/* USB hub class request code */
#ifndef HUB_GET_DESCRIPTOR
#define HUB_GET_STATUS 0x00
#define HUB_CLEAR_FEATURE 0x01
#define HUB_GET_STATE 0x02
#define HUB_SET_FEATURE 0x03
#define HUB_GET_DESCRIPTOR 0x06
#define HUB_SET_DESCRIPTOR 0x07
#endif

/* USB HID class request code */
#ifndef HID_GET_REPORT
#define HID_GET_REPORT 0x01
#define HID_GET_IDLE 0x02
#define HID_GET_PROTOCOL 0x03
#define HID_SET_REPORT 0x09
#define HID_SET_IDLE 0x0A
#define HID_SET_PROTOCOL 0x0B
#endif

/* Bit define for USB request type */
#ifndef USB_REQ_TYP_MASK
#define USB_REQ_TYP_IN 0x80/* control IN, device to host */
#define USB_REQ_TYP_OUT 0x00/* control OUT, host to device */
#define USB_REQ_TYP_READ 0x80/* control read, device to host */
#define USB_REQ_TYP_WRITE 0x00/* control write, host to device */
#define USB_REQ_TYP_MASK 0x60/* bit mask of request type */
#define USB_REQ_TYP_STANDARD 0x00
#define USB_REQ_TYP_CLASS 0x20
#define USB_REQ_TYP_VENDOR 0x40
#define USB_REQ_TYP_RESERVED 0x60
#define USB_REQ_RECIP_MASK 0x1F/* bit mask of request recipient */
#define USB_REQ_RECIP_DEVICE 0x00
#define USB_REQ_RECIP_INTERF 0x01
#define USB_REQ_RECIP_ENDP 0x02
#define USB_REQ_RECIP_OTHER 0x03
#endif

/* USB request type for hub class request */
#ifndef HUB_GET_HUB_DESCRIPTOR
#define HUB_CLEAR_HUB_FEATURE 0x20
#define HUB_CLEAR_PORT_FEATURE 0x23
#define HUB_GET_BUS_STATE 0xA3
#define HUB_GET_HUB_DESCRIPTOR 0xA0
#define HUB_GET_HUB_STATUS 0xA0
#define HUB_GET_PORT_STATUS 0xA3
#define HUB_SET_HUB_DESCRIPTOR 0x20
#define HUB_SET_HUB_FEATURE 0x20
#define HUB_SET_PORT_FEATURE 0x23
#endif

/* Hub class feature selectors */
#ifndef HUB_PORT_RESET
#define HUB_C_HUB_LOCAL_POWER 0
#define HUB_C_HUB_OVER_CURRENT 1
#define HUB_PORT_CONNECTION 0
#define HUB_PORT_ENABLE 1
#define HUB_PORT_SUSPEND 2
#define HUB_PORT_OVER_CURRENT 3
#define HUB_PORT_RESET 4
#define HUB_PORT_POWER 8
#define HUB_PORT_LOW_SPEED 9
#define HUB_C_PORT_CONNECTION 16
#define HUB_C_PORT_ENABLE 17
#define HUB_C_PORT_SUSPEND 18
#define HUB_C_PORT_OVER_CURRENT 19
#define HUB_C_PORT_RESET 20
#endif

/* USB descriptor type */
#ifndef USB_DESCR_TYP_DEVICE
#define USB_DESCR_TYP_DEVICE 0x01
#define USB_DESCR_TYP_CONFIG 0x02
#define USB_DESCR_TYP_STRING 0x03
#define USB_DESCR_TYP_INTERF 0x04
#define USB_DESCR_TYP_ENDP 0x05
#define USB_DESCR_TYP_QUALIF 0x06
#define USB_DESCR_TYP_SPEED 0x07
#define USB_DESCR_TYP_OTG 0x09
#define USB_DESCR_TYP_HID 0x21
#define USB_DESCR_TYP_REPORT 0x22
#define USB_DESCR_TYP_PHYSIC 0x23
#define USB_DESCR_TYP_CS_INTF 0x24
#define USB_DESCR_TYP_CS_ENDP 0x25
#define USB_DESCR_TYP_HUB 0x29
#endif

/* USB device class */
#ifndef USB_DEV_CLASS_HUB
#define USB_DEV_CLASS_RESERVED 0x00
#define USB_DEV_CLASS_AUDIO 0x01
#define USB_DEV_CLASS_COMMUNIC 0x02
#define USB_DEV_CLASS_HID 0x03
#define USB_DEV_CLASS_MONITOR 0x04
#define USB_DEV_CLASS_PHYSIC_IF 0x05
#define USB_DEV_CLASS_POWER 0x06
#define USB_DEV_CLASS_PRINTER 0x07
#define USB_DEV_CLASS_STORAGE 0x08
#define USB_DEV_CLASS_HUB 0x09
#define USB_DEV_CLASS_VEN_SPEC 0xFF
#endif

/* USB endpoint type and attributes */
#ifndef USB_ENDP_TYPE_MASK
#define USB_ENDP_DIR_MASK 0x80
#define USB_ENDP_ADDR_MASK 0x0F
#define USB_ENDP_TYPE_MASK 0x03
#define USB_ENDP_TYPE_CTRL 0x00
#define USB_ENDP_TYPE_ISOCH 0x01
#define USB_ENDP_TYPE_BULK 0x02
#define USB_ENDP_TYPE_INTER 0x03
#endif

#ifndef USB_DEVICE_ADDR
#define USB_DEVICE_ADDR 0x02/* 默认的USB设备地址 */
#endif
#ifndef DEFAULT_ENDP0_SIZE
#define DEFAULT_ENDP0_SIZE 8/* default maximum packet size for endpoint 0 */
#endif
#ifndef MAX_PACKET_SIZE
#define MAX_PACKET_SIZE 64/* maximum packet size */
#endif
#ifndef USB_BO_CBW_SIZE
#define USB_BO_CBW_SIZE 0x1F/* 命令块CBW的总长度 */
#define USB_BO_CSW_SIZE 0x0D/* 命令状态块CSW的总长度 */
#endif
#ifndef USB_BO_CBW_SIG0
#define USB_BO_CBW_SIG0 0x55/* 命令块CBW识别标志'USBC' */
#define USB_BO_CBW_SIG1 0x53
#define USB_BO_CBW_SIG2 0x42
#define USB_BO_CBW_SIG3 0x43
#define USB_BO_CSW_SIG0 0x55/* 命令状态块CSW识别标志'USBS' */
#define USB_BO_CSW_SIG1 0x53
#define USB_BO_CSW_SIG2 0x42
#define USB_BO_CSW_SIG3 0x53
#endif

typedef struct _USB_SETUP_REQ {
    UINT8 bRequestType;
    UINT8 bRequest;
    UINT8 wValueL;
    UINT8 wValueH;
    UINT8 wIndexL;
    UINT8 wIndexH;
    UINT8 wLengthL;
    UINT8 wLengthH;
} USB_SETUP_REQ, *PUSB_SETUP_REQ;

typedef USB_SETUP_REQ __xdata *PXUSB_SETUP_REQ;

typedef struct _USB_DEVICE_DESCR {
    UINT8 bLength;
    UINT8 bDescriptorType;
    UINT8 bcdUSBL;
    UINT8 bcdUSBH;
    UINT8 bDeviceClass;
    UINT8 bDeviceSubClass;
    UINT8 bDeviceProtocol;
    UINT8 bMaxPacketSize0;
    UINT8 idVendorL;
    UINT8 idVendorH;
    UINT8 idProductL;
    UINT8 idProductH;
    UINT8 bcdDeviceL;
    UINT8 bcdDeviceH;
    UINT8 iManufacturer;
    UINT8 iProduct;
    UINT8 iSerialNumber;
    UINT8 bNumConfigurations;
} USB_DEV_DESCR, *PUSB_DEV_DESCR;

typedef USB_DEV_DESCR __xdata *PXUSB_DEV_DESCR;

typedef struct _USB_CONFIG_DESCR {
    UINT8 bLength;
    UINT8 bDescriptorType;
    UINT8 wTotalLengthL;
    UINT8 wTotalLengthH;
    UINT8 bNumInterfaces;
    UINT8 bConfigurationValue;
    UINT8 iConfiguration;
    UINT8 bmAttributes;
    UINT8 MaxPower;
} USB_CFG_DESCR, *PUSB_CFG_DESCR;

typedef USB_CFG_DESCR __xdata *PXUSB_CFG_DESCR;

typedef struct _USB_INTERF_DESCR {
    UINT8 bLength;
    UINT8 bDescriptorType;
    UINT8 bInterfaceNumber;
    UINT8 bAlternateSetting;
    UINT8 bNumEndpoints;
    UINT8 bInterfaceClass;
    UINT8 bInterfaceSubClass;
    UINT8 bInterfaceProtocol;
    UINT8 iInterface;
} USB_ITF_DESCR, *PUSB_ITF_DESCR;

typedef USB_ITF_DESCR __xdata *PXUSB_ITF_DESCR;

typedef struct _USB_ENDPOINT_DESCR {
    UINT8 bLength;
    UINT8 bDescriptorType;
    UINT8 bEndpointAddress;
    UINT8 bmAttributes;
    UINT8 wMaxPacketSizeL;
    UINT8 wMaxPacketSizeH;
    UINT8 bInterval;
} USB_ENDP_DESCR, *PUSB_ENDP_DESCR;

typedef USB_ENDP_DESCR __xdata *PXUSB_ENDP_DESCR;

typedef struct _USB_CONFIG_DESCR_LONG {
    USB_CFG_DESCR cfg_descr;
    USB_ITF_DESCR itf_descr;
    USB_ENDP_DESCR endp_descr[1];
} USB_CFG_DESCR_LONG, *PUSB_CFG_DESCR_LONG;

typedef USB_CFG_DESCR_LONG __xdata *PXUSB_CFG_DESCR_LONG;

typedef struct _USB_HUB_DESCR {
    UINT8 bDescLength;
    UINT8 bDescriptorType;
    UINT8 bNbrPorts;
    UINT8 wHubCharacteristicsL;
    UINT8 wHubCharacteristicsH;
    UINT8 bPwrOn2PwrGood;
    UINT8 bHubContrCurrent;
    UINT8 DeviceRemovable;
    UINT8 PortPwrCtrlMask;
} USB_HUB_DESCR, *PUSB_HUB_DESCR;

typedef USB_HUB_DESCR __xdata *PXUSB_HUB_DESCR;

typedef struct _USB_HID_DESCR {
    UINT8 bLength;
    UINT8 bDescriptorType;
    UINT8 bcdHIDL;
    UINT8 bcdHIDH;
    UINT8 bCountryCode;
    UINT8 bNumDescriptors;
    UINT8 bDescriptorTypeX;
    UINT8 wDescriptorLengthL;
    UINT8 wDescriptorLengthH;
} USB_HID_DESCR, *PUSB_HID_DESCR;

typedef USB_HID_DESCR __xdata *PXUSB_HID_DESCR;

typedef struct _UDISK_BOC_CBW {/* command of BulkOnly USB-FlashDisk */
    UINT8 mCBW_Sig0;
    UINT8 mCBW_Sig1;
    UINT8 mCBW_Sig2;
    UINT8 mCBW_Sig3;
    UINT8 mCBW_Tag0;
    UINT8 mCBW_Tag1;
    UINT8 mCBW_Tag2;
    UINT8 mCBW_Tag3;
    UINT8 mCBW_DataLen0;
    UINT8 mCBW_DataLen1;
    UINT8 mCBW_DataLen2;
    UINT8 mCBW_DataLen3;/* uppest byte of data length, always is 0 */
    UINT8 mCBW_Flag;/* transfer direction and etc. */
    UINT8 mCBW_LUN;
    UINT8 mCBW_CB_Len;/* length of command block */
    UINT8 mCBW_CB_Buf[16];/* command block buffer */
} UDISK_BOC_CBW, *PUDISK_BOC_CBW;

typedef UDISK_BOC_CBW __xdata *PXUDISK_BOC_CBW;

typedef struct _UDISK_BOC_CSW {/* status of BulkOnly USB-FlashDisk */
    UINT8 mCSW_Sig0;
    UINT8 mCSW_Sig1;
    UINT8 mCSW_Sig2;
    UINT8 mCSW_Sig3;
    UINT8 mCSW_Tag0;
    UINT8 mCSW_Tag1;
    UINT8 mCSW_Tag2;
    UINT8 mCSW_Tag3;
    UINT8 mCSW_Residue0;/* return: remainder bytes */
    UINT8 mCSW_Residue1;
    UINT8 mCSW_Residue2;
    UINT8 mCSW_Residue3;/* uppest byte of remainder length, always is 0 */
    UINT8 mCSW_Status;/* return: result status */
} UDISK_BOC_CSW, *PUDISK_BOC_CSW;

typedef UDISK_BOC_CSW __xdata *PXUDISK_BOC_CSW;

#ifdef __cplusplus
}
#endif

#endif// __USB_DEF__
