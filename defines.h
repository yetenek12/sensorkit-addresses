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
#define ADDR_LEDR	        1
#define ADDR_LEDG           2
#define ADDR_LEDB           3
#define ADDR_LEDW           4
#define ADDR_LEDT           5 // Brightness

// IO Board
#define ADDR_IO_1           20
#define ADDR_IO_2           21
#define ADDR_IO_3           22
#define ADDR_IO_4           23
#define ADDR_IO_5           24
#define ADDR_IO_6           25
#define ADDR_IO_ADC1        1
#define ADDR_IO_ADC2        2
#define ADDR_IO_ADC3        3
#define ADDR_IO_ADC4        4
#define ADDR_IO_ADC1_V      5
#define ADDR_IO_ADC2_V      6
#define ADDR_IO_ADC3_V      7
#define ADDR_IO_ADC4_V      8
#define ADDR_IO_ADC_CONFIG  9
#define ADDR_IO_A1          10 // Output Ports
#define ADDR_IO_A2          11
#define ADDR_IO_A3          12
#define ADDR_IO_A4          13
#define ADDR_IO_A5          14
#define ADDR_IO_A6          15
#define ADDR_IO_A7          16
#define ADDR_IO_A8          17
#define ADDR_IO_B1          18 // Input Ports
#define ADDR_IO_B2          19
#define ADDR_IO_B3          20
#define ADDR_IO_B4          21
#define ADDR_IO_B5          22
#define ADDR_IO_B6          23
#define ADDR_IO_B7          24
#define ADDR_IO_B8          25



// AIR MIC SGP Module
#define ADDR_AMS_1          30
#define ADDR_AMS_2          31
#define ADDR_AMS_3          32
#define ADDR_AMS_4          33
#define ADDR_AMS_5          34
#define ADDR_AMS_6          35
#define ADDR_AMS_SF         1 // Sound Frequency
#define ADDR_AMS_SA         2 // Sound Amplitude
#define ADDR_AMS_A          3 // UV A
#define ADDR_AMS_B          4 // UV B
#define ADDR_AMS_I          5 // UV Index
#define ADDR_AMS_TMP	    6 // BME Temperature
#define ADDR_AMS_HUM	    7 // BME Humidity
#define ADDR_AMS_PRE	    8 // BME Pressure
#define ADDR_AMS_ALT	    9 // BME Altitiude
#define ADDR_AMS_BME_C	    10 // Config: BME Filter Options
#define ADDR_AMS_CO2        11 // SGP30 CO2
#define ADDR_AMS_TVOC       12 // SGP30 TVOC
#define ADDR_AMS_H2         13 // SGP30 H2
#define ADDR_AMS_ETH        14 // SGP30 ETHANOL


// TOF RGB UV Module
#define ADDR_TRU_1          40
#define ADDR_TRU_2          41
#define ADDR_TRU_3          42
#define ADDR_TRU_4          43
#define ADDR_TRU_5          44
#define ADDR_TRU_6          45
#define ADDR_TRU_DIS        1 // Distance
#define ADDR_TRU_DIS_STA    2 // Distance Status
#define ADDR_TRU_DIS_M      3 // Config: Distance Reading Mode
#define ADDR_TRU_A          4 // UV A
#define ADDR_TRU_B          5 // UV B
#define ADDR_TRU_I          6 // UV Index
#define ADDR_TRU_UV_I	    7 // Config: UV Integration Time
#define ADDR_TRU_UV_S	    8 // Config: UV setHighDynamic
#define ADDR_TRU_C_R        9 // Color Red
#define ADDR_TRU_C_G        10 // Color Green
#define ADDR_TRU_C_B        11 // Color Blue
#define ADDR_TRU_C_C        12 // Color C
#define ADDR_TRU_C_T        13 // Color Temp
#define ADDR_TRU_C_L        14 // Color Temp
#define ADDR_TRU_C_CONF     15 // Color Config
#define ADDR_TRU_IR         16 // IR Sensor


// 9DoF Sensor
#define ADDR_DOF9_1      50
#define ADDR_DOF9_2      51
#define ADDR_DOF9_3      52
#define ADDR_DOF9_4      53
#define ADDR_DOF9_5      54
#define ADDR_DOF9_6      55
#define ADDR_ACCX        1
#define ADDR_ACCY        2
#define ADDR_ACCZ        3
#define ADDR_GYRX        4
#define ADDR_GYRY        5
#define ADDR_GYRZ        6
#define ADDR_MAGX        7
#define ADDR_MAGY        8
#define ADDR_MAGZ        9
#define ADDR_HDG         10
#define ADDR_TEMP9       11
#define ADDR_ACCMODE     12
#define ADDR_GYRMODE     13
#define ADDR_CMPMODE     14



// //OLED
// #define ADDR_OLED           60 //60 or 61

// //PT1000 MAX31865 TEMPERATURE SENSOR
// #define ADDR_TEMP           65
// //#define ADDR_TEMPERATURE    50

// #define ADDR_MOTOR       85
// #define ADDR_MOTOR_MODE  ADDR_MOTOR
// #define ADDR_SDIR        ADDR_MOTOR+1             //Set direction
// #define ADDR_SSPD        ADDR_MOTOR+2           //Set speed
// #define ADDR_CDIR        ADDR_MOTOR+3             //Current direction
// #define ADDR_CSPD        ADDR_MOTOR+4             //Current speed
// #define ADDR_ACONS       ADDR_MOTOR+5             //Current consumption
// #define ADDR_ALIMIT      ADDR_MOTOR+6             //Current consumption
// #endif

#endif