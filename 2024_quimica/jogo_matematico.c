#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    srand(time(0));
    bool acertou = true;
    int qnt = 0;
    while (acertou)
    {
        qnt = qnt + 1;
        int n1 = rand() % 101;
        int n2 = rand() % 101;
        printf("Qual o valor de %d + %d ?", n1, n2);
        int resposta;
        scanf("%d", &resposta);
        if (resposta != n1 + n2)
        {
            acertou = false;
            printf("A resposta certa é: %d \n", n1 + n2);
        }
    }
    printf("Você tentou %d vezes \n",qnt);
}