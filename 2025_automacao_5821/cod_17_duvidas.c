#include <stdio.h>
#include <stdlib.h>

#define BORD_MIN 13
#define BORD_MAX 17

int main()
{
    float temp;
    printf("informe a leitura da temperatura do Arduino: ");
    scanf("%f", &temp);
    if (temp >= BORD_MIN && temp <= BORD_MAX)
    {
        printf("temperatura entre %d e %d", BORD_MIN, BORD_MAX);
    }
    else
    {
        printf("temperatura FORA do intervalo de %d e %d", BORD_MIN, BORD_MAX);
    }
    printf("Informe uma das opções:\n:");
    printf("\t 1. Cadastrar\n");
    printf("\t 2. Buscar\n");
    printf("\t 3. Remover\n");
    printf("\t 4. Atualizar\n");
    printf("\t 5. Sair\n");
    int opcao;
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Usuário escolheu cadastrar\n");
        break;
    case 2:
        printf("Usuário escolheu buscar\n");
        break;
    case 3:
        printf("Usuário escolheu remover\n");
        break;
    case 4:
        printf("Usuário escolheu atualiar\n");
        break;
    case 5:
        printf("Usuário escolheu sair\n");
        break;
    }
}