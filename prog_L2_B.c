#include<stdlib.h>
#include<stdio.h>

int main(){
    int ultimo = 2;
    int penultimo = 3;
    int somatorio = 0 ;
    int qnt = 0;

    while(qnt < 2 || ultimo!=penultimo){
        penultimo = ultimo;
        printf("Informe um valor: ");
        scanf("%d", &ultimo);
        somatorio = somatorio + ultimo;
        qnt = qnt + 1;
    }

    printf("Média %d", somatorio/qnt);
}