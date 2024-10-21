#include<stdio.h>
#include <stdlib.h>

int main(){
    int lista [10] = {12,15,20,8,12,99,74,0,10,18};
    int soma = 0;
    for(int i = 0; i < 10 ; i = i + 1){
        if(lista[i] > 10 && lista[i]%2==1){
            soma = soma + lista[i];
        }
    }
    printf("Soma = %d", soma);
}

