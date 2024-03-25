#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    int soma = 0;
    for (i = 1; i <= 100; i = i + 1)
    {
        if (i % 2 == 0)
        {
            soma = soma + (pow(i, 3) - 2);
        }
        else
        {
            soma = soma + (pow(i, 2) + 3);
        }
    }
    printf("Somatório = %d\n", soma);

    return EXIT_SUCCESS;
}