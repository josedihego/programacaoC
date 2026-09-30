#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define T 8
int main()
{
    // definindo a matriz do terreno
    char terreno[T][T] = {
        {'2', '7', '7', '5', '5', '4', '7', '8'},
        {'2', '9', '9', '8', '5', '4', '3', '9'},
        {'3', '4', '8', '9', '9', '9', '8', '9'},
        {'2', '2', '1', '1', '5', '5', '6', '9'},
        {'6', '6', '7', '3', '6', '6', '8', '9'},
        {'9', '9', '8', '8', '6', '5', '5', '5'},
        {'4', '4', '4', '3', '3', '3', '9', '9'},
        {'9', '9', '9', '8', '6', '9', '9', '1'}};

    // leitura da matriz
    for (int l = 0; l < T; l = l + 1)
    {
        for (int c = 0; c < T; c = c + 1)
        {
            // apenas para testar
            // scanf("%c", &terreno[l][c]);
        }
    }
    char intensidade;
    printf("Informe a intensidade da erupção: ");
    scanf("%c", &intensidade);

    bool continua = false;
    if (terreno[0][0] <= intensidade)
    {
        continua = true;
        terreno[0][0] = '*';
    }
    while (continua == true)
    {
        continua = false;
        for (int l = 0; l < T; l = l + 1)
        {
            for (int c = 0; c < T; c = c + 1)
            {
                if (terreno[l][c] == '*')
                {
                    // testar acima
                    // subtraio linha| mantenho coluna
                    if (l - 1 >= 0)
                    {
                        if (terreno[l - 1][c] != '*' && terreno[l - 1][c] <= intensidade)
                        {
                            terreno[l - 1][c] = '*';
                            continua = true;
                        }
                    }

                    // testar baixo
                    // adiciono linha | mantenho coluna
                    if (l + 1 <= T - 1)
                    {
                        if (terreno[l + 1][c] != '*' && terreno[l + 1][c] <= intensidade)
                        {
                            terreno[l + 1][c] = '*';
                            continua = true;
                        }
                    }

                    // testar esquerda
                    // subtraio coluna | mantenho linha
                    if (c - 1 >= 0)
                    {
                        if (terreno[l][c -1] != '*' && terreno[l][c - 1] <= intensidade)
                        {
                            terreno[l][c - 1] = '*';
                            continua = true;
                        }
                    }

                    // testar direita
                    // adiciono coluna | mantenho linha
                    if (c + 1 <= T - 1)
                    {
                        if (terreno[l][c+1] != '*' && terreno[l][c + 1] <= intensidade)
                        {
                            terreno[l][c + 1] = '*';
                            continua = true;
                        }
                    }
                }
            }
        }
    }
    for (int l = 0; l < T; l = l + 1)
    {
        for (int c = 0; c < T; c = c + 1)
        {
            printf("%c ", terreno[l][c]);
        }
        printf("\n");
    }
}