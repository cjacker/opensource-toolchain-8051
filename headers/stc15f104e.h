#ifndef __STC15F104E_H__
#define __STC15F104E_H__

/////////////////////////////////////////////////

//包含本头文件后,不用另外再包含"REG51.H"

//内核特殊功能寄存器        // 复位值   描述
__sfr __at (0xE0) ACC;//0000,0000 累加器Accumulator
__sfr __at (0xF0) B;//0000,0000 B寄存器
__sfr __at (0xD0) PSW;//0000,0000 程序状态字
__sbit __at (0xD0+7) CY;
__sbit __at (0xD0+6) AC;
__sbit __at (0xD0+5) F0;
__sbit __at (0xD0+4) RS1;
__sbit __at (0xD0+3) RS0;
__sbit __at (0xD0+2) OV;
__sbit __at (0xD0+1) F1;
__sbit __at (0xD0+0) P;
__sfr __at (0x81) SP;//0000,0111 堆栈指针
__sfr __at (0x82) DPL;//0000,0000 数据指针低字节
__sfr __at (0x83) DPH;//0000,0000 数据指针高字节

//I/O 口特殊功能寄存器
__sfr __at (0x80) P0;//1111,1111 端口0
__sbit __at (0x80+0) P00;
__sbit __at (0x80+1) P01;
__sbit __at (0x80+2) P02;
__sbit __at (0x80+3) P03;
__sbit __at (0x80+4) P04;
__sbit __at (0x80+5) P05;
__sbit __at (0x80+6) P06;
__sbit __at (0x80+7) P07;
__sfr __at (0x90) P1;//1111,1111 端口1
__sbit __at (0x90+0) P10;
__sbit __at (0x90+1) P11;
__sbit __at (0x90+2) P12;
__sbit __at (0x90+3) P13;
__sbit __at (0x90+4) P14;
__sbit __at (0x90+5) P15;
__sbit __at (0x90+6) P16;
__sbit __at (0x90+7) P17;
__sfr __at (0xA0) P2;//1111,1111 端口2
__sbit __at (0xA0+0) P20;
__sbit __at (0xA0+1) P21;
__sbit __at (0xA0+2) P22;
__sbit __at (0xA0+3) P23;
__sbit __at (0xA0+4) P24;
__sbit __at (0xA0+5) P25;
__sbit __at (0xA0+6) P26;
__sbit __at (0xA0+7) P27;
__sfr __at (0xB0) P3;//1111,1111 端口3
__sbit __at (0xB0+0) P30;
__sbit __at (0xB0+1) P31;
__sbit __at (0xB0+2) P32;
__sbit __at (0xB0+3) P33;
__sbit __at (0xB0+4) P34;
__sbit __at (0xB0+5) P35;
__sbit __at (0xB0+6) P36;
__sbit __at (0xB0+7) P37;
__sfr __at (0xC0) P4;//1111,1111 端口4
__sbit __at (0xC0+0) P40;
__sbit __at (0xC0+1) P41;
__sbit __at (0xC0+2) P42;
__sbit __at (0xC0+3) P43;
__sbit __at (0xC0+4) P44;
__sbit __at (0xC0+5) P45;
__sbit __at (0xC0+6) P46;
__sbit __at (0xC0+7) P47;
__sfr __at (0xC8) P5;//xxxx,1111 端口5
__sbit __at (0xC8+0) P50;
__sbit __at (0xC8+1) P51;
__sbit __at (0xC8+2) P52;
__sbit __at (0xC8+3) P53;
__sbit __at (0xC8+4) P54;
__sbit __at (0xC8+5) P55;
__sbit __at (0xC8+6) P56;
__sbit __at (0xC8+7) P57;
__sfr __at (0xE8) P6;//0000,0000 端口6
__sbit __at (0xE8+0) P60;
__sbit __at (0xE8+1) P61;
__sbit __at (0xE8+2) P62;
__sbit __at (0xE8+3) P63;
__sbit __at (0xE8+4) P64;
__sbit __at (0xE8+5) P65;
__sbit __at (0xE8+6) P66;
__sbit __at (0xE8+7) P67;
__sfr __at (0xF8) P7;//0000,0000 端口7
__sbit __at (0xF8+0) P70;
__sbit __at (0xF8+1) P71;
__sbit __at (0xF8+2) P72;
__sbit __at (0xF8+3) P73;
__sbit __at (0xF8+4) P74;
__sbit __at (0xF8+5) P75;
__sbit __at (0xF8+6) P76;
__sbit __at (0xF8+7) P77;
__sfr __at (0x94) P0M0;//0000,0000 端口0模式寄存器0
__sfr __at (0x93) P0M1;//0000,0000 端口0模式寄存器1
__sfr __at (0x92) P1M0;//0000,0000 端口1模式寄存器0
__sfr __at (0x91) P1M1;//0000,0000 端口1模式寄存器1
__sfr __at (0x96) P2M0;//0000,0000 端口2模式寄存器0
__sfr __at (0x95) P2M1;//0000,0000 端口2模式寄存器1
__sfr __at (0xB2) P3M0;//0000,0000 端口3模式寄存器0
__sfr __at (0xB1) P3M1;//0000,0000 端口3模式寄存器1
__sfr __at (0xB4) P4M0;//0000,0000 端口4模式寄存器0
__sfr __at (0xB3) P4M1;//0000,0000 端口4模式寄存器1
__sfr __at (0xCA) P5M0;//0000,0000 端口5模式寄存器0
__sfr __at (0xC9) P5M1;//0000,0000 端口5模式寄存器1
__sfr __at (0xCC) P6M0;//0000,0000 端口6模式寄存器0
__sfr __at (0xCB) P6M1;//0000,0000 端口6模式寄存器1
__sfr __at (0xE2) P7M0;//0000,0000 端口7模式寄存器0
__sfr __at (0xE1) P7M1;//0000,0000 端口7模式寄存器1

