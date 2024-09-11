#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

#define QNT_PROD 5
#define TAM_NOME_PROD 20

int main(){
    int quantidades[QNT_PROD];
    char produtos [QNT_PROD][TAM_NOME_PROD];
    int prox_PL = 0;
    printf("Selecione uma das opções:\n");
    printf("\t 1. Cadastrar produto\n");
    printf("\t 2. Excluir produto\n");
    printf("\t 3. Buscar produto\n");
    printf("\t 4. Listar produtos\n");
    printf("\t 5. Sair do sistema\n");
    int opcao = 0;
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Início do cadastro.\n");
        printf("Informe o nome do produto:");
        getchar();
        fgets(produtos[prox_PL],TAM_NOME_PROD,stdin);
        printf("Informe a quantidade em estoque:");
        scanf("%d", &quantidades[prox_PL]);
        prox_PL = prox_PL+1;
        break;
    case 2:
        printf("Início da exclusão\n");
        break;
    case 3:
        printf("Início da busca\n");
        break;
    case 4:
        printf("Saindo...\n");
        break;    
    default:
        printf("Opção inválida\n");
        break;
    }
}