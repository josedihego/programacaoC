#define TRIGGER_PIN 7
#define ECHO_PIN 6
#define BUZZER_PIN 9
#define DISTANCIA_MAXIMA 50 // em cm

int contador = 0;

void setup() {
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long duracao, distancia;
  
  digitalWrite(TRIGGER_PIN, LOW);  
  delayMicroseconds(2); 
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10); 
  digitalWrite(TRIGGER_PIN, LOW);

  duracao = pulseIn(ECHO_PIN, HIGH);
  distancia = duracao * 0.034 / 2;

  if (distancia > 0 && distancia < DISTANCIA_MAXIMA) {
    contador = contador + 1;
    ativar_luz_som(contador);
    delay(1000);
  }

  delay(100); 
}

void ativar_luz_som(int quantidade) {
  for (int i = 0; i < quantidade; i++) {
    digitalWrite(BUZZER_PIN, HIGH);
    tone(BUZZER_PIN, 4000);
    delay(500);
    digitalWrite(BUZZER_PIN, LOW);
    noTone(BUZZER_PIN);
    delay(500);
  }
}
