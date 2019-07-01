/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "TWKI"
#define USBD_PRODUCT_STRING     "Paparazzi Tawaki v1.0"

#define LED0_PIN                PD15
#define LED1_PIN                PA10
#define LED2_PIN                PC7
#define LED3_PIN                PD10

//#define USE_BEEPER
//#define BEEPER_PIN              PB0
//#define BEEPER_INVERTED

#define ENABLE_DSHOT_DMAR       true

// *************** Gyro & ACC **********************
#define USE_SPI
#define USE_SPI_DEVICE_4

#define SPI4_SCK_PIN            PE2
#define SPI4_MISO_PIN           PE5
#define SPI4_MOSI_PIN           PB6

#define USE_GYRO
#define USE_GYRO_SPI_MPU6500

#define GYRO_1_CS_PIN           PE4
#define GYRO_1_SPI_INSTANCE     SPI4

#define USE_ACC
#define USE_ACC_SPI_MPU6500

#define GYRO_1_ALIGN            CW0_DEG

// *************** OSD **************************

//#define USE_SPI_DEVICE_2
//#define SPI2_SCK_PIN            PD3
//#define SPI2_MISO_PIN           PB14
//#define SPI2_MOSI_PIN           PB15

//#define USE_MAX7456
//#define MAX7456_SPI_INSTANCE    SPI2
//#define MAX7456_SPI_CS_PIN      PB12


// *************** FLASH *****************************
//#define USE_SPI_DEVICE_1
//#define SPI1_SCK_PIN            PA5
//#define SPI1_MISO_PIN           PA6
//#define SPI1_MOSI_PIN           PA7


//#define USE_FLASHFS
//#define USE_FLASH_M25P16
//#define FLASH_CS_PIN            PA2
//#define FLASH_SPI_INSTANCE      SPI1
//#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

// *************** UART *****************************
#define USE_VCP
#define USE_USB_DETECT

#define USE_UART2
#define UART2_RX_PIN            PD6
#define UART2_TX_PIN            PD5

#define USE_UART3
#define UART3_RX_PIN            PD9
#define UART3_TX_PIN            PD8

#define USE_UART4
#define UART4_RX_PIN            PA1
#define UART4_TX_PIN            PA0

#define USE_UART6
#define UART6_RX_PIN            PC6

#define USE_UART7
#define UART7_RX_PIN            PB3
#define UART7_TX_PIN            PA15

#define USE_UART8
#define UART8_RX_PIN            PE0

#define USE_SOFTSERIAL1

#define SERIAL_PORT_COUNT       8

#define DEFAULT_RX_FEATURE      FEATURE_RX_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART8

// *************** I2C *****************************

#define USE_I2C

#define USE_I2C_DEVICE_2
#define I2C2_SCL                PB10
#define I2C2_SDA                PB11

#define USE_I2C_DEVICE_4
#define I2C4_SCL                PD12
#define I2C4_SDA                PD13

// *************** ADC *****************************
#define USE_ADC
#define VBAT_ADC_PIN            PC0
//#define CURRENT_METER_ADC_PIN   PC1

#define DEFAULT_FEATURES        (FEATURE_TELEMETRY | FEATURE_SOFTSERIAL | FEATURE_AIRMODE)
#define DEFAULT_VOLTAGE_METER_SOURCE    VOLTAGE_METER_ADC
//#define DEFAULT_CURRENT_METER_SOURCE    CURRENT_METER_ADC
//#define CURRENT_METER_SCALE_DEFAULT 179

//#define USE_ESCSERIAL
//#define ESCSERIAL_TIMER_TX_PIN  PA3

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff
#define TARGET_IO_PORTE         0xffff

#define USABLE_TIMER_CHANNEL_COUNT 6
#define USED_TIMERS             ( TIM_N(4) | TIM_N(5) )
