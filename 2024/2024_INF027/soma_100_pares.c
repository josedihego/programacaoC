#include <stdio.h>
#include <stdlib.h>

int main(){

    int soma = 0;
    for(int i = 0; i < 100; i = i +1){
       soma =  soma + i * 2;
    }
    printf("Soma = %d\n", soma);
}