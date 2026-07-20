#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>

// true livre
// false ocupado

int main(){
    bool ocupacao[600];
    int posicao;
    int tamanho;
    int livre = 0;
    for(int i = 0 ; i < 600; i = i +1){
        ocupacao[i] = true;
    }
    for(int j=0; j < 3; j = j +1){
        printf("Informe a posição da janela %d: ",j+1);
        scanf("%d", &posicao);
        printf("Informe o tamanhp da janela %d: ", j+1);
        scanf("%d",&tamanho);
        for(int i = posicao; i < posicao+tamanho; i = i+1){
            ocupacao[i] = false;
        }

    }
    for(int i = 0 ; i < 600; i = i +1){
        if(ocupacao[i] == true){
            livre = livre + 1;
        }
    }
    printf("Área livre %d cm²\n",livre * 100);
}