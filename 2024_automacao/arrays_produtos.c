#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MAX_PROD 10
#define TAM_MAX_NOME 50

int main(){
    char nomes_produtos[MAX_PROD][TAM_MAX_NOME];
    int qnts_produtos [MAX_PROD];
    printf("Informe uma das opções:\n");
    printf("\t 1. Cadastrar produto\n");
    printf("\t 2. Remover produto\n");
    printf("\t 3. Buscar por nome\n");
    printf("\t 4. Listar produtos\n");
    printf("\t 5. Sair do sistema\n");
    int opcao;
    scanf("%d", &opcao);
    switch (opcao)
    {
        case 1:
        printf("Cadastrar selecionado\n");
        break;
        case 2:
        printf("Remover selecionado\n");
        break;
        case 3:
        printf("Buscar selecionado\n");
        break;
        case 4:
        printf("Sair selecionado\n");
        break;
        default:
        printf("Opção inválida. Tente novamente.");
        break;
    }


}