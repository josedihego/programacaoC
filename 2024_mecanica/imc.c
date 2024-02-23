#include <stdio.h>

float altura = 1.71;
float massa = 49;
float gravidade = 9.8;

int main() {
  float IMC = massa / (altura * altura);
  printf("Seu IMC: %.4f\n", IMC);
  float peso = massa * gravidade;
  printf("Seu peso na Terra: %.2f N", peso);
}