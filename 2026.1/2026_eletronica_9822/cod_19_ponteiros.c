#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

int main()
{
    char *texto = malloc(30 * sizeof(char));
    printf("Informe o texto a ser verificado:");
    fgets(texto, 30, stdin);
    int p = 0;
    while (texto[p] != '\n')
    {
        printf("letra: %c\n", texto[p]);
        p = p + 1;
    }
    printf("tamanho da palavra: %d\n", p);
    bool palindroma = true;
    int meio = p / 2;
    int i = 0;
    while (i < meio && palindroma)
    {
        if (texto[i] != texto[p - 1])
        {
            palindroma = false;
        }
        i = i + 1;
        p = p - 1;
    }
    if(palindroma){
        printf("%s é palindroma\n", texto);
    }
    else{
        printf("%s não é palindroma\n", texto);
    }
}