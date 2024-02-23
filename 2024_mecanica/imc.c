#include <stdio.h>

float altura = 1.71;
float massa = 120;
float gravidade = 9.8;

int main() {
  float IMC = massa / (altura * altura);
  printf("Seu IMC: %.4f\n", IMC);
  float peso = massa * gravidade;
  printf("Seu peso na Terra: %.2f N\n", peso);
  if(IMC < 18.5){
    printf("Abaixo do peso");
  }
  else{
    if(IMC >= 18.5 && IMC <25){
        printf("peso normal");
    }
    else{
       if(IMC >= 25 && IMC <30){
        printf("sobrepeso");
       }
       else{
        printf("Obeso");
       } 
    }
  }
}
/*
< 18.5	- abaixo do peso
>=18.5 e < 25	- peso normal
>=25 e <  30	- sobrepeso
>=30 obeso
*/