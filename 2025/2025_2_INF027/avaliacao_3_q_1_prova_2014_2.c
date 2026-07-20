#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAM 4

int main(){
    int matrix [TAM][TAM];
    for(int l= 0; l < TAM; l = l+1){
        for(int c =0; c < TAM; c = c+1){
            printf("Informe a linha %d e coluna %d: ",l,c);
            scanf("%d", &matrix[l][c]);
        }
    }
    bool valida = true;
    for(int l = 0; l <TAM; l = l+1){
        int cont = 0;
        for(int c = 0; c < TAM; c = c+1){
            if(matrix[l][c]==0  || matrix[l][c]==1){
                if(matrix[l][c]==1){
                    cont = cont + 1;
                }
            }
            else{
                valida = false;
            }
        }
        if(cont != 1){
            valida = false;
        }
    }
    for(int c = 0; c < TAM; c = c+1){
        int cont = 0;
        for(int l = 0; l < TAM; l = l+1){
            if(matrix[l][c]==0 || matrix[l][c]==1){
                if(matrix[l][c]==1){
                    cont = cont +1;
                }
            }
            else{
                valida = false;
            }
        }
        if(cont != 1){
            valida = false;
        }
    }
    if(valida==true){
        printf("A matriz informada é valida\n");
    }
    else{
        printf("A matriz informada é inválida\n");
    }
    for(int l= 0; l < TAM; l = l+1){
        for(int c =0; c < TAM; c = c+1){
            printf("%d ", matrix[l][c]);
        }
        printf("\n");
    }
}

