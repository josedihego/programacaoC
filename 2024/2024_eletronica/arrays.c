#include<stdio.h>
#include<stdlib.h>

int main(){
    int valores [10];
    valores[0]= 8;
    valores[1]= 15;
    printf("primeiro valor é:%d\n", valores[0]);
    printf("Segundo valor é:%d\n", valores[1]);
    printf("Agora, informe o terceiro valor: ");
    scanf("%d",&valores[2]);
    printf("Terceiro valor é:%d\n", valores[2]);

}