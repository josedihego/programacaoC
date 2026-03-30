#include <stdio.h>
#include <stdlib.h>

int main(){
    int b0,b1,b2,b3, bs;
    int decimal;
    printf("Informe um binário com exatos 5 bits (o bit mais a esquerda representará o sinal):");
    scanf("%1d%1d%1d%1d%1d",&bs,&b3,&b2,&b1,&b0);
   // printf("%d%d%d%d%d",bs,b3,b2,b1,b0);
    decimal = b0 * 1 + b1 * 2 + b2 * 4 + b3 * 8;
    if(bs==1){
        decimal = decimal * -1;
    }
    printf("O valor %d%d%d%d%d (base binária) representa %d (base decimal)\n", bs,b3,b2,b1,b0,decimal);
    return EXIT_SUCCESS;
}