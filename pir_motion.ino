int sensor = D1;
void setup() {
  pinMode(sensor,INPUT);
}

void loop() {
   int state = digitalRead(sensor);
    if(state == 1) {
      Serial.println("Motion detected!");
      delay(1000);
    }
    else {
      Serial.println("Motion absent!");
      delay(1000);
      }
}
