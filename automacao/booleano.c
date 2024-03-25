#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    bool esta_febre;
    bool esta_cansaco;
    bool esta_dor;
    int batimentos;
    char *res = malloc(10 * sizeof(char));
    printf("%s", "Paciente com febre? (SIM, NÃO)");
    scanf("%s", res);
    if (strcmp(res, "SIM") == 0 || strcmp(res,"sim")==0)
    {
        esta_febre = true;
    }
    else
    {
        esta_febre = false;
    }

    printf("%s", "Paciente cansado? (SIM, NÃO)");
    scanf("%s", res);
    if (strcmp(res, "SIM") == 0 || strcmp(res,"sim")==0)
    {
        esta_cansaco = true;
    }
    else
    {
        esta_cansaco = false;
    }
    printf("%s", "Paciente esta com dor? (SIM, NÃO)");
    scanf("%s", res);
    if (strcmp(res, "SIM") == 0 || strcmp(res,"sim")==0)
    {
        esta_dor = true;
    }
    else
    {
        esta_dor = false;
    }
    printf("%s", "Informe os batimentos:");
    scanf("%d", &batimentos);

    if (batimentos >= 50 && batimentos <= 90 &&
        !esta_febre && !esta_cansaco)
    {
        printf("%s", "Classificação verde (baixo risco)");
    }
    else
    {
        if ((batimentos < 50 || batimentos > 90) && esta_cansaco && esta_dor && esta_febre)
        {
            printf("%s", "Classificação vermelha (alto risco)");
        }
        else
        {
            printf("%s", "Classificação amarela (médio risco)");
        }
    }
}