#include<stdio.h>
#include<stdlib.h>

int main(){
    int soma = 0;
    int i;
    for(i = 0; i <= 100; i = i +1){
        soma =  soma + i;
    }
    printf("Soma de 0 até %d = %d\n", i-1 , soma);
    return EXIT_SUCCESS;
}