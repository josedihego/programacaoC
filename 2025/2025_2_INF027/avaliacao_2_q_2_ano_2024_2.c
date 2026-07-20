#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int cont = 0;
    printf("Informe o primeiro número da sequência:");
    scanf("%d", &numero);
    //printf("%d\n", numero);
    if (numero == 1)
    {
        printf("%d\n", numero);
    }
    else
    {
        while (cont < 2)
        {
            printf("%d\n",numero);
            if (numero == 89)
            {
                cont = cont + 1;
            }
            int d = (numero / 10);
            int u = (numero % 10);
            numero = (d * d) + (u * u);
            if(numero>=100){
                numero = numero/2;
            }
            

        }
    }
}