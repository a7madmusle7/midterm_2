
#include "Particle.h"

SYSTEM_MODE(SEMI_AUTOMATIC);
SYSTEM_THREAD(ENABLED);
SerialLogHandler logHandler(LOG_LEVEL_INFO);

float moisturelevel;

void setup() {
  Serial.begin(9600);
  waitFor(Serial.isConnected,10000);
 
}

void loop() {

  moisturelevel = analogRead(D12);
  Serial.printf("%.2f\n",moisturelevel);
  delay(2000);
}