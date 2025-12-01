#include <stdio.h>
#include <stdlib.h>

#define T 14

int main(){
    int barra[T]= {9,4,3,9,1,2,4,5,1,1,9,7,0,5};
    int quantidades[10] ={0,0,0,0,0,0,0,0,0,0};
    int posicao_atual;
    int prox_posicao;
    printf("Informe uma posição: ");
    scanf("%d", &posicao_atual);
    while(barra[posicao_atual-1] != 0){
        printf("Informe uma posição:");
        scanf("%d", &prox_posicao);
        // da esquerda para a direita
        if(prox_posicao > posicao_atual){
            for(int p = posicao_atual-1; p < prox_posicao; p = p+1){
                quantidades[barra[p]] = quantidades[barra[p]]+ 1; 
            }

        }
        // da direita para a esquerda
        else{
            for(int p = posicao_atual-1; p > prox_posicao; p = p-1){
                quantidades[barra[p]] = quantidades[barra[p]]+ 1; 
            }
        }
        posicao_atual = prox_posicao;
    }
    printf("saida = ");
    for(int p = 0; p < 10; p =p+1){
        printf("%d ", quantidades[p]);
    }
    printf("\n");
}