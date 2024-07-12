#include<stdio.h>
#include<stdlib.h>

int main(){
    int soma = 0;
    for(int i =0; i < 101; i = i+2){
        soma = soma + i;
    }
    printf("Soma dos pares entre 1 e %d é %d\n", 100, soma);
}