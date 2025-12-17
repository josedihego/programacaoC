#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehVogal(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main()
{
    char nome[50];
    printf("Qual seu nome?");
    fgets(nome, 50, stdin);
    printf("Ola %s \n", nome);
    int num_vog = 0;
    int i = 0;
    while (nome[i] != '\0')
    {
        if (ehVogal(nome[i]))
        {
            num_vog = num_vog + 1;
        }
        i = i + 1;
    }
    printf("Numero de vogais em %s e %d \n", nome, num_vog);
}