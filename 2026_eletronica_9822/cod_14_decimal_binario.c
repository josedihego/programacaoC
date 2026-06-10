#include <stdio.h>
#include <stdlib.h>


int main(){
    int decimal;
    int resto;
    printf("Informe um valor decimal positivo: ");
    scanf("%d",&decimal);
    printf("%d em binário é ",decimal);
    while(decimal != 0){
        resto = decimal % 2;
        printf("%d",resto);
        decimal = decimal/2;
    }
    printf("\n");
}