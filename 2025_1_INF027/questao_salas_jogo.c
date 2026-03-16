#include <stdio.h>
#include <stdlib.h>

#define MAX 7
int main()
{
    int salas[MAX];
    for (int i = 0; i < MAX; i = i + 1)
    {
        printf("Informe o valor da sala n° %d:", i);
        scanf("%d", &salas[i]);
    }
    int maior_pontuacao_possivel = 0;

    for (int qs = 1; qs <= MAX; qs = qs + 1)
    {
        for (int pi = 0; pi < MAX; pi = pi + 1)
        {
            int soma = 0;
            for (int n = pi; n < qs; n = n + 1)
            {
                soma = soma + salas[n];
            }
            if (soma > maior_pontuacao_possivel)
            {
                maior_pontuacao_possivel = soma;
            }
        }
    }
    printf("Maior pontuação possível é: %d\n", maior_pontuacao_possivel);
}