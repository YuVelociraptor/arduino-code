const int ledNum = 7;
const int leds[ledNum] = {7, 8, 9, 10, 11, 12, 13};

int ledBits[ledNum];

void setup() {

  for(int i = 0; i < ledNum; i++){
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {

  for(int i = 0; i < 128; i++){
    pika(i);
    delay(200);
  }
  delay(400);

  for(int i = 1; i < 128; i = i * 2){
    pika(i);
    delay(300);
  }
  delay(400);

  for(int i = 128; i > 0; i = i / 2){
    pika(i);
    delay(300);
  }
  delay(400);
}

void pika(int k){
  getBits(k);

  for(int i = 0; i < ledNum; i++){
    if(ledBits[i]){
      digitalWrite(leds[i], HIGH);
    }else{
      digitalWrite(leds[i], LOW);
    }
  }
}

void getBits(int value) {

  for(int bitIndex = 0; bitIndex < ledNum; bitIndex++){
    ledBits[bitIndex] = (value >> bitIndex) & 1;
  }
}
