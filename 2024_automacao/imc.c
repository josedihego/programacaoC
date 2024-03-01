#include <stdio.h>

float altura = 1.60;
float massa = 44.44;
float gravidade = 9.81;

int main() {
  float IMC = massa / (altura * altura);
  printf("Seu IMC: %.2f", IMC);
  float peso = massa * gravidade;
  printf("Seu peso: %.2f", peso);
}