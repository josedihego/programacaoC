#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int * quantidades = malloc(150 * sizeof(int));
    float * precos = malloc(150 * sizeof(float));
    printf("%s\n","Informe uma das opções desejadas:");
    printf("\t%s\n", "1. Cadastrar produto:");
    printf("\t%s\n", "2. Atualizar produto:");
    printf("\t%s\n", "3. Consultar valor de produto:");
    printf("\t%s\n", "4. Consultar valor total do estoque:");
    int opcao;
    scanf("%d", &opcao);
    switch (opcao)
    {
       case 1:
       // cadastrar produto
       break;
       case 2:
       //atualizar produto
       break;
       case 3:
       //consultar valor produto
       break;
       case 4:
       // consultar valor estoque
       break;
       default:
       //  nenhum valor válido foi digitado
       break;
    }




}
