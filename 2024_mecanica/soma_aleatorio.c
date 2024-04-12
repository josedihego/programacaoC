#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n1, n2, resposta;
    int n_acertos = 0, n_erros = 0;
    for (int i = 0; i < 10; i = i + 1)
    {
        n1 = rand() % 101;
        n2 = rand() % 101;
        printf("Qual o valor de %d+%d?\n", n1, n2);
        scanf("%d", &resposta);
        if (n1 + n2 == resposta)
        {
            n_acertos = n_acertos + 1;
        }
        else
        {
            n_erros = n_erros + 1;
        }
    }
    printf("Você acertou %d vezes\n",n_acertos);
    printf("Você errou %d vezes\n",n_erros);
}

// gerar dois valores aleatórios n1 e n2
//  perguntar ao usuário quanto é n1+n2?
//  ler a resposta com scanf
//  comparar a resposat com o valor correto
//  usar um if para comparação
//  se esta correto você conta um acerto
//  de esta errado você conta um erro
//  depois do for, no final imprime a percentagem de acertos