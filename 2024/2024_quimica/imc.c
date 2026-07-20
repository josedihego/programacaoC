#include <stdio.h>

float altura;
float massa;
float gravidade = 9.81;

int main() {
  printf("Qual sua altura?\n");
  scanf("%f",&altura);
  printf("Qual sua massa?\n");
  scanf("%f", &massa); 
  float IMC = massa / (altura * altura);
  printf("Seu IMC: %.2f\n", IMC);
  float peso = massa * gravidade;
  printf("Seu peso: %.2f", peso);
}