//系统管理特殊功能寄存器
__sfr __at (0x87) PCON;//0001,0000 电源控制寄存器
__sfr __at (0x8E) AUXR;//0000,0000 辅助寄存器
__sfr __at (0xA2) AUXR1;//0000,0000 辅助寄存器1
__sfr __at (0xA2) P_SW1;//0000,0000 外设端口切换寄存器1
__sfr __at (0x97) CLK_DIV;//xxxx,x000 时钟分频控制寄存器
__sfr __at (0xA1) BUS_SPEED;//xx10,x011 总线速度控制寄存器
__sfr __at (0x9D) P1ASF;//0000,0000 端口1模拟功能配置寄存器
__sfr __at (0xBA) P_SW2;//0000,0000 外设端口切换寄存器
__sfr __at (0xBB) IRC_CLKO;//0000,0000 内部振荡器时钟输出控制寄存器

//中断特殊功能寄存器
__sfr __at (0xA8) IE;//0000,0000 中断控制寄存器
__sbit __at (0xA8+7) EA;
__sbit __at (0xA8+6) ELVD;
__sbit __at (0xA8+5) EADC;
__sbit __at (0xA8+4) ES;
__sbit __at (0xA8+3) ET1;
__sbit __at (0xA8+2) EX1;
__sbit __at (0xA8+1) ET0;
__sbit __at (0xA8+0) EX0;
__sfr __at (0xB8) IP;//0000,0000 中断优先级寄存器
__sbit __at (0xB8+7) PPCA;
__sbit __at (0xB8+6) PLVD;
__sbit __at (0xB8+5) PADC;
__sbit __at (0xB8+4) PS;
__sbit __at (0xB8+3) PT1;
__sbit __at (0xB8+2) PX1;
__sbit __at (0xB8+1) PT0;
__sbit __at (0xB8+0) PX0;
__sfr __at (0xAF) IE2;//0000,0000 中断控制寄存器2
__sfr __at (0xB5) IP2;//xxxx,xx00 中断优先级寄存器2
__sfr __at (0x8F) INT_CLKO;//0000,0000 外部中断与时钟输出控制寄存器

//定时器特殊功能寄存器
__sfr __at (0x88) TCON;//0000,0000 T0/T1控制寄存器
__sbit __at (0x88+7) TF1;
__sbit __at (0x88+6) TR1;
__sbit __at (0x88+5) TF0;
__sbit __at (0x88+4) TR0;
__sbit __at (0x88+3) IE1;
__sbit __at (0x88+2) IT1;
__sbit __at (0x88+1) IE0;
__sbit __at (0x88+0) IT0;
__sfr __at (0x89) TMOD;//0000,0000 T0/T1模式寄存器
__sfr __at (0x8A) TL0;//0000,0000 T0低字节
__sfr __at (0x8B) TL1;//0000,0000 T1低字节
__sfr __at (0x8C) TH0;//0000,0000 T0高字节
__sfr __at (0x8D) TH1;//0000,0000 T1高字节
__sfr __at (0xD1) T4T3M;//0000,0000 T3/T4模式寄存器
__sfr __at (0xD1) T3T4M;//0000,0000 T3/T4模式寄存器
__sfr __at (0xD2) T4H;//0000,0000 T4高字节
__sfr __at (0xD3) T4L;//0000,0000 T4低字节
__sfr __at (0xD4) T3H;//0000,0000 T3高字节
__sfr __at (0xD5) T3L;//0000,0000 T3低字节
__sfr __at (0xD6) T2H;//0000,0000 T2高字节
__sfr __at (0xD7) T2L;//0000,0000 T2低字节
__sfr __at (0xAA) WKTCL;//0000,0000 掉电唤醒定时器低字节
__sfr __at (0xAB) WKTCH;//0000,0000 掉电唤醒定时器高字节
__sfr __at (0xC1) WDT_CONTR;//0000,0000 看门狗控制寄存器

