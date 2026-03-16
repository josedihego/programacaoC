#include <stdio.h>

int main(){
    int numero;
    printf("Informe um valor:");
    scanf("%d",&numero);
    if(numero>0){
        if(numero%2==0){
            printf("res= %d\n", numero*numero);
        }
        else{
            printf("res=%d\n", numero*numero*numero);
        }
    }
    else{
        printf("Este programa somente aceita valores maiores que zero");
    }
}