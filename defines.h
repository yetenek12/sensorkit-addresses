#ifndef DEFINES_H
#define DEFINES_H

//General
/*
00: Type
02: Rev
04: Serial No1 MSB
05: Serial No2 LSB
06: Hardware Rev
08: Firmware Ver
*/

#define HOLDING_REGISTERS   0x03
#define INPUT_REGISTERS     0x04

#define MAX_SLAVE_RESPONSE_LENGTH   16        //default was 32
#define MODBUS_SPEED                38400

#define ADDR_LEDM	        10  // Led Mode: 0> Default 1> Programmable
#define ADDR_LEDR	        ADDR_LEDM+1
#define ADDR_LEDG           ADDR_LEDM+2
#define ADDR_LEDB           ADDR_LEDM+3
#define ADDR_LEDW           ADDR_LEDM+4
#define ADDR_LEDT           ADDR_LEDM+5 // Brightness

// IO Board
#define ADDR_IO             20
#define ADDR_IO_ADC1        ADDR_IO + 1
#define ADDR_IO_ADC2        ADDR_IO + 2
#define ADDR_IO_ADC3        ADDR_IO + 3
#define ADDR_IO_ADC4        ADDR_IO + 4
#define ADDR_IO_ADC1_V      ADDR_IO + 5
#define ADDR_IO_ADC2_V      ADDR_IO + 6
#define ADDR_IO_ADC3_V      ADDR_IO + 7
#define ADDR_IO_ADC4_V      ADDR_IO + 8
#define ADDR_IO_ADC_CONFIG  ADDR_IO + 9
#define ADDR_IO_A1          ADDR_IO + 10 // Output Ports
#define ADDR_IO_A2          ADDR_IO + 11
#define ADDR_IO_A3          ADDR_IO + 12
#define ADDR_IO_A4          ADDR_IO + 13
#define ADDR_IO_A5          ADDR_IO + 14
#define ADDR_IO_A6          ADDR_IO + 15
#define ADDR_IO_A7          ADDR_IO + 16
#define ADDR_IO_A8          ADDR_IO + 17
#define ADDR_IO_B1          ADDR_IO + 18 // Input Ports
#define ADDR_IO_B2          ADDR_IO + 19
#define ADDR_IO_B3          ADDR_IO + 20
#define ADDR_IO_B4          ADDR_IO + 21
#define ADDR_IO_B5          ADDR_IO + 22
#define ADDR_IO_B6          ADDR_IO + 23
#define ADDR_IO_B7          ADDR_IO + 24
#define ADDR_IO_B8          ADDR_IO + 25



// AIR MIC SGP Module
#define ADDR_AMS            50
#define ADDR_AMS_SF         ADDR_AMS+1 // Sound Frequency
#define ADDR_AMS_SA         ADDR_AMS+2 // Sound Amplitude
#define ADDR_AMS_A          ADDR_AMS+3 // UV A
#define ADDR_AMS_B          ADDR_AMS+4 // UV B
#define ADDR_AMS_I          ADDR_AMS+5 // UV Index
#define ADDR_AMS_TMP	    ADDR_AMS+6 // BME Temperature
#define ADDR_AMS_HUM	    ADDR_AMS+7 // BME Humidity
#define ADDR_AMS_PRE	    ADDR_AMS+8 // BME Pressure
#define ADDR_AMS_ALT	    ADDR_AMS+9 // BME Altitiude
#define ADDR_AMS_BME_C	    ADDR_AMS+10 // Config: BME Filter Options
#define ADDR_AMS_CO2        ADDR_AMS+11 // SGP30 CO2
#define ADDR_AMS_TVOC       ADDR_AMS+12 // SGP30 TVOC
#define ADDR_AMS_H2         ADDR_AMS+13 // SGP30 H2
#define ADDR_AMS_ETH        ADDR_AMS+14 // SGP30 ETHANOL


// TOF RGB UV Module
#define ADDR_TRU            70
#define ADDR_TRU_DIS        ADDR_TRU+1 // Distance
#define ADDR_TRU_DIS_STA    ADDR_TRU+2 // Distance Status
#define ADDR_TRU_DIS_M      ADDR_TRU+3 // Config: Distance Reading Mode
#define ADDR_TRU_A          ADDR_TRU+4 // UV A
#define ADDR_TRU_B          ADDR_TRU+5 // UV B
#define ADDR_TRU_I          ADDR_TRU+6 // UV Index
#define ADDR_TRU_UV_I	    ADDR_TRU+7 // Config: UV Integration Time
#define ADDR_TRU_UV_S	    ADDR_TRU+8 // Config: UV setHighDynamic
#define ADDR_TRU_C_R        ADDR_TRU+9 // Color Red
#define ADDR_TRU_C_G        ADDR_TRU+10 // Color Green
#define ADDR_TRU_C_B        ADDR_TRU+11 // Color Blue
#define ADDR_TRU_C_C        ADDR_TRU+12 // Color C
#define ADDR_TRU_C_T        ADDR_TRU+13 // Color Temp
#define ADDR_TRU_C_L        ADDR_TRU+14 // Color Temp
#define ADDR_TRU_C_CONF     ADDR_TRU+15 // Color Config
#define ADDR_TRU_IR         ADDR_TRU+16 // IR Sensor



// //OLED
// #define ADDR_OLED           60 //60 or 61

// //PT1000 MAX31865 TEMPERATURE SENSOR
// #define ADDR_TEMP           65
// //#define ADDR_TEMPERATURE    50

// //CCS811 AIR QUALITY
// #define ADDR_AQ             70
// #define ADDR_CO2            ADDR_AQ
// #define ADDR_TVOC           ADDR_AQ+1
// #define ADDR_H2             ADDR_AQ+2
// #define ADDR_ETH            ADDR_AQ+3


// #define ADDR_MOTOR       85
// #define ADDR_MOTOR_MODE  ADDR_MOTOR
// #define ADDR_SDIR        ADDR_MOTOR+1             //Set direction
// #define ADDR_SSPD        ADDR_MOTOR+2           //Set speed
// #define ADDR_CDIR        ADDR_MOTOR+3             //Current direction
// #define ADDR_CSPD        ADDR_MOTOR+4             //Current speed
// #define ADDR_ACONS       ADDR_MOTOR+5             //Current consumption
// #define ADDR_ALIMIT      ADDR_MOTOR+6             //Current consumption
// #endif


// //ICM-20948 9DoF Sensor
// #define ADDR_DOF9        95
// #define ADDR_ACCX        ADDR_DOF9
// #define ADDR_ACCY        ADDR_DOF9+1
// #define ADDR_ACCZ        ADDR_DOF9+2
// #define ADDR_GYRX        ADDR_DOF9+3
// #define ADDR_GYRY        ADDR_DOF9+4
// #define ADDR_GYRZ        ADDR_DOF9+5
// #define ADDR_MAGX        ADDR_DOF9+6
// #define ADDR_MAGY        ADDR_DOF9+7
// #define ADDR_MAGZ        ADDR_DOF9+8
// #define ADDR_HDG         ADDR_DOF9+9
// #define ADDR_TEMP9       ADDR_DOF9+10
// #define ADDR_ACCMODE     ADDR_DOF9+11
// #define ADDR_GYRMODE     ADDR_DOF9+12
// #define ADDR_CMPMODE     ADDR_DOF9+13


#endif