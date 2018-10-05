#include "my92xx.h"

#define MY92XX_MODEL        MY92XX_MODEL_MY9291
#define MY92XX_CHIPS        1
#define MY92XX_DI_PIN       13
#define MY92XX_DCKI_PIN     15

#define MY92XX_RED          0
#define MY92XX_GREEN        1
#define MY92XX_BLUE         2

#define RAINBOW_DELAY       10

// MY9291 with 4 channels (like the AiThinker Ai-Light)
my92xx _my92xx = my92xx(MY92XX_MODEL, MY92XX_CHIPS, MY92XX_DI_PIN, MY92XX_DCKI_PIN, MY92XX_COMMAND_DEFAULT);

void rainbow(unsigned char index) {

    if (index < 85) {
        _my92xx.setChannel(MY92XX_RED, index * 3);
        _my92xx.setChannel(MY92XX_GREEN, 255 - index * 3);
        _my92xx.setChannel(MY92XX_BLUE, 0);
    } else if (index < 170) {
        index -= 85;
        _my92xx.setChannel(MY92XX_RED, 255 - index * 3);
        _my92xx.setChannel(MY92XX_GREEN, 0);
        _my92xx.setChannel(MY92XX_BLUE, index * 3);
    } else {
        index -= 170;
        _my92xx.setChannel(MY92XX_RED, 0);
        _my92xx.setChannel(MY92XX_GREEN, index * 3);
        _my92xx.setChannel(MY92XX_BLUE, 255 - index * 3);
    }
    _my92xx.update();

}

void setup() {

    // Init serial port and clean garbage
    Serial.begin(115200);
    Serial.println();
    Serial.println();

    // MY9291
    _my92xx.setState(true);

}

void loop() {

    static unsigned char count = 0;
    static unsigned long last = millis();
    if (millis() - last > RAINBOW_DELAY) {
        last = millis();
        rainbow(count++);
    }

}
