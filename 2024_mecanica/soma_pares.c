#include<stdio.h>
#include<stdlib.h>

int main(){
    int soma = 0;
    for(int j = 0; j < 1000; j = j +1){
        printf("%d\n",j*2);
        soma = soma + j*2;
    }
    printf("A soma dos 6 primeiros pares é:%d\n",soma);
}