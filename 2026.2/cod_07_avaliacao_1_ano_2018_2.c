#include <stdio.h>
#include <stdlib.h>


int main(){
    //ENTRADA
    int valor;
    //SAIDA
    int numero_uns = 0;
    //LEITURA DA ENTRADA
    printf("Informe um número inteiro entre 0 e 32: ");
    scanf("%d",&valor);
    printf("%d", valor);
    int b0, b1, b2, b3, b4;
    b0 = valor%2;
    valor = valor/2;
    b1 = valor%2;
    valor= valor/2;
    b2 = valor%2;
    valor = valor/2;
    b3 = valor%2;
    valor = valor/2;
    b4 = valor%2;
    if(b0==1) numero_uns = numero_uns+1;
    if(b1==1) numero_uns = numero_uns +1;
    if(b2==1) numero_uns = numero_uns + 1;
    if(b3==1) numero_uns = numero_uns +1;
    if(b4==1) numero_uns = numero_uns+1;
    printf(" tem %d uns em binário", numero_uns);
}