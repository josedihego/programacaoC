#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int N;
    //printf("Informe o valor de N:");
    //scanf("%d", &N);
    for (int N = 0; N <= 1000; N = N + 1)
    {
        bool numero_eh_brasileiro = false;
        for (int b = 2; b < N - 1; b = b + 1)
        {
            // representar N na base b
            int N_copia = N;
            int resto_inicial = N_copia % b;
            bool todos_iguais = true;
            while (N_copia != 0)
            {
                int resto = N_copia % b;
                if (resto_inicial != resto)
                {
                    todos_iguais = false;
                }
                N_copia = N_copia / b;
            }
            if (todos_iguais)
            {
                printf("%d na base %d\n", N, b);
                numero_eh_brasileiro = true;
            }
        }
        if (numero_eh_brasileiro)
        {
            printf("%d é um número brasileiro\n",N);
        }
        /*
        else
        {
            printf("O número NÃO é brasileiro\n");
        }
        */
    }
}