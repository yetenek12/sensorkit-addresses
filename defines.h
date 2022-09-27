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


// Air
#define ADDR_AIR_1              40 // Default
#define ADDR_AIR_2              41
#define ADDR_AIR_3              42
#define ADDR_AIR_4              43
#define ADDR_AIR_5              44
#define ADDR_AIR_6              45

#define ADDR_AIR_SF_MSB         30 // Sound Frequency MSB
#define ADDR_AIR_SF_LSB         31 // Sound Frequency LSB
#define ADDR_AIR_SA_MSB         32 // Sound Amplitude MSB
#define ADDR_AIR_SA_LSB         33 // Sound Amplitude LSB
#define ADDR_AIR_TMP_MSB	    34 // BME Temperature MSB
#define ADDR_AIR_TMP_LSB	    35 // BME Temperature LSB
#define ADDR_AIR_HUM_MSB	    36 // BME Humidity MSB
#define ADDR_AIR_HUM_LSB	    37 // BME Humidity LSB
#define ADDR_AIR_PRE_MSB	    38 // BME Pressure MSB
#define ADDR_AIR_PRE_LSB	    39 // BME Pressure LSB
#define ADDR_AIR_ALT_MSB	    40 // BME Altitiude MSB
#define ADDR_AIR_ALT_LSB	    41 // BME Altitiude LSB
#define ADDR_AIR_BME_C	        42 // Config: BME Filter Options
#define ADDR_AIR_BME_SEA_MSB    43 // Config: BME Sea Level MSB
#define ADDR_AIR_BME_SEA_LSB    44 // Config: BME Sea Level LSB
#define ADDR_AIR_CO2_MSB        45 // SGP30 CO2 MSB
#define ADDR_AIR_CO2_LSB        46 // SGP30 CO2 LSB
#define ADDR_AIR_TVOC_MSB       47 // SGP30 TVOC MSB
#define ADDR_AIR_TVOC_LSB       48 // SGP30 TVOC LSB
#define ADDR_AIR_H2_MSB         49 // SGP30 H2 MSB
#define ADDR_AIR_H2_LSB         50 // SGP30 H2 LSB
#define ADDR_AIR_ETH_MSB        51 // SGP30 ETHANOL MSB
#define ADDR_AIR_ETH_LSB        52 // SGP30 ETHANOL LSB
#define ADDR_AIR_LED            53 // LED


// Optics
#define ADDR_OPT_1              50 // Default
#define ADDR_OPT_2              51
#define ADDR_OPT_3              52
#define ADDR_OPT_4              53
#define ADDR_OPT_5              54
#define ADDR_OPT_6              55

#define ADDR_OPT_DIS_MSB        30 // Distance MSB
#define ADDR_OPT_DIS_LSB        31 // Distance LSB
#define ADDR_OPT_DIS_STA        32 // Distance Status
#define ADDR_OPT_DIS_M          33 // Config: Distance Reading Mode
#define ADDR_OPT_A_MSB          34 // UV A MSB
#define ADDR_OPT_A_LSB          35 // UV A LSB
#define ADDR_OPT_B_MSB          36 // UV B MSB
#define ADDR_OPT_B_LSB          37 // UV B LSB
#define ADDR_OPT_I_MSB          38 // UV Index MSB
#define ADDR_OPT_I_LSB          39 // UV Index LSB
#define ADDR_OPT_UV_I	        40 // Config: UV Integration Time
#define ADDR_OPT_UV_S	        41 // Config: UV setHighDynamic
#define ADDR_OPT_C_R            42 // Color Red
#define ADDR_OPT_C_G            43 // Color Green
#define ADDR_OPT_C_B            44 // Color Blue
#define ADDR_OPT_C_C            45 // Color Clear
#define ADDR_OPT_C_T            46 // Color Temp
#define ADDR_OPT_C_L            47 // Color Lux
#define ADDR_OPT_C_CONF         48 // Config: Color Sensor
#define ADDR_OPT_IR             49 // IR Sensor
#define ADDR_OPT_LED            50 // LED
#define ADDR_OPT_LEDR	        51
#define ADDR_OPT_LEDG           52
#define ADDR_OPT_LEDB           53
#define ADDR_OPT_LEDW           54
#define ADDR_OPT_LEDT           55 // Brightness


// IMU
#define ADDR_IMU_1             60 // Default
#define ADDR_IMU_2             61
#define ADDR_IMU_3             62
#define ADDR_IMU_4             63
#define ADDR_IMU_5             64
#define ADDR_IMU_6             65

