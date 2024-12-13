#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//https://docs.google.com/spreadsheets/d/1ZhWw25FYJLQZORINhKi68sgUt3B6kTMCF_QbZcrrsxs/edit?usp=sharing


float somar(float valores [], int tamanho){
    float soma = 0;
    for(int i =0; i < tamanho; i = i +1){
        soma = soma + valores[i];
    }
    return soma;
}

float mediar(float valores [], int tamanho){
    float soma = somar(valores,tamanho);
    float media = soma/tamanho;
    return media;
}
float maximo(float valores[], int tamanho){
    float max = valores[0];
    for(int i = 1; i <tamanho; i = i +1){
        if(valores[i] > max){
            max = valores[i];
        }
    }
    return max;
}

int main(){
    float valores [] = {198,-30,45.6,67.9,90.5,81,-5,43.5,82.7,-32.8};
    char maquinas [10] [5] ={"M1","M3","M2","M2","M1","M3","M4","M1","M1","M2"};
    float res = somar(valores,10);
    printf("Soma = %.2f\n", res);
    float media = mediar(valores,10);
    printf("Média= %.2f\n",media);
    
}