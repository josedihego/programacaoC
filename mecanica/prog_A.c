#include <stdio.h>
#include<stdlib.h>

int main(){
    int valor = 0;
    int soma = 0;
    int quantidade = 0 ;
    int media;
    while(valor <= 100 || valor%2!=0){
        printf("%s","Informe um valor <=100 ou impar. Caso contrário termine: ");
        scanf("%d",&valor);
        soma = soma + valor;
        quantidade = quantidade + 1;
    }
    media = soma/quantidade;
    printf("Média: %d\n", media);
    return EXIT_SUCCESS;
}