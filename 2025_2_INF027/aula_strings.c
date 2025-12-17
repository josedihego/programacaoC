#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    printf("Qual seu nome?");
    scanf("%s", &nome);
    printf("Ola %s\n", nome);
    int tamanho = 0;
    int i = 0;
    while (nome[i] != '\0')
    {
        tamanho = tamanho + 1;
        i = i + 1;
    }
    printf("%s seu nome tamanho de %d\n", nome, tamanho);
    printf("Valor de barra zero e: %d\n", '\0');
    printf("Valor do espaco em branco e: %d\n", ' ');

    printf("%d %d %d %d %d\n", 'a', 'e', 'i', 'o', 'u');
    printf("%d %d %d %d %d\n", 'A', 'E', 'I', 'O', 'U');
}