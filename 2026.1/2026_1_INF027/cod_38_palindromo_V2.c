#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 50

int main(){
    char texto[TAM];
    printf("Informe a palavra para testar se é um palindromo:");
    fgets(texto,TAM,stdin);

    int posicao_final = 0;
    while(texto[posicao_final]!='\0'){
        posicao_final = posicao_final +1;
    }
    posicao_final = posicao_final - 1;
    texto[posicao_final] = '\0';
    bool palindromo = true;
    int j = posicao_final -1;
    for(int i = 0; i < posicao_final/2; i = i +1){
        if(texto[i] != texto[j]){
            palindromo = false;
        }
        j = j -1;
    }
     if(palindromo){
        printf("A palavra %s é palindroma\n", texto);
    }
    else{
        printf("A palavra %s não é palindroma\n", texto);
    }

    /**
     * Crie um programa que recebe dois textos quaisquer e
     * informa se um dos textos esta contido no outro
     * Ex: (A) casa bela   
     *     (B) era uma vez uma casa bela na montanha
     * 
     * Segundos problema:
     * Será que uma palavra dois textos esta contida no outro texto
     * Ex: (A) casa bonita   
     *     (B) era uma vez  uma bonita casa bela na montanha
     */
}
