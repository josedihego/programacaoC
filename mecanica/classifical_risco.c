#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

char *transformar_caixa_baixa(char *texto, int qnt)
{
    char *res = malloc(qnt * sizeof(char));
    for (int i = 0; i < qnt; i = i + 1)
    {
        res[i] = tolower(texto[i]);
    }
    return res;
}
int main()
{
    bool esta_febre;
    bool esta_dor;
    bool esta_falta_ar;
    int batimentos;
    char *resposta = malloc(4 * sizeof(char));

    printf("%s", "Paciente está com febre?");
    scanf("%s", resposta);
    resposta = transformar_caixa_baixa(resposta, 4);
    if (strcmp(resposta, "sim") == 0)
    {
        esta_febre = true;
    }
    else
    {
        esta_febre = false;
    }

    printf("%s", "Paciente está com falta de ar?");
    scanf("%s", resposta);
    if (strcmp(resposta, "sim") == 0)
    {
        esta_falta_ar = true;
    }
    else
    {
        esta_falta_ar = false;
    }

    printf("%s", "paciente está com dor?");
    scanf("%s", resposta);
    if (strcmp(resposta, "sim") == 0)
    {
        esta_dor = true;
    }
    else
    {
        esta_dor = false;
    }
    printf("%s", "Quantidade batimentos cardíacos:");
    scanf("%d", &batimentos);

    if ((batimentos < 30 || batimentos > 180) && esta_dor && esta_febre && esta_falta_ar)
    {
        printf("%s\n", "Classificação vermelha.");
    }
    else
    {
        if (esta_falta_ar && (esta_dor || esta_febre))
        {
            printf("%s\n", "Classificação amarela.");
        }
        else
        {
            printf("%s\n", "Classificação verde.");
        }
    }
}
