#include<stdio.h>

int main(){
    int x, y, z;
    printf("Informe o primeiro n�mero:");
    scanf("%f",&x);
    printf("Informe o segundo n�mero:");
    scanf("%f",&y);
    printf("Informe o terceiro n�mero:");
    scanf("%f",&z);
    if(x==y || x==z || y==z){
        printf("Existem dois valores iguais.\n");
    }
    else{
        printf("N�o existem dois valores iguais.\n");
    }
}