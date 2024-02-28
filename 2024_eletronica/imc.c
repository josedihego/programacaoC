#include <stdio.h>

float massa = 60;
float altura = 1.85;
float gravidade = 9.81;
int main() {
  float IMC = massa / (altura * altura);
  printf("O IMC para pessoa com altura %.2f m e massa %.2f kg : %.5f\n", altura,
         massa, IMC);
  float peso = massa * gravidade;
  printf("Sua massa de %.2f produz um peso de %.2f N", massa, peso);
  if(IMC < 18.5){
    printf("\nPeso abaixo do normal");
  }
}