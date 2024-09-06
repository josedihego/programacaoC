#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define MAX_PROD 10
#define MAX_NOME 50

int main(){
    char nomes_produtos[MAX_PROD][MAX_NOME];
    int qnts_produtos [MAX_PROD];
    printf("Informe uma das opções: \n \t 1.Cadastrar \n \t 2. Remover \n \t 3. Buscar \n \t 4. Sair \n");
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