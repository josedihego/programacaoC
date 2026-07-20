#include <stdio.h>
#include <stdlib.h>

/*
Objetivo: fazer a soma dos 100 primeiros números pares
0 + 2 + 4 + ... + 198
*/
int main(){
    // definição de variáveis
    int somatorio = 0;
    for(int i = 0; i < 100; i = i+1){
        somatorio = somatorio + (i * 2);
    }
    printf("Somatório = %d\n", somatorio);
    float media = somatorio/100;
    printf("Média = %.2f\n", media);
}