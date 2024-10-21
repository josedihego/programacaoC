#include<stdio.h>
#include <stdlib.h>

int main(){
    int lista [8] = {9,5,6,7,8,0,2,4};
    int soma = 0;
    for(int i = 0; i < 8 ; i = i + 2){
        soma =  soma + lista[i];
    }
    printf("Soma = %d", soma);
}

