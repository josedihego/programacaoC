#include <NewPing.h>

#define TRIGGER_PIN 7
#define ECHO_PIN 6
#define BUZZER_PIN 9
#define DISTANCIA_MAXIMA 50 // em cm

NewPing sonar(TRIGGER_PIN, ECHO_PIN, DISTANCIA_MAXIMA);

int contador = 0;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int distancia = sonar.ping_cm();

  if (distancia > 0 && distancia < 50) {
    contador = contador+1;
    ativar_luz_som(contador);
    delay(1000);
  }

  delay(100); 
}

void ativar_luz_som(int quantidade) {
  for (int i = 0; i < quantidade; i = i +1) {
    digitalWrite(BUZZER_PIN, HIGH);
    delay(500);
    digitalWrite(BUZZER_PIN, LOW);
    delay(500);
  }
}
