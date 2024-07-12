#include <stdio.h>

float altura;
float massa;
float gravidade = 9.8;

int main() {
  printf("Qual sua altura?\n");
  scanf("%f",&altura);
  printf("Qual sua massa?\n");
  scanf("%f",&massa);

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
