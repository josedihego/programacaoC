#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char nomes_produtos[20][70];
    int qnts_produtos[20];
    int proxPL = 0;
    int opcao;
    while (opcao != 5)
    {
        printf("Informe uma das opções:");
        printf("\n\t 1.Cadastrar produto");
        printf("\n\t 2.Buscar produto");
        printf("\n\t 3.Listar produtos");
        printf("\n\t 4.Remover produtos");
        printf("\n\t 5.Sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Cadastrar selecionando\n");
            printf("Informe o nome do produto:");
            getchar();
            fgets(nomes_produtos[proxPL], 70, stdin);
            printf("Informe a quantidade em estoque:");
            scanf("%d", &qnts_produtos[proxPL]);
            proxPL = proxPL + 1;
            break;
        case 2:
            printf("Buscar selecionando\n");
            printf("Informe o nome buscado:");
            char nome_buscado [70];
            fgets(nome_buscado, 70,stdin);
            bool achou = false;
            int i =0 ;
            while(!achou && i< proxPL){
                int resultado =  strcmp(nome_buscado, nomes_produtos[i]);
                if(resultado==0) achou = true;
                else i = i +1;
            }
            if(achou){
                printf("Produto encontrado\n");
                printf("\t nome: %s\n", nomes_produtos[i]);
                printf("\t Quantidade %s\n", qnts_produtos[i]);
            }
            else{
                printf("Produto não encontrado. Tente novamente.\n");
            }
            break;
        case 3:
            printf("Listar selecionando\n");
            for(int i = 0; i < proxPL; i = i +1){
                printf("Produto detalhes #%d\n", i+1);
                printf("\t Nome:%s\n", nomes_produtos[i]);
                printf("\t Quantidade:%d\n", qnts_produtos[i]);
            }
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
}
