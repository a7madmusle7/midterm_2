/* 
 * Project  Smart Houseplant Watering  System
 * Author:  Ahmad Musleh     github @a7madmusle7
 * Date:    2025-March-24
 */



#include "Particle.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"
#include "neopixel.h"
#include "Colors.h"

const int OLED_RESET=-1;
Adafruit_SSD1306 display(OLED_RESET);

SYSTEM_MODE(SEMI_AUTOMATIC);
SYSTEM_THREAD(ENABLED);


void setup() {
    Serial.begin(9600);
    waitFor(Serial.isConnected,10000);
  
}


void loop() {
  
}
