#include <stdio.h>

float altura;
float massa;
float gravidade = 9.81;

int main() {
  printf("Informe sua altura (m):");
  scanf("%f",&altura); 
  printf("Informe sua massa (kg):");
  scanf("%f", &massa); 
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