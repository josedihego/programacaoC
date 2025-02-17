#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char texto[100];
    printf("Informe um texto: ");
    fgets(texto,100,stdin);

    int p_b_zero =0; // posição do barra zero \0
    while(texto[p_b_zero]!='\0'){
        p_b_zero = p_b_zero + 1;
    }
    for(int i = p_b_zero-1; i >=0 ; i = i -1){
        printf("%c",texto[i]);
    }
    printf("\n");
}