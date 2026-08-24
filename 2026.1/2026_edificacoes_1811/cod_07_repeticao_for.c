#include <stdio.h>
#include <stdlib.h>

int main(){
    int soma = 0;
    int qnt;
    printf("Informe a quantidade de ímpares: ");
    scanf("%d",&qnt);
    for(int n =1; n < 2 * qnt; n = n + 2){
        soma = soma + n;
    }
    printf("Soma dos %d primeiros números ímpares é %d\n",qnt, soma);
}