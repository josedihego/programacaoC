#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TAM 5

int somar(int v [], int tam){
    int soma = 0;
    for(int i=0; i < tam; i = i +1){
        soma = soma + v[i];
    }
    return soma;
}

int main(){
  int valores[TAM]; 
  for(int i=0; i < TAM; i = i +1){
    printf("Informe o valor n° %d: ", i+1);
    scanf("%d", &valores[i]);
  }   
  int res = somar(valores,TAM);
  printf("A soma dos valores é: %d\n", res);
}