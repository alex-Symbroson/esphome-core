#ifndef ESPHOME_DEFINES_H
#define ESPHOME_DEFINES_H

#ifdef ARDUINO_ARCH_ESP8266
#include <core_version.h>
#endif

#define ESPHOME_VERSION "1.13.0-dev"

#define HOT __attribute__((hot))
#define ESPDEPRECATED(msg) __attribute__((deprecated(msg)))
#define ALWAYS_INLINE __attribute__((always_inline))

#ifndef DOXYGEN
#define ESPHOME_NAMESPACE_BEGIN namespace esphome {
#define ESPHOME_NAMESPACE_END }
#define ESPHOME_NAMESPACE esphome
#else
#define ESPHOME_NAMESPACE_BEGIN / ## /
#define ESPHOME_NAMESPACE_END / ## /
#define ESPHOME_NAMESPACE
#endif

#ifndef ESPHOME_USE
// #define USE_WEB_SERVER
// //#define USE_OTA
// //#define USE_I2C
// #define USE_BINARY_SENSOR
// #define USE_GPIO_BINARY_SENSOR
// #define USE_STATUS_BINARY_SENSOR
// #define USE_SENSOR
// #define USE_WIFI_SIGNAL_SENSOR
// #define USE_OUTPUT
#ifdef ARDUINO_ARCH_ESP32
// //#define USE_LEDC_OUTPUT
#endif
// //#define USE_PCA9685_OUTPUT
// #define USE_GPIO_OUTPUT
#ifdef ARDUINO_ARCH_ESP8266
#ifndef ARDUINO_ESP8266_RELEASE_2_3_0
// #define USE_ESP8266_PWM_OUTPUT
#endif
#endif
// #define USE_LIGHT
// #define USE_SWITCH
// #define USE_OUTPUT_SWITCH
// //#define USE_REMOTE
// //#define USE_REMOTE_RECEIVER
// //#define USE_REMOTE_TRANSMITTER
// #define USE_GPIO_SWITCH
// #define USE_RESTART_SWITCH
// #define USE_SHUTDOWN_SWITCH
// #define USE_FAN
// #define USE_DEBUG_COMPONENT
// #define USE_DEEP_SLEEP
// #define USE_IO
// #define USE_TEMPLATE_SENSOR
#ifdef ARDUINO_ARCH_ESP32
// //#define USE_ESP32_TOUCH_BINARY_SENSOR
#endif
#ifdef ARDUINO_ARCH_ESP32
// //#define USE_ESP32_BLE_TRACKER
// //#define USE_ESP32_BLE_BEACON
#endif
// #define USE_ROTARY_ENCODER_SENSOR
// #define USE_TEMPLATE_BINARY_SENSOR
// #define USE_TEMPLATE_SWITCH
// #define USE_COVER
// #define USE_TEMPLATE_COVER
#ifdef ARDUINO_ARCH_ESP32
#if defined(ARDUINO_ESP32) || defined(DARDUINO_ESP32_DEV)
// #define USE_ESP32_HALL_SENSOR
#endif
// #define USE_ESP32_CAMERA
#endif
// #define USE_DUTY_CYCLE_SENSOR
// #define USE_STATUS_LED
// #define USE_SPI
// #define USE_UART
// #define USE_MHZ19
// #define USE_UART_SWITCH
// #define USE_UPTIME_SENSOR
// #define USE_LCD_DISPLAY
// #define USE_DISPLAY
// #define USE_TIME
// #define USE_TEXT_SENSOR
// #define USE_VERSION_TEXT_SENSOR
// #define USE_TEMPLATE_TEXT_SENSOR
// #define USE_ENDSTOP_COVER
// #define USE_TIME_BASED_COVER
// #define USE_STEPPER
// #define USE_TOTAL_DAILY_ENERGY_SENSOR
// #define USE_CUSTOM_SENSOR
// #define USE_CUSTOM_BINARY_SENSOR
// #define USE_CUSTOM_OUTPUT
// #define USE_CUSTOM_SWITCH
// #define USE_CUSTOM_TEXT_SENSOR
// #define USE_CUSTOM_COMPONENT
// #define USE_API
// #define USE_HOMEASSISTANT_TIME
// #define USE_HOMEASSISTANT_SENSOR
// #define USE_HOMEASSISTANT_TEXT_SENSOR
// #define USE_HOMEASSISTANT_BINARY_SENSOR
// #define USE_COPY_OUTPUT
// #define USE_WIFI_INFO_TEXT_SENSOR
// #define USE_SERVO
// #define USE_CLIMATE
#endif

#ifdef USE_REMOTE_RECEIVER
#ifndef USE_REMOTE
// #define USE_REMOTE
#endif
#ifndef USE_BINARY_SENSOR
// #define USE_BINARY_SENSOR
#endif
#endif
#ifdef USE_REMOTE_TRANSMITTER
#ifndef USE_REMOTE
// #define USE_REMOTE
#endif
#ifndef USE_SWITCH
// #define USE_SWITCH
#endif
#endif
#ifdef USE_ESP32_TOUCH_BINARY_SENSOR
#ifndef USE_BINARY_SENSOR
// #define USE_BINARY_SENSOR
#endif
#endif
#ifdef USE_ESP32_BLE_TRACKER
#ifndef USE_BINARY_SENSOR
// #define USE_BINARY_SENSOR
#endif
#ifndef USE_SENSOR
// #define USE_SENSOR
#endif
#endif
#ifdef USE_LIGHT
#ifndef USE_OUTPUT
// #define USE_OUTPUT
#endif
#endif

#if !defined(DONT_STORE_LOG_STR_IN_FLASH) && defined(ARDUINO_ARCH_ESP8266)
#ifndef USE_STORE_LOG_STR_IN_FLASH
// #define USE_STORE_LOG_STR_IN_FLASH
#endif
#endif

#endif  // ESPHOME_DEFINES_H
