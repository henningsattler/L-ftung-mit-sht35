#ifndef ESPEASY_CUSTOM_H
#define ESPEASY_CUSTOM_H

// Custom ESPEasy build for ESP-01 / ESP8266 with 1 MB flash
// Based on ESPEasy mega-20260720

// Keep the build small: only explicitly selected plugins/controllers.
#define CONTROLLER_SET_NONE
#define NOTIFIER_SET_NONE
#define PLUGIN_SET_NONE

// Required controller
#define USES_C005                       // Home Assistant / openHAB MQTT

// Required sensor plugins
#define USES_P004                       // DS18B20 / Dallas 1-Wire temperature
#define USES_P037                       // MQTT import
#define USES_P068                       // SHT30/SHT31/SHT35 (SHT3x)
// Required features
#define FEATURE_RULES 1
#define FEATURE_I2CMULTIPLEXER 1        // TCA9543A / TCA9548A etc.
#define FEATURE_I2C_DEVICE_SCAN 1

// ESP-01 default I2C pins (can still be changed in ESPEasy settings)
#ifdef ESP8266
  #define DEFAULT_PIN_I2C_SDA 0
  #define DEFAULT_PIN_I2C_SCL 2
#endif

// Helpful build identifier shown in System Info
#ifdef BUILD_GIT
  #undef BUILD_GIT
#endif
#define BUILD_GIT "ESP01-1M-SHT35-MQTT-DS18B20-Rules"

#endif // ESPEASY_CUSTOM_H
