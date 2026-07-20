#define TRIG_PIN 7
#define ECHO_PIN 6
#define BUZZER_PIN 9
#define LED_PIN 8

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long duration;
  float distance;

  // Trigger ultrasonic pulse
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Measure echo duration
  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > 0 && distance < 5) {
    unsigned long startTime = millis();
    while (millis() - startTime < 3000) {
      digitalWrite(LED_PIN, HIGH);
      digitalWrite(BUZZER_PIN, LOW);  // LOW to turn ON
      delay(200);
      digitalWrite(LED_PIN, LOW);
      digitalWrite(BUZZER_PIN, HIGH); // HIGH to turn OFF
      delay(200);
    }
  } else {
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, HIGH); // HIGH to ensure it's OFF
  }

  delay(500); // Wait before next reading
}
