#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 3

int main()
{
    int latina[N][N];
    int gabarito[N];
    // Preenchimento
    for (int l = 0; l < N; l = l + 1)
    {
        for (int c = 0; c < N; c = c + 1)
        {
            printf("Informe o valor latina[%d][%d]:", l, c);
            scanf("%d", &latina[l][c]);
        }
    }
    for (int i = 0; i < N; i = i + 1)
    {
        gabarito[i] = i + 1;
        // printf("gabarito[%d]=%d\n", gabarito[i]);
    }

    // Verificação se é Latina ou NÃO
    bool eh_latina = true;

    // verificar por linha

    for (int l = 0; l < N; l = l + 1)
    {
        int contador = 0;
        for (int g = 0; g < N; g = g + 1)
        {
            bool achei = false;
            for (int c = 0; c < N; c = c + 1)
            {

                if (gabarito[g] == latina[l][c])
                {
                    if (achei == false)
                    {
                        contador = contador + 1;
                    }
                    achei = true;
                }
            }
        }
        if (contador < N)
        {
            eh_latina = false;
        }
        printf("Contador para linha %d é %d\n", l, contador);
    }

    // verificar colunas
    for (int c = 0; c < N; c = c + 1)
    {
        int contador = 0;
        for (int g = 0; g < N; g = g + 1)
        {
            bool achei = false;
            for (int l = 0; l < N; l = l + 1)
            {

                if (gabarito[g] == latina[l][c])
                {
                    if (achei == false)
                    {
                        contador = contador + 1;
                    }
                    achei = true;
                }
            }
        }
        if (contador < N)
        {
            eh_latina = false;
        }
        printf("Contador para coluna %d é %d\n", c, contador);
    }

    if(eh_latina==true){
        printf("Matriz é latina\n");
    }
    else{
        printf("Matriz NÃO é latina\n");
    }

}