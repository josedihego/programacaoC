#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

#define QNT_PROD 5
#define TAM_NOME_PROD 20

int main()
{
    int quantidades[QNT_PROD];
    char produtos[QNT_PROD][TAM_NOME_PROD];
    int prox_PL = 0;
    int opcao = 0;
    while (opcao != 5)
    {
        printf("Selecione uma das opções:\n");
        printf("\t 1. Cadastrar produto\n");
        printf("\t 2. Excluir produto\n");
        printf("\t 3. Buscar produto\n");
        printf("\t 4. Listar produtos\n");
        printf("\t 5. Sair do sistema\n");

        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Opção inserir selecionada...\n");
            printf("Informe o nome do produto:");
            getchar();
            fgets(produtos[prox_PL], TAM_NOME_PROD, stdin);
            printf("Informe a quantidade em estoque:");
            scanf("%d", &quantidades[prox_PL]);
            prox_PL = prox_PL + 1;
            break;
        case 2:
            printf("Opção excluir selecionada...\n");
            break;
        case 3:
            printf("Opção buscar selecionada...\n");
            char nome [TAM_NOME_PROD];
            printf("Informe o nome do produto buscado:");
            getchar();
            fgets(nome, TAM_NOME_PROD, stdin);
            bool achou = false;
            int i =0;
            while(!achou && i < prox_PL){
                int valor = strcmp(nome, produtos[i]);
                if(valor ==0) achou = true;
                else i = i +1;
            }
            if(achou){
                printf("Produto encontrado\n");
                printf("\t Nome: %s", produtos[i]);
                printf("\t Quantidade: %d\n", quantidades[i]);
            }
            break;
        case 4:
            printf("Opção listar selecionada...\n");
            for (int i = 0; i < prox_PL; i = i + 1)
            {
                printf("Produto n°# %d\n", i + 1);
                printf("\t Nome: %s", produtos[i]);
                printf("\t Quantidade: %d\n", quantidades[i]);
            }
            break;
        case 5:
            printf("Saindo do sistema...\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
        }
    }
}