#include <Arduino_LED_Matrix.h>
#include "animation.h"

ArduinoLEDMatrix matrix;

void setup() {
  matrix.begin();
  matrix.loadSequence(animation);
  matrix.play(true);
}

void loop() {
  // put your main code here, to run repeatedly:

}