#define ADDR_IMU_ACCX_MSB           30
#define ADDR_IMU_ACCX_LSB           31
#define ADDR_IMU_ACCY_MSB           32
#define ADDR_IMU_ACCY_LSB           33
#define ADDR_IMU_ACCZ_MSB           34
#define ADDR_IMU_ACCZ_LSB           35
#define ADDR_IMU_GYRX_MSB           36
#define ADDR_IMU_GYRX_LSB           37
#define ADDR_IMU_GYRY_MSB           38
#define ADDR_IMU_GYRY_LSB           39
#define ADDR_IMU_GYRZ_MSB           40
#define ADDR_IMU_GYRZ_LSB           41
#define ADDR_IMU_MAGX_MSB           42
#define ADDR_IMU_MAGX_LSB           43
#define ADDR_IMU_MAGY_MSB           44
#define ADDR_IMU_MAGY_LSB           45
#define ADDR_IMU_MAGZ_MSB           46
#define ADDR_IMU_MAGZ_LSB           47
#define ADDR_IMU_HDG                48
#define ADDR_IMU_TEMP9_MSB          49
#define ADDR_IMU_TEMP9_LSB          50
#define ADDR_IMU_ACCMODE            51
#define ADDR_IMU_GYRMODE            52
#define ADDR_IMU_CMPMODE            53


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


// Motor Driver
#define ADDR_MOTOR_1             80 // Default
#define ADDR_MOTOR_2             81
#define ADDR_MOTOR_3             82
#define ADDR_MOTOR_4             83
#define ADDR_MOTOR_5             84
#define ADDR_MOTOR_6             85

#define ADDR_MOTOR_LEFT_SPEED        30
#define ADDR_MOTOR_LEFT_DIR          31
#define ADDR_MOTOR_RIGHT_SPEED       32
#define ADDR_MOTOR_RIGHT_DIR         33

#define ADDR_MOTOR_RIGHT_VEL_MSB     34
#define ADDR_MOTOR_RIGHT_VEL_LSB     35
#define ADDR_MOTOR_RIGHT_POS_MSB     36
#define ADDR_MOTOR_RIGHT_POS_LSB     37
#define ADDR_MOTOR_LEFT_VEL_MSB      38
#define ADDR_MOTOR_LEFT_VEL_LSB      39
#define ADDR_MOTOR_LEFT_POS_MSB      40
#define ADDR_MOTOR_LEFT_POS_LSB      41
#define ADDR_MOTOR_BUS_VOLTAGE_MSB   42
#define ADDR_MOTOR_BUS_VOLTAGE_LSB   43


// LoRa
#define ADDR_LORA_1             90 // Default
#define ADDR_LORA_2             91
#define ADDR_LORA_3             92
#define ADDR_LORA_4             93
#define ADDR_LORA_5             94
#define ADDR_LORA_6             95

#define ADDR_LORA_GPS_LNG_MSB        30
#define ADDR_LORA_GPS_LNG_LSB        31
#define ADDR_LORA_GPS_LAT_MSB        32
#define ADDR_LORA_GPS_LAT_LSB        33
#define ADDR_LORA_GPS_ALT_MSB        34
#define ADDR_LORA_GPS_ALT_LSB        35
#define ADDR_LORA_GPS_SAT            36
#define ADDR_LORA_BME_TEMP_MSB       37
#define ADDR_LORA_BME_TEMP_LSB       38
#define ADDR_LORA_BME_HUM_MSB        39
#define ADDR_LORA_BME_HUM_LSB        40
#define ADDR_LORA_BME_PRESSURE_MSB   41
#define ADDR_LORA_BME_PRESSURE_LSB   42
#define ADDR_LORA_BME_ALT_MSB        43
#define ADDR_LORA_BME_ALT_LSB        44
#define ADDR_LORA_CO2_MSB            45
#define ADDR_LORA_CO2_LSB            46
#define ADDR_LORA_TVOC_MSB           47
#define ADDR_LORA_TVOC_LSB           48
#define ADDR_LORA_H2_MSB             49
#define ADDR_LORA_H2_LSB             50
#define ADDR_LORA_ETH_MSB            51
#define ADDR_LORA_ETH_LSB            52
#define ADDR_LORA_RSSI               53
#define ADDR_LORA_DATE_YEAR          54
#define ADDR_LORA_DATE_MONTH         55
#define ADDR_LORA_DATE_DAY           56
#define ADDR_LORA_TIME_HOUR          57
#define ADDR_LORA_TIME_MIN           58
#define ADDR_LORA_TIME_SEC           59

#endif