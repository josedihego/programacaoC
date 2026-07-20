#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero;
    printf("Informe um número para testar se é primo:");
    scanf("%d",&numero);
    int n_divisores = 2;
    for(int i = 2; i < numero; i = i +1){
        if(numero%i==0){
            n_divisores = n_divisores +1;
        }
    }
    if(n_divisores==2){
        printf("O número %d é primo\n",numero);
    }
    else{
        printf("O número %d NÃO é primo\n", numero);
    }
}