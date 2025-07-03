const int red = 4;
const int blue = 3;
const int green = 2;
const int photoresistor = A4;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(photoresistor);
  
  if(sensorValue < 450) {
    setColour(200, 0, 0);
  }
  else if (sensorValue > 800) {
    setColour(0 , 0, 200);
  }
  else {
    setColour(0, 200, 0);
  }
  delay(200);
}

void setColour(int r, int b, int g){
  analogWrite(red, r);
  analogWrite(blue, b);
  analogWrite(green, g);
}
