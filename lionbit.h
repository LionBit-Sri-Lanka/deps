// lionbit.h
// Author: Niwantha Meepage 
// 2018 Jan 24


// C
// stem_hal.h /* Intial header file */
/*
 * Author             - Niwantha Meepage
 * Comapany           - Algobel Technologies & Innovations 
 * Created ALT Date         - 4 Nov 2019
 * Edited                   - 5 Dec 2019
 * 
 */

 // I2C Communication Pins 
/*
 *  GPIO 21 (SDA)
 *  GPIO 22 (SCL)
*/
/*
 * 
 * VSPI 
 * GPIO 23 -MOSI
 * GPIO 19 -MISO
 * GPIO 18 -CLK
 * GPIO 5  -CS
 * 
 * 
 * HSPI 
 * GPIO 13 -MOSI
 * GPIO 12 -MISO
 * GPIO 14 -CLK
 * GPIO 15 -CS

 */
// Inbuilt Display Unit 128*128 ST7735 Driver 
/* 
 *  32  - DC/A0 GPIO32, XTAL_32K_P (32.768 kHz crystal oscillator input), ADC1_CH4,TOUCH9, RTC_GPIO9
 *  33  - RESET GPIO33, XTAL_32K_N (32.768 kHz crystal oscillator output),ADC1_CH5, TOUCH8, RTC_GPIO8
 *  27  - CS    GPIO27, ADC2_CH7, TOUCH7, RTC_GPIO17, EMAC_RX_DV
 *  18  - CLK  (D11) **********************************************This D9 pin will engaged when display "ON or USE"*************************
 *  23  - MOSI (D9) **********************************************This D9 pin will engaged when display "ON or USE"*************************
*/

#define LED_BUILTIN (0)// GPIO0, ADC2_CH1, TOUCH1, RTC_GPIO11, CLK_OUT1,EMAC_TX_CLK

// Push button detail (IO02 -A and IO04 - B)
#define SWITCH_A    (2) //  GPIO2, ADC2_CH2, TOUCH2, RTC_GPIO12, HSPIWP, HS2_DATA0,SD_DATA0
#define SWITCH_B    (4) //  GPIO4, ADC2_CH0, TOUCH0, RTC_GPIO10, HSPIHD, HS2_DATA1,SD_DATA1, EMAC_TX_ER

//-------------------------------------------------------------------
//First Segment 
#define D0      (3)//Rx GPIO3, U0RXD, CLK_OUT2
#define D1      (1)//TX GPIO1, U0TXD, CLK_OUT3, EMAC_RXD2
//-------------------------------------------------------------------

//Please do not use while using QIO SPI mode ; Use only DIO flash mode 
#define D2      (9)//I/O   U1RX  GPIO9,  SD_DATA2, SPIHD, HS1_DATA2, U1RXD
#define D3      (10)//I/O  U1TX  GPIO10, SD_DATA3, SPIWP, HS1_DATA3, U1TXD
//-------------------------------------------------------------------


//Second Segment - Sector -01 (Voltage (*5v or 3.3V) can be selected by using D4-7 Jumper

#define D4      (16)//I/O   U2RX  GPIO16, HS1_DATA4, U2RXD, EMAC_CLK_OUT
#define D5      (17)//I/O   U2TX  GPIO17, HS1_DATA5, U2TXD, EMAC_CLK_OUT_180
#define D6      (21)//I/O   SDA GPIO21, VSPIHD, EMAC_TX_EN
#define D7      (22)//I/O   SCl GPIO22, VSPIWP, U0RTS, EMAC_TXD1

//Second Segment - Sector -02 (Voltage (*5v or 3.3V) can be selected by using D8-11 Jumper

#define D8      (5)//I/O  GPIO5, VSPICS0, HS1_DATA6, EMAC_RX_CLK
#define D9      (23)//I/O GPIO23, VSPID, HS1_STROBE  **********************************************Don not use when display "ON or USE"*************************
#define D10     (19)//I/O GPIO19, VSPIQ, U0CTS, EMAC_TXD0
#define D11     (18)//I/O GPIO18, VSPICLK, HS1_DATA7 **********************************************Don not use when display "ON or USE"*************************

//-------------------------------------------------------------------
// Analog to Digital Converter (Support 5V) 
#define A0 /*ADC2_CH3 */  (12) //I/O GPIO12, ADC2_CH5, TOUCH5, RTC_GPIO15, MTDI, HSPIQ, HS2_DATA2,SD_DATA2, EMAC_TXD3
#define A1 /*ADC1_CH0 */  (14) //I/O GPIO14, ADC2_CH6, TOUCH6, RTC_GPIO16, MTMS, HSPICLK, HS2_CLK,SD_CLK, EMAC_TXD2
#define A2 /*ADC2_CH6 */  (34) //GPIO34, ADC1_CH6, RTC_GPIO4 ***********************/////////////////////Connected LDR/////////////////////////////
#define A3 /*ADC1_CH7 */  (35) //GPIO35, ADC1_CH7, RTC_GPIO5
#define A4 /*ADC2_CH5 */  (15) //GPIO15, ADC2_CH3, TOUCH3, MTDO, HSPICS0, RTC_GPIO13, HS2_CMD,SD_CMD, EMAC_RXD3
#define A5 /*ADC2_CH4 */  (13) //GPIO13, ADC2_CH4, TOUCH4, RTC_GPIO14, MTCK, HSPID, HS2_DATA3,SD_DATA3, EMAC_RX_ER
//-------------------------------------------------------------------

//Digital to Analog Converter 
#define DA1               (25)  //I/O GPIO25, DAC_1, ADC2_CH8, RTC_GPIO6, EMAC_RXD0
#define DA2               (26)  //I/O GPIO26, DAC_2, ADC2_CH9, RTC_GPIO7, EMAC_RXD1

//-------------------------------------------------------------------

 #define VP 36  //  GPIO36, ADC1_CH0, RTC_GPIO0
 #define VN 39  //  GPIO39, ADC1_CH3, RTC_GPIO3


//-------------------------------------------------------------------

#define MTDO (A4) // JTAG SIGNAL -> TDO
#define MTDI (A0) // JTAG SIGNAL -> TDI
#define MTCK (A5) // JTAG SIGNAL -> TCK
#define MTMS (A1) // JTAG SIGNAL -> TMS