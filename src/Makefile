BOARD := nodemcuv2
UPLOAD_SPEED := 115200

CUSTOM_LIBS := ../lib

# Libs go here in the format `ARDUINO_LIBS += LibName`, one per line

BUILD_EXTRA_FLAGS += -DFASTLED_ESP8266_DMA -Os

BUILD_ROOT := build
ESP_ROOT := ../esp-toolchain
include ../makeEspArduino/makeEspArduino.mk
