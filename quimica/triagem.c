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
    printf("%s", "Paciente esta com dor? (SIM)(NÃO)");
    scanf("%s", resposta);
    if (strcmp(resposta, "SIM") == 0)
    {
        esta_dor = true;
    }
    else
    {
        esta_dor = false;
    }
    printf("%s", "Paciente esta com febre? (SIM)(NÃO)");
    scanf("%s", resposta);
    if (strcmp(resposta, "SIM") == 0)
    {
        esta_febre = true;
    }
    else
    {
        esta_febre = false;
    }
    printf("%s", "Paciente esta com falta de ar? (SIM)(NÃO)");
    scanf("%s", resposta);
    if (strcmp(resposta, "SIM") == 0  || strcmp(resposta, "sim") == 0 || strcmp(resposta, "s") == 0)
    {
        esta_falta_ar = true;
    }
    else
    {
        esta_falta_ar = false;
    }
    printf("%s", "Informe os batimentos cardiacos: ");
    scanf("%d", &batimentos);

    if((batimentos < 50 || batimentos > 150) && esta_dor && esta_falta_ar && esta_febre){
        printf("%s", "Paciente com classificação vermelha");
    }
    else{
       if(esta_dor && esta_falta_ar){
                printf("%s", "Paciente com classificação amarela");
       }
       else{
                printf("%s", "Paciente com classificação verde");

       }
    }

}