//串行口特殊功能寄存器
__sfr __at (0x98) SCON;//0000,0000 串口1控制寄存器
__sbit __at (0x98+7) SM0;
__sbit __at (0x98+6) SM1;
__sbit __at (0x98+5) SM2;
__sbit __at (0x98+4) REN;
__sbit __at (0x98+3) TB8;
__sbit __at (0x98+2) RB8;
__sbit __at (0x98+1) TI;
__sbit __at (0x98+0) RI;
__sfr __at (0x99) SBUF;//xxxx,xxxx 串口1数据寄存器
__sfr __at (0x9A) S2CON;//0000,0000 串口2控制寄存器
__sfr __at (0x9B) S2BUF;//xxxx,xxxx 串口2数据寄存器
__sfr __at (0xAC) S3CON;//0000,0000 串口3控制寄存器
__sfr __at (0xAD) S3BUF;//xxxx,xxxx 串口3数据寄存器
__sfr __at (0x84) S4CON;//0000,0000 串口4控制寄存器
__sfr __at (0x85) S4BUF;//xxxx,xxxx 串口4数据寄存器
__sfr __at (0xA9) SADDR;//0000,0000 从机地址寄存器
__sfr __at (0xB9) SADEN;//0000,0000 从机地址屏蔽寄存器

//ADC 特殊功能寄存器
__sfr __at (0xBC) ADC_CONTR;//0000,0000 A/D转换控制寄存器
__sfr __at (0xBD) ADC_RES;//0000,0000 A/D转换结果高8位
__sfr __at (0xBE) ADC_RESL;//0000,0000 A/D转换结果低2位

//SPI 特殊功能寄存器
__sfr __at (0xCD) SPSTAT;//00xx,xxxx SPI状态寄存器
__sfr __at (0xCE) SPCTL;//0000,0100 SPI控制寄存器
__sfr __at (0xCF) SPDAT;//0000,0000 SPI数据寄存器

//IAP/ISP 特殊功能寄存器
__sfr __at (0xC2) IAP_DATA;//0000,0000 EEPROM数据寄存器
__sfr __at (0xC3) IAP_ADDRH;//0000,0000 EEPROM地址高字节
__sfr __at (0xC4) IAP_ADDRL;//0000,0000 EEPROM地址第字节
__sfr __at (0xC5) IAP_CMD;//xxxx,xx00 EEPROM命令寄存器
__sfr __at (0xC6) IAP_TRIG;//0000,0000 EEPRPM命令触发寄存器
__sfr __at (0xC7) IAP_CONTR;//0000,x000 EEPROM控制寄存器

//PCA/PWM 特殊功能寄存器
__sfr __at (0xD8) CCON;//00xx,xx00 PCA控制寄存器
__sbit __at (0xD8+7) CF;
__sbit __at (0xD8+6) CR;
__sbit __at (0xD8+2) CCF2;
__sbit __at (0xD8+1) CCF1;
__sbit __at (0xD8+0) CCF0;
__sfr __at (0xD9) CMOD;//0xxx,x000 PCA 工作模式寄存器
__sfr __at (0xE9) CL;//0000,0000 PCA计数器低字节
__sfr __at (0xF9) CH;//0000,0000 PCA计数器高字节
__sfr __at (0xDA) CCAPM0;//0000,0000 PCA模块0的PWM寄存器
__sfr __at (0xDB) CCAPM1;//0000,0000 PCA模块1的PWM寄存器
__sfr __at (0xDC) CCAPM2;//0000,0000 PCA模块2的PWM 寄存器
__sfr __at (0xEA) CCAP0L;//0000,0000 PCA模块0的捕捉/比较寄存器低字节
__sfr __at (0xEB) CCAP1L;//0000,0000 PCA模块1的捕捉/比较寄存器低字节
__sfr __at (0xEC) CCAP2L;//0000,0000 PCA模块2的捕捉/比较寄存器低字节
__sfr __at (0xF2) PCA_PWM0;//xxxx,xx00 PCA模块0的PWM寄存器
__sfr __at (0xF3) PCA_PWM1;//xxxx,xx00 PCA模块1的PWM寄存器
__sfr __at (0xF4) PCA_PWM2;//xxxx,xx00 PCA模块1的PWM寄存器
__sfr __at (0xFA) CCAP0H;//0000,0000 PCA模块0的捕捉/比较寄存器高字节
__sfr __at (0xFB) CCAP1H;//0000,0000 PCA模块1的捕捉/比较寄存器高字节
__sfr __at (0xFC) CCAP2H;//0000,0000 PCA模块2的捕捉/比较寄存器高字节

/////////////////////////////////////////////////

#endif

