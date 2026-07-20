#include <stdio.h>
#include <stdlib.h>


int main(){
    int b0, b1, b2, b3, b4;
    int decimal;
    printf("Informe o valor binario:");
    scanf("%d",&b4);
    scanf("%d",&b3);
    scanf("%d",&b2);
    scanf("%d",&b1);
    scanf("%d",&b0);
    decimal = b0 * 1 + b1 * 2 + b2 * 4 + b3 * 8;
    if(b4==0){
        decimal = decimal * -1;
    }
    printf("Valor em decimal é: %d\n",decimal);

}