#include <stdio.h>

float altura = 1.60;
float massa = 44.44;

int main(){
  float IMC = massa / (altura * altura);
  printf("Seu IMC: %.2f",IMC);
}