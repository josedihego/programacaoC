#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char texto[200];
    char busca[200];

    printf("Informe o texto completo:");
    fgets(texto, 200, stdin);
    printf("Informe o texto buscado:");
    fgets(busca, 200, stdin);

    int i = 0;
    bool eh_sub = false;
    while (texto[i] != '\0' && eh_sub == false)
    {
        int j = 0;
        if (busca[j] == texto[i])
        {
            while (busca[j] == texto[i + j] && busca[j] != '\0')
            {
                j = j + 1;
            }
            if (busca[j] == '\0')
            {
                eh_sub = true;
            }
        }
        i = i + 1;
    }
    if (eh_sub == true)
    {
        printf("%s é substring de %s\n", busca, texto);
    }
    else
    {
        printf("%s é substring de %s\n", busca, texto);
    }
}