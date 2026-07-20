#include <stdio.h>
#include <stdlib.h>

int main(){
    int soma = 0;
    for(int i =0; i < 3876; i=i+1){
        soma = soma + i;
    }
    printf("Soma é : %d\n",soma);
}