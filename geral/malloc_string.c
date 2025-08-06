#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tamanho_nome;
    printf("Informe o tamanho do nome do produto: ");
    scanf("%d", &tamanho_nome);
    char * nome_produto = 
            (char *)malloc(sizeof(char) * tamanho_nome);
    printf("Informe o nome do produto: ");
    scanf("%s", nome_produto);
    printf("O produto informado é: %s\n", nome_produto);
    printf("A 2° letra do nome é: %c\n", nome_produto[1]);
    printf("A 2° letra do nome é: %c\n", *(nome_produto+1));

}