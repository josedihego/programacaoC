#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("Digite valores inteiros. O programa para quando dois valores pares seguidos forem digitados\n");
    int qnt_pares_seguidos = 0;
    while(qnt_pares_seguidos < 2){
        printf("Informe um valor: ");
        scanf("%d", &numero);
        if(numero%2==0) qnt_pares_seguidos = qnt_pares_seguidos+1;
        else qnt_pares_seguidos = 0;
    }
    printf("Programa finalizado. Dois pares seguidos digitados\n");


}