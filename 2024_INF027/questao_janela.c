#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pj1, pj2, pj3;
    int cj1, cj2, cj3;
    int posicoes[600];
    for (int i = 0; i < 600; i = i + 1)
    {
        posicoes[i] = 0;
    }
    // Usuário inteligente sabe que as
    // posições vão de 0 a 599
    printf("Informe a posição da primeira janela: ");
    scanf("%d", &pj1);
    printf("Informe o comprimento da primeira janela: ");
    scanf("%d", &cj1);
    for (int i = pj1; i < pj1 + cj1; i = i + 1)
    {
        posicoes[i] = 1;
    }
    printf("Informe a posição da segunda janela: ");
    scanf("%d", &pj2);
    printf("Informe o comprimento da segunda janela: ");
    scanf("%d", &cj2);
    for (int i = pj2; i < pj2 + cj2; i = i + 1)
    {
        posicoes[i] = 1;
    }
    printf("Informe a posição da terceira janela: ");
    scanf("%d", &pj3);
    printf("Informe o comprimento da terceira janela: ");
    scanf("%d", &cj3);
    for (int i = pj3; i < pj3 + cj3; i = i + 1)
    {
        posicoes[i] = 1;
    }
    printf("Contando posição em aberto...\n");
    int qnt_aberto = 0;
    for (int i = 0; i < 600; i = i + 1)
    {
        if (posicoes[i] == 0)
        {
            qnt_aberto = qnt_aberto + 1;
        }
    }
    printf("Area aberta: %d c³\n", qnt_aberto*100);
}
/**
 * Informe a posição da primeira janela: 0
Informe o comprimento da primeira janela: 250
Informe a posição da segunda janela: 50
Informe o comprimento da segunda janela: 150
Informe a posição da terceira janela: 350
Informe o comprimento da terceira janela: 200
Contando posição em aberto...
Area aberta: 15000 c³
 */