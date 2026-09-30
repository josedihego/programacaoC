#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int trocar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    printf("Tamanho de um char %ld\n", sizeof(char));
    printf("Tamanho de um bool %ld\n", sizeof(bool));
    printf("Tamanho de um int %ld\n", sizeof(int));
    printf("Tamanho de um long int %ld\n", sizeof(long int));
    printf("Tamanho de um float %ld\n", sizeof(float));
    printf("Tamanho de um double %ld\n", sizeof(double));

    char *nome = malloc(50 * sizeof(char));
    printf("Qual seu nome completo?");
    fgets(nome,50,stdin);
    int i = 0;
    while(nome[i]!= '\n'){
        printf("%c\n", nome[i]);
        i = i +1;
    }
    int x = 5;
    int y = 8;
    printf("Seja bem vindo %s\n", nome);
    printf("Antes: x= %d e y=%d\n", x, y);
    trocar(&x, &y);
    printf("Depois: x= %d e y=%d\n", x, y);
}