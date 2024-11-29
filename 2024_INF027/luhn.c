#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4;
    printf("Informe os 4 valores de Luhn\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    int soma = ((n1*2) %9) + (n2%9)+ ((n3*2)%9)+(n4%9);
    if(soma%10==0){
        printf("Número de Luhn válido\n");
    }
    else{
        printf("Número de Luhn inválido\n");

    }
}