const int ledPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {

  for(int i = 0; i < 255; i++){

    if(i > 150){
      digitalWrite(ledPin, LOW);
    }else{
      digitalWrite(ledPin, HIGH);
    }
    delay(100);
  }
}
