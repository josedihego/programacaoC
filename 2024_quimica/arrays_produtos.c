#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(){
    char nomes_produtos [20][50];
    int qnts_produto [20];
    int proxPL = 0;
    printf("Informe uma opção: \n\t 1. Cadastrar \n\t 2. Buscar \n\t 3.Atualizar \n\t  4. Listar \n \t5. Sair\n");
    int opcao;
    scanf("%d", &opcao);
    switch (opcao)
    {
        case 1:
        printf("Cadastrar selecionado\n");
        printf("Informe o nome do produto:");
        getchar();
        fgets(nomes_produtos[proxPL],50,stdin);
        printf("Informe a quantidade em estoque:");
        scanf("%d", &qnts_produto[proxPL]);
        break;
        case 2:
        printf("Buscar selecionado \n");
        break;
        case 3:
        printf("Atualizar selecionando\n");
        break;
        case 4: 
        printf("listar selecionando\n");
        break;
        case 5:
        printf("Sair selecionado");
        break;
        default:
        printf("Opção inválida. Tente novamente.\n");
        break;
    }

}