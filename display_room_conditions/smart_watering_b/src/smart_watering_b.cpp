/* 
 * BME
 * Author: a7madmusle7
 * Date: 2025-Feb-25
 */

 #include "Particle.h"
 #include "Adafruit_BME280.h"
 #include "Adafruit_GFX.h"
 #include "Adafruit_SSD1306.h"
 
 SYSTEM_MODE(SEMI_AUTOMATIC);
 SYSTEM_THREAD(ENABLED);
SerialLogHandler logHandler(LOG_LEVEL_INFO);

 
const int OLED_RESET = -1;
Adafruit_SSD1306 display(OLED_RESET);

 float tempC;
 float pressPA;
 float humidRH;
 unsigned int currentTime;
 unsigned int lastSecond;
 
 bool status;
 const int hexAddress = 0x76;
 Adafruit_BME280 bme;
 
 void setup() {
 status = bme.begin(hexAddress);
   if (status == false) {
     Serial.printf("BME280 at address 0x76 failed to start");
    }
      display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
      display.display();
      delay(2000);
      display.clearDisplay();
      display.setTextSize(1);
      display.setTextColor(WHITE);

 }

 
 void loop() {

  tempC = bme.readTemperature();
   pressPA = bme.readPressure();
   humidRH = bme.readHumidity();
   currentTime = millis();

   if((currentTime-lastSecond)>5000){
    lastSecond = millis();
    Serial.printf("%.2f\n",tempC);
    Serial.printf("%.1f\n", pressPA);
    Serial.printf("%.2f\n", humidRH);
  
    display.clearDisplay();
    display.setCursor(0,0);
    display.printf("%.2f\n",tempC);
    display.display();

    display.printf("%.2f\n",pressPA);
    display.display();

    display.printf("%.2f\n",humidRH);
    display.display();

   }



    }
