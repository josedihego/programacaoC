#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main()
{
    char nomes_produtos[20][50];
    int qnts_produto[20];
    int proxPL = 0;

    int opcao;
    while (opcao != 5)
    {
        printf("Informe uma opção:\n");
        printf("\t 1. Cadastrar produto \n");
        printf("\t 2. Buscar produto \n");
        printf("\t 3. Atualizar produto\n");
        printf("\t 4. Listar produtos\n");
        printf("\t 5. Sair do sistema\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Cadastrar selecionado\n");
            printf("Informe o nome do produto:");
            getchar();
            fgets(nomes_produtos[proxPL], 50, stdin);
            printf("Informe a quantidade em estoque:");
            scanf("%d", &qnts_produto[proxPL]);
            proxPL = proxPL + 1;
            break;
        case 2:
            printf("Buscar selecionado \n");
            printf("Informe o nome do produto buscado:");
            char nome_buscado [50];
            getchar();
            fgets(nome_buscado, 50, stdin);
            bool achou = false;
            int i =0 ;
            while(!achou && i < proxPL){
                int res_comp = strcmp(nome_buscado, nomes_produtos[i]);
                if(res_comp==0) achou =  true;
                else i = i +1;
            }
            if(achou){
                printf("Produto encontrado:\n");
                printf("\t nome:%s\n", nomes_produtos[i]);
                printf("\t quantidade:%d\n", qnts_produto[i]);
            }
            else{
                printf("Produto não encontrado. Tente novamente\n");
            }
            break;
        case 3:
            printf("Atualizar selecionando\n");
            break;
        case 4:
            printf("listar selecionando\n");
            for(int i = 0; i < proxPL; i = i +1){
                printf("Produto n° #%d\n",i+1);
                printf("\t nome: %s\n", nomes_produtos[i]);
                printf("\t quantidade: %d\n", qnts_produto[i]);
            }

            break;
        case 5:
            printf("Sair selecionado");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    }
}