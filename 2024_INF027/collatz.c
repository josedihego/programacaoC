#include <stdio.h>
#include <stdlib.h>
/**
 *     Dado um número inteiro n>0, se n for par, divida-o por 2; se for ímpar, multiplique-o por 3 e some 1. Repita o processo até que n=1. O programa deve contar e exibir o número de passos necessários para atingir 1.
    : Entrada: n=6. Saída: 6→3→10→5→16→8→4→2→1. Passos: 8.
 */
int main(){
    int n, qnt = 0;
    printf("Informe o valor de n:");
    scanf("%d",&n);
    while(n!=1){
        printf("%d->",n);
        if(n%2==0) n = n/2;
        else n = 3*n +1;
        qnt = qnt + 1;
    }
    printf("1\n");
    printf("Quantidade de operações é: %d\n",qnt);
}