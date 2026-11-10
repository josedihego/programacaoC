#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("Informe um número:");
    scanf("%d",&numero);
    printf("resultado é %d",numero);
    int soma=0;
    while(numero % 7!=0){
        int resto = numero%7;
        soma = soma + resto;
        //printf("%d ", resto);
        numero = numero /7;
    }
    printf("%d\n", soma%7);
}