#include<stdio.h>
#include<stdlib.h>


int main(){
    // imprimir os 100 primeiros números pares
    printf("\n100 primeiros pares:\n");
    for(int i = 0; i < 100; i = i +1){
        printf("%d° = %d\n",i+1, i*2);
    }
    printf("\n100 primeiros impares:\n");
    for(int i=0; i<100; i=i+1){
        printf("%d° = %d\n",i+1,(i*2)+1);
    }
    printf("\nSoma dos 200 primeiros numeros inteiros [0-199]\n");
}