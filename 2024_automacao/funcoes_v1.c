#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float somar(float valores [], int tamanho){
    float soma = 0;
    for(int i=0; i < tamanho; i = i+1){
        soma = soma + valores[i];
    }
    return soma;
}

float calc_media(float valores[], int tamanho){
    float media = somar(valores,tamanho)/tamanho;
    return media;
}

int contar_ocorrencias(char maquinas [][3], char maq_bus [3], int qnt_maquinas){
     int ocorrencias = 0;
     for(int i = 0; i < qnt_maquinas; i= i +1){
        if(strcmp(maquinas[i], maq_bus)==0){
            ocorrencias =  ocorrencias +1;
        }
     }
     return ocorrencias;
}

int main(){
    float valores [] = {78, 67.5, 92, 108, -3, 4, 9, 25,-50.8,120.4};
    char maquinas [10][3] = {"M1","M3","M4","M3","M1","M1","M2","M1","M3","M3"};
    int qnt_M1 = contar_ocorrencias(maquinas, "M1", 10);
    float res = somar(valores,10);
    float media = calc_media(valores,10);
    printf("Soma= %.2f\n", res);
    printf("Média = %.2f\n",media);
    printf("Qnt de máquinas M1 é %d\n", qnt_M1);

}