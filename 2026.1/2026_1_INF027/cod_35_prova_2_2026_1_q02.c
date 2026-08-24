#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Informe o número incial:");
    scanf("%d", &numero);
    int ordenacao[4];
    int numero1;
    int numero2;
    while (numero != 6174)
    {
        // faça algo aqui
        ordenacao[0] = numero / 1000;
        numero = numero % 1000;
        ordenacao[1] = numero / 100;
        numero = numero % 100;
        ordenacao[2] = numero / 10;
        numero = numero % 10;       // opcional 1
        ordenacao[3] = numero % 10; // opcional 2
        // escolha opcional 1 OU opcial 2
        for (int j = 1; j < 4; j = j + 1)
        {
            int chave = ordenacao[j];
            int i = j - 1;
            while (i < 4 && chave < ordenacao[i])
            {
                ordenacao[i + 1] = ordenacao[i];
                i = i - 1;
            }
            ordenacao[i + 1] = chave;
        }

        numero1 = ordenacao[0] * 1000 + ordenacao[1] * 100 + ordenacao[2] * 10 + ordenacao[3];
        numero2 = ordenacao[3] * 1000 + ordenacao[2] * 100 +
                  ordenacao[1] * 10 + ordenacao[0];

        numero = numero2 - numero1;
        printf("%d - %d = %d\n", numero2, numero1, numero);

        // printf("em ordem %d%d%d%d\n",ordenacao[0], ordenacao[1],ordenacao[2], ordenacao[3]);
    }
}