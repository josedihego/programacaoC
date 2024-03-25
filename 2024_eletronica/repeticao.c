#include<stdio.h>
#include<stdlib.h>

#define NPARES 1000
// Mostrar a soma dos primeiros 1000 números pares a partir do 0

int main(){
    int res = 0;
    int npar = 0;
    for(int j=0; j < NPARES ; j = j +1){
        npar = j * 2;
        res = res + npar;
    }
    printf("A soma dos primerios %d números pares é: %d\n",NPARES,res);
}
