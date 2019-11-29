# Introduction

This ESP32 component was created since I was unable to find a suitable WS2812 library to control an 'x' amount of leds using I2S for the esp-idf sdk. The code has been tested in a personal project.

# Usage

Currently it defaults to GPIO 25 for up to 8 leds. The settings can be changed in `ws2812.h`.

# Todo

- Support for RGBW leds
- Configuration through init + memory allocation 

## License

The code in this project is licensed under the MIT licence.