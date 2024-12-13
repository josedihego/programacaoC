#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

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

int contar_ocorrencias(char nome [], char maquinas[][5], int quantidade){
    int ocorrencias = 0;
    for(int i = 0; i < quantidade; i = i +1){
        if (strcmp(nome, maquinas[i])==0){
            ocorrencias = ocorrencias + 1;
        }
    }
    return ocorrencias;
}

float media_por_maquina(char nome [], char maquinas [][5], float valores[], int quantidade){
    float soma = 0.0;
    int ocorrencias = 0;
    for(int i =0; i < quantidade ; i = i+1){
        if(strcmp(nome, maquinas[i])==0){
            ocorrencias = ocorrencias +1;
            soma = soma + valores[i];
        }
    }
    return soma/ocorrencias;
}

int main(){
    float valores [] = {198,-30,45.6,67.9,90.5,81,-5,43.5,82.7,-32.8};
    char maquinas [10] [5] ={"M1","M3","M2","M2","M1","M3","M4","M1","M1","M2"};
    float res = somar(valores,10);
    printf("Soma = %.2f\n", res);
    float media = mediar(valores,10);
    printf("Média= %.2f\n",media);
    int oco_M1 = contar_ocorrencias("M1",maquinas,10);
    printf("Ocorrências M1: %d\n", oco_M1);
    float media_M1 = media_por_maquina("M1", maquinas, valores, 10);
    printf("Média de M1: %.3f\n", media_M1);
    
}