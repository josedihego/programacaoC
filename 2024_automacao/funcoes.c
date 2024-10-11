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
int calcular_media(int v [], int tam){
    return somar(v,tam)/tam;
}
int buscar_maior(int v [], int tam){
    int maior = v[0];
    for(int i = 1; i < tam; i = i +1){
        if(v[i] > maior) maior = v[i];
    }
    return maior;
}

int main(){
  int valores[TAM]; 
  for(int i=0; i < TAM; i = i +1){
    printf("Informe o valor n° %d: ", i+1);
    scanf("%d", &valores[i]);
  }   
  int res = somar(valores,TAM);
  printf("A soma dos valores é: %d\n", res);
  int media = calcular_media(valores,TAM);
  printf("Média dos valores é: %d\n",media);
}