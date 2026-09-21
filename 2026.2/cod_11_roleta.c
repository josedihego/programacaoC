#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor, N, M;
    printf("Informe os valores de: valor, N e M separados por vírgula:");
    scanf("%d,%d,%d",&valor,&N,&M);
    int voltas_N = valor/N;
    valor = valor%N;
    int voltas_M = valor/M;
    valor = valor%M;
    printf("%d voltas em N \n", voltas_N);
    printf("%d voltas em M \n", voltas_M);
    printf("Sobrou %d\n", valor);
}