# MY92XX LED driver library for Arduino AVR and ESP8266

Arduino library for the Taiwan Mingyang (MY-Semi) MY9291 and MY9231 LED drivers. Based in the C driver by Maike Labs, included in the [Noduino SDK](https://github.com/icamgo/noduino-sdk).

[![version](https://img.shields.io/badge/version-3.0.1-brightgreen.svg)](CHANGELOG.md)
[![travis](https://travis-ci.org/xoseperez/my92xx.svg?branch=master)](https://travis-ci.org/xoseperez/my92xx)
[![donate](https://img.shields.io/badge/donate-PayPal-blue.svg)](https://www.paypal.com/cgi-bin/webscr?cmd=_donations&business=xose%2eperez%40gmail%2ecom&lc=US&no_note=0&currency_code=EUR&bn=PP%2dDonationsBF%3abtn_donate_LG%2egif%3aNonHostedGuest)
[![twitter](https://img.shields.io/twitter/follow/xoseperez.svg?style=social)](https://twitter.com/intent/follow?screen_name=xoseperez)

Tested with Arduino Core for ESP8266.

## Example

A simple example, turning the red LEDs on.

```
#include <my92xx.h>

#define MY92XX_MODEL    MY92XX_MODEL_MY9291     // The MY9291 is a 4-channel driver, usually for RGBW lights
#define MY92XX_CHIPS    1                       // No daisy-chain
#define MY92XX_DI_PIN   13                      // DI GPIO
#define MY92XX_DCKI_PIN 15                      // DCKI GPIO

my92xx _my92xx = my92xx(MY92XX_MODEL, MY92XX_CHIPS, MY92XX_DI_PIN, MY92XX_DCKI_PIN, MY92XX_COMMAND_DEFAULT);

void setup() {
    _my92xx.setChannel(0, 255); // assume channel 0 is RED
    _my92xx.setState(true);
    _my92xx.update();
}

void loop() {}

```

For more in-depth examples please check the examples folder.
