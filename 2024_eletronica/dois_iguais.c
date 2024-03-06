#include<stdio.h>

int main(){
    int x, y, z;
    printf("Informe o primeiro número:");
    scanf("%f",&x);
    printf("Informe o segundo número:");
    scanf("%f",&y);
    printf("Informe o terceiro número:");
    scanf("%f",&z);
    if(x==y || x==z || y==z){
        printf("Existem dois valores iguais.\n");
    }
    else{
        printf("Não existem dois valores iguais.\n");
    }
}