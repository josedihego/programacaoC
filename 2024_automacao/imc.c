#include <stdio.h>

float altura = 1.60;
float massa =90.3;
float gravidade = 9.81;

int main() {
  float IMC = massa / (altura * altura);
  printf("Seu IMC: %.2f\n", IMC);
  float peso = massa * gravidade;
  printf("Seu peso: %.2f\n", peso);
  if(IMC < 18.5){
    printf("Abaixo do peso.");
  }
  else{
    if(IMC >= 18.5 && IMC < 25){
        printf("Peso normal.");
    }
    else{
        if(IMC >=25 && IMC < 30){
            printf("Sobrepeso.");
        }
        else{
            printf("Obesidade.");
        }
    }
  }
}