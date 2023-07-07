#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cadastrar_produto(int * quantidades, float * precos){
    int posicao;
    int quantidade;
    float preco;
    printf("%s", "Informe a posição do produto: ");
    scanf("%d", &posicao);
    printf("%s","Informe a quantidade do produto: ");
    scanf("%d", &quantidade);
    printf("%s", "Informe o valor unitário do produto: ");
    scanf("%f", &preco);
    quantidades[posicao] = quantidade;
    precos[posicao] = preco;

}
void consultar_produto(int * quantidades, float * precos){
    int posicao;
    printf("%s", "Informe a posição do produto: ");
    scanf("%d", &posicao);
    printf("%s\n", "Resultado da consulta: ");
    printf("Quantidade: %d", quantidades[posicao]);
    printf("Preço: %f", precos[posicao]);
}

int main(){
    int * quantidades = malloc(150 * sizeof(int));
    float * precos = malloc(150 * sizeof(float));
    printf("%s\n","Informe uma das opções desejadas:");
    printf("\t%s\n", "1. Cadastrar produto:");
    printf("\t%s\n", "2. Atualizar produto:");
    printf("\t%s\n", "3. Consultar valor de produto:");
    printf("\t%s\n", "4. Consultar valor total do estoque:");
    printf("\t%s\n", "5. Sair");
    int opcao;
    while(opcao != 5){
    scanf("%d", &opcao);
    switch (opcao)
    {
       case 1:
       cadastrar_produto(quantidades, precos);
       break;
       case 2:
       //atualizar produto
       break;
       case 3:
       consultar_produto(quantidades,precos);
       break;
       case 4:
       // consultar valor estoque
       break;
       default:
       //  nenhum valor válido foi digitado
       break;
    }
    }
}
