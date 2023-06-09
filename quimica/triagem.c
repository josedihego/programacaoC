#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    bool esta_dor;
    bool esta_febre;
    bool esta_falta_ar;
    int batimentos;
    char *resposta = malloc(4 * sizeof(char));
    printf("%s", "Paciente esta com dor? (SIM)(NAO)");
    scanf("%s", resposta);
    if (strcmp(resposta, "SIM") == 0)
    {
        esta_dor = true;
    }
    else
    {
        esta_dor = false;
    }
}