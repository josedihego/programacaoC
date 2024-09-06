#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main(){
    char nomes_produtos [20][70];
    int qnts_produtos [20];
    printf("Informe uma das opções:");
    printf("\n\t 1.Cadastrar produto");
    printf("\n\t 2.Buscar produto");
    printf("\n\t 3.Listar produtos");
    printf("\n\t 4.Remover produtos");
    printf("\n\t 5.Sair\n");
    int opcao;
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("Cadastrar selecionando\n");
            break;
        case 2:
            printf("Buscar selecionando\n");
            break;
        case 3:
            printf("Listar selecionando\n");
            break;
        case 4:
            printf("Remover selecionando");
            break;
        case 5:
            printf("Sair selecionando\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.");
            break;    

    }

}
