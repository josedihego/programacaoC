#include <stdio.h>
#include <stdlib.h>


int main(){
    int soma = 0;
    for(int i = 1; i < 200; i = i +2){
        soma = soma + i;
    }
    printf("Soma = %d\n",soma);
}