#include <stdio.h>
#include <stdlib.h>

int main(){

    int soma = 0;
    int valor;
    while(soma < 42){
        printf("Informe um valor para ser adicionado a soma geral: ");
        scanf("%d",&valor);
        soma = soma + valor;
    }
    printf("Você digitou valores que somados são pelo maiores ou igauis a 42");
    printf("Soma = %d\n", soma);
}
