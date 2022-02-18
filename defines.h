#ifndef DEFINES_H
#define DEFINES_H

#define HOLDING_REGISTERS   0x03
#define INPUT_REGISTERS     0x04

#define MAX_SLAVE_RESPONSE_LENGTH   16
#define MODBUS_SPEED                115200


// Common Registers
#define ADDR_C_TYPE             1  // Sensor Type
#define ADDR_C_SERIAL_NUMBER    2  // Serial Number (16 bit)
#define ADDR_C_MODEL_NUMBER     3  // Model Number (16 bit)
#define ADDR_C_SW_VER           4  // Software Version (16 bit)
#define ADDR_C_HW_VER           5  // Hardware Version (16 bit)
#define ADDR_C_DEF_I2C_ADDR     6  // Default I2C Address (8 bit)
#define ADDR_C_DEF_MODBUS_ADDR  7  // Default ModBus Address (16 bit)
#define ADDR_C_CURR_I2C_ADDR    8  // Current I2C Address (8 bit)
#define ADDR_C_CURR_MODBUS_ADDR 9  // Current ModBus Address (16 bit)
#define ADDR_C_SET_I2C_ADDR     10  // Set I2C Address (8 bit)
#define ADDR_C_SET_MODBUS_ADDR  11  // Set ModBus Address (16 bit)


// Led Registers
#define ADDR_LEDM	            20  // Led Mode: 0> Default 1> Programmable
#define ADDR_LEDR	            21
#define ADDR_LEDG               22
#define ADDR_LEDB               23
#define ADDR_LEDW               24
#define ADDR_LEDT               25 // Brightness


// IO Board
#define ADDR_IO_1               30
#define ADDR_IO_2               31
#define ADDR_IO_3               32
#define ADDR_IO_4               33
#define ADDR_IO_5               34
#define ADDR_IO_6               35

#define ADDR_IO_ADC1            30
#define ADDR_IO_ADC2            31
#define ADDR_IO_ADC3            32
#define ADDR_IO_ADC4            33
#define ADDR_IO_ADC1_V_MSB      34
#define ADDR_IO_ADC1_V_LSB      35
#define ADDR_IO_ADC2_V_MSB      36
#define ADDR_IO_ADC2_V_LSB      37
#define ADDR_IO_ADC3_V_MSB      38
#define ADDR_IO_ADC3_V_LSB      39
#define ADDR_IO_ADC4_V_MSB      40
#define ADDR_IO_ADC4_V_LSB      41
#define ADDR_IO_ADC_CONFIG      42
#define ADDR_IO_A1              43 // Output Ports
#define ADDR_IO_A2              44
#define ADDR_IO_A3              45
#define ADDR_IO_A4              46
#define ADDR_IO_A5              47
#define ADDR_IO_A6              48
#define ADDR_IO_A7              49
#define ADDR_IO_A8              50
#define ADDR_IO_B1              51 // Input Ports
#define ADDR_IO_B2              52
#define ADDR_IO_B3              53
#define ADDR_IO_B4              54
#define ADDR_IO_B5              55
#define ADDR_IO_B6              56
#define ADDR_IO_B7              57
#define ADDR_IO_B8              58


// AIR MIC SGP Module
#define ADDR_AMS_1              40 // Default
#define ADDR_AMS_2              41
#define ADDR_AMS_3              42
#define ADDR_AMS_4              43
#define ADDR_AMS_5              44
#define ADDR_AMS_6              45

#define ADDR_AMS_SF_MSB         30 // Sound Frequency MSB
#define ADDR_AMS_SF_LSB         31 // Sound Frequency LSB
#define ADDR_AMS_SA_MSB         32 // Sound Amplitude MSB
#define ADDR_AMS_SA_LSB         33 // Sound Amplitude LSB
#define ADDR_AMS_TMP_MSB	    34 // BME Temperature MSB
#define ADDR_AMS_TMP_LSB	    35 // BME Temperature LSB
#define ADDR_AMS_HUM_MSB	    36 // BME Humidity MSB
#define ADDR_AMS_HUM_LSB	    37 // BME Humidity LSB
#define ADDR_AMS_PRE_MSB	    38 // BME Pressure MSB
#define ADDR_AMS_PRE_LSB	    39 // BME Pressure LSB
#define ADDR_AMS_ALT_MSB	    40 // BME Altitiude MSB
#define ADDR_AMS_ALT_LSB	    41 // BME Altitiude LSB
#define ADDR_AMS_BME_C	        42 // Config: BME Filter Options
#define ADDR_AMS_BME_SEA_MSB    43 // Config: BME Sea Level MSB
#define ADDR_AMS_BME_SEA_LSB    44 // Config: BME Sea Level LSB
#define ADDR_AMS_CO2_MSB        45 // SGP30 CO2 MSB
#define ADDR_AMS_CO2_LSB        46 // SGP30 CO2 LSB
#define ADDR_AMS_TVOC_MSB       47 // SGP30 TVOC MSB
#define ADDR_AMS_TVOC_LSB       48 // SGP30 TVOC LSB
#define ADDR_AMS_H2_MSB         49 // SGP30 H2 MSB
#define ADDR_AMS_H2_LSB         50 // SGP30 H2 LSB
#define ADDR_AMS_ETH_MSB        51 // SGP30 ETHANOL MSB
#define ADDR_AMS_ETH_LSB        52 // SGP30 ETHANOL LSB
#define ADDR_AMS_LED            53 // LED


// TOF RGB UV Module
#define ADDR_TRU_1              50 // Default
#define ADDR_TRU_2              51
#define ADDR_TRU_3              52
#define ADDR_TRU_4              53
#define ADDR_TRU_5              54
#define ADDR_TRU_6              55

#define ADDR_TRU_DIS_MSB        30 // Distance MSB
#define ADDR_TRU_DIS_LSB        31 // Distance LSB
#define ADDR_TRU_DIS_STA        32 // Distance Status
#define ADDR_TRU_DIS_M          33 // Config: Distance Reading Mode
#define ADDR_TRU_A_MSB          34 // UV A MSB
#define ADDR_TRU_A_LSB          35 // UV A LSB
#define ADDR_TRU_B_MSB          36 // UV B MSB
#define ADDR_TRU_B_LSB          37 // UV B LSB
#define ADDR_TRU_I_MSB          38 // UV Index MSB
#define ADDR_TRU_I_LSB          39 // UV Index LSB
#define ADDR_TRU_UV_I	        40 // Config: UV Integration Time
#define ADDR_TRU_UV_S	        41 // Config: UV setHighDynamic
#define ADDR_TRU_C_R            42 // Color Red
#define ADDR_TRU_C_G            43 // Color Green
#define ADDR_TRU_C_B            44 // Color Blue
#define ADDR_TRU_C_C            45 // Color Clear
#define ADDR_TRU_C_T            46 // Color Temp
#define ADDR_TRU_C_L            47 // Color Lux
#define ADDR_TRU_C_CONF         48 // Config: Color Sensor
#define ADDR_TRU_IR             49 // IR Sensor
#define ADDR_TRU_LED            50 // LED


// 9DoF Sensor
#define ADDR_DOF9_1             60 // Default
#define ADDR_DOF9_2             61
#define ADDR_DOF9_3             62
#define ADDR_DOF9_4             63
#define ADDR_DOF9_5             64
#define ADDR_DOF9_6             65

#define ADDR_ACCX_MSB           30
#define ADDR_ACCX_LSB           31
#define ADDR_ACCY_MSB           32
#define ADDR_ACCY_LSB           33
#define ADDR_ACCZ_MSB           34
#define ADDR_ACCZ_LSB           35
#define ADDR_GYRX_MSB           36
#define ADDR_GYRX_LSB           37
#define ADDR_GYRY_MSB           38
#define ADDR_GYRY_LSB           39
#define ADDR_GYRZ_MSB           40
#define ADDR_GYRZ_LSB           41
#define ADDR_MAGX_MSB           42
#define ADDR_MAGX_LSB           43
#define ADDR_MAGY_MSB           44
#define ADDR_MAGY_LSB           45
#define ADDR_MAGZ_MSB           46
#define ADDR_MAGZ_LSB           47
#define ADDR_HDG                48
#define ADDR_TEMP9              49
#define ADDR_ACCMODE            50
#define ADDR_GYRMODE            51
#define ADDR_CMPMODE            52


// Temp Probe Sensor
#define ADDR_TEMP_1             70 // Default
#define ADDR_TEMP_2             71
#define ADDR_TEMP_3             72
#define ADDR_TEMP_4             73
#define ADDR_TEMP_5             74
#define ADDR_TEMP_6             75

#define ADDR_TEMP_S             30 // Status
#define ADDR_TEMP_T_MSB         31 // Temperature MSB
#define ADDR_TEMP_T_LSB         32 // Temperature LSB
#define ADDR_TEMP_LED           33 // LED

#endif