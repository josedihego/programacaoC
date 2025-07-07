#include <stdio.h>
#include <stdlib.h>

#define TAM  10


int main(){
    int valores[TAM] = {10,9,8,7,6, 5, 4,3,2,1};

    printf ("Antes: [ ");
    for(int i = 0; i < TAM; i = i +1){
        printf("%d, ", valores[i]);
    }
    printf("]\n");

    for(int i = 0; i < TAM; i = i + 1){
        for(int j = i; j >0; j= j -1 ){// solução trocar  "j = i+1" por  "j = i"
            if(valores[j] < valores[i]){
                int temp = valores[j];
                valores[j] = valores[i];
                valores[i] = temp;
            }
        }
    }

     printf ("Depois: [ ");
    for(int i = 0; i < TAM; i = i +1){
        printf("%d, ", valores[i]);
    }
    printf("]\n");
}