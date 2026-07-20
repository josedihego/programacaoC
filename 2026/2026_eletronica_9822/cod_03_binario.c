#include <stdio.h>
#include <stdlib.h>


int main(){
    int b0;
    int b1;
    int b2;
    int b3;
    int b4;
    int resultado;
    printf("Informe o bit b0:");
    scanf("%d",&b0);
    printf("Informe o bit b1:");
    scanf("%d",&b1);
    printf("Informe o bit b2:");
    scanf("%d",&b2);
    printf("Informe o bit b3:");
    scanf("%d",&b3);
    printf("Informe o bit b4:");
    scanf("%d",&b4);
    resultado = b0 * 1 + b1 * 2 + b2 * 4 + b3 * 8;
    if(b4==0){
        resultado = resultado * -1;
    }
    printf("Resultado em binário é %d\n",resultado);
}