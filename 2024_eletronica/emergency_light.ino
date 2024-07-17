const int pinLDR = A0;
const int pinLED_Red = 12;
const int pinLED_Green = 11;
int inputADC = 0;

void setup() {
  pinMode(pinLDR, INPUT);
  pinMode(pinLED_Red, OUTPUT);
  pinMode(pinLED_Green, OUTPUT);
}

void loop() {
  inputADC = analogRead(pinLDR);

  if(inputADC < 300){
    digitalWrite(pinLED_Red, HIGH);
  }
  else{
    digitalWrite(pinLED_Red,LOW);
  }
  if(inputADC > 300 && inputADC<500){
    digitalWrite(pinLED_Green, HIGH);
  }
  else{
    digitalWrite(pinLED_Green, LOW);
  }
  delay(100);

}
