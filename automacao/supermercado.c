#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
// 0. farinha
// 1. açucar
// 2. leite de coco

void cadastrar_produto(int * quantidades, float * precos){
    int posicao;
    int quantidade;
    float preco;
    printf("%s", "Informe a posição de cadastro:");
    scanf("%d", &posicao);
    printf("%s", "Informe a quantidade do produto:");
    scanf("%d", &quantidade);
    printf("%s", "Informe o preço do produto:");
    scanf("%f", &preco);
    quantidades[posicao] = quantidade;
    precos[posicao] = preco;
}

int main(){
    int * quantidades = malloc(500* sizeof(int));
    float * precos  = malloc(500 * sizeof(float));
    printf("%s\n", "Informe uma das opções");
    printf("\n\t%s", "1.Cadastrar produto");
    printf("\n\t%s", "2.Receber estoque");
    printf("\n\t%s", "3.Registrar venda");
    printf("\n\t%s\n", "4.Calcular valor do estoque");
    int opcao;
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
    cadastrar_produto(quantidades, precos);
    break;
    case 2:
    break;
    case 3:
    break;
    case 4:
    break;
    default:
        break;
    }

    return EXIT_SUCCESS;
    
}