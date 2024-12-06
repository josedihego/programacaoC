#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// https://docs.google.com/spreadsheets/d/1GKeDmZiCP3Ed3s4054SZbrOWETzltM6FslqZCXN2vbE/edit?usp=sharing

float somar(float valores [], int tamanho){
    float soma = 0;
    for(int i=0; i<tamanho; i = i+1){
        soma = soma + valores[i];
    }
    return soma;
}

float media(float valores [], int tamanho){
     float media = somar(valores,tamanho)/tamanho;
     return media;
}


int contar_ocorrencias(char maquinas[][3], char maq_bus[], int qnt){
    int ocorrencias = 0;
    for(int i = 0 ; i < qnt ; i = i +1){
        if (strcmp(maquinas[i],maq_bus)==0){
            ocorrencias = ocorrencias + 1;
        }
    }
    return ocorrencias;
}

int main(){
    float valores [10] ={56.6,67.4,12.4,-34.5,10,25,12,9,-3,30};
    char maquinas [10][3]= {"M2","M2","M3","M1","M1","M3","M3","M1","M4","M1"};
    int oc_M1 = contar_ocorrencias(maquinas,"M1",10);
    float soma = somar(valores, 10);
    printf("Soma = %.2f\n", soma);
    float med = media(valores,10);
    printf("Média = %.2f\n",med);
    printf("Número ocorrências M1: %d\n",oc_M1);
}

