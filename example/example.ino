#include "MQ7.h"

MQ7 mq7(A0,5.0);

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println(mq7.getPPM());
    delay(1000);
}
