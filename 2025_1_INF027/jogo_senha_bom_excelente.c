#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 4

int main()
{
    char senha[TAM];
    char tentativa[TAM];
    for (int i = 0; i < TAM; i = i + 1)
    {
        printf("Desafiante. Informe a senha[%d]:", i);
        scanf(" %c", &senha[i]);
    }
    bool acertou = false;
    int num_ten = 0;
    while (acertou == false)
    {
        // CALCULO DO EXCELENTE
        num_ten = num_ten + 1;
        for (int i = 0; i < TAM; i = i + 1)
        {
            printf("Jogador. Informe a tentativa[%d]:", i);
            scanf(" %c", &tentativa[i]);
        }
        int num_excelentes = 0;
        for (int i = 0; i < TAM; i = i + 1)
        {
            if (senha[i] == tentativa[i])
            {
                num_excelentes = num_excelentes + 1;
            }
        }
        // printf("Número excelentes é : %d\n", num_excelentes);
        if (num_excelentes == TAM)
        {
            acertou = true;
        }
        // calculo do BOM
        int num_bom = 0;
        for (int i = 0; i < TAM; i = i + 1)
        {
            if (senha[i] != tentativa[i])
            { // certeza que não é excelente
                bool achei_um_bom = false;
                for (int j = 0; j < TAM; j = j + 1)
                {
                    if (senha[j] == tentativa[i] && i != j && achei_um_bom==false)
                    {
                        num_bom = num_bom + 1;
                        achei_um_bom = true;
                    }
                }
            }
        }
        // printf("Número bons é : %d\n", num_bom);
        printf("(E,B) = (%d,%d) \n", num_excelentes, num_bom);
    }
    printf("Parabéns você acertou depois de %d tentativas.\n", num_ten);
}