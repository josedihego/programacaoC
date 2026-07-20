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

    //limpeza do \n  
    int k = 0;
    while(texto[k]!='\0'){
        k = k + 1;
    }
    texto[k-1]='\0';

    k = 0;
    while(busca[k]!='\0'){
        k = k + 1;
    }
    busca[k-1]='\0';


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
        printf("%s NÃO é substring de %s\n", busca, texto);
    }
}