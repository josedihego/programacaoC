#include <stdio.h>
#include <stdlib.h>

int calcular_caminho(int c, int s)
{
    int copia_c = c;

    int p1 = 0;
    int p2 = 0;
    int cont_mais = 0, cont_menos = 0;
    while (c != s)
    {
        if (c == 9)
            c = 0;
        else
            c = c + 1;
        cont_mais = cont_mais + 1;
    }
    while (copia_c != s)
    {
        if (copia_c == 0)
            copia_c = 9;
        copia_c = copia_c - 1;
        cont_menos = cont_menos + 1;
    }
    if (cont_mais < cont_menos)
    {
        printf("Melhor caminho (horário): %d\n", cont_mais);
        return cont_mais;
    }
    else
    {
        printf("Melhor caminho(anti-horário): %d\n", cont_menos);
        return cont_menos;
    }
}
int main()
{
    int c1 = 9;
    int c2 = 3;
    int c3 = 4;
    int s1 = 5;
    int s2 = 0;
    int s3 = 8;
    int p1 = calcular_caminho(c1, s1);
    int p2 = calcular_caminho(c2, s2);
    int p3  = calcular_caminho(c3, s3);
    printf("A menor quantidade de movimentos é: %d", p1+p2+p3);
}