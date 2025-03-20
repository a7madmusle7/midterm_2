


#include "Particle.h"


SYSTEM_MODE(AUTOMATIC);


SYSTEM_THREAD(ENABLED);

SerialLogHandler logHandler(LOG_LEVEL_INFO);

const int PUMPPIN = D16;

void setup() {
pinMode(PUMPPIN, OUTPUT);

}

void loop() {
  digitalWrite(PUMPPIN, HIGH);
 
}
