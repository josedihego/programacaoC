#include<stdio.h>
#include<stdlib.h>

#define TAM 11

int main(){
 
    int  valores [TAM] = {5,13,7,5,26,13, -1, 10, 9, -3,0};
    for(int i = 0; i < TAM ; i = i +1){
        for(int j = TAM-1; j > i; j = j-1){
            if(valores[j] < valores[j-1]){
                int temp = valores[j];
                valores[j] = valores[j-1];
                valores[j-1] = temp;
            }
        }
    }
    printf("[");
    for(int i=0; i <TAM ; i = i +1){
        printf("%d, ", valores[i]);
    }
    printf("]\n");

}