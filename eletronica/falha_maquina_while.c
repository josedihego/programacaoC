#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float taxa_falha;
    float taxa_crescimento;
    int qnt_ciclos = 0;
    printf("%s","Informe a taxa inicial de falha:");
    scanf("%f", &taxa_falha);
    printf("%s", "Informe e taxa de crescimento:");
    scanf("%f", &taxa_crescimento);
    while (taxa_falha < 1)
    {
        taxa_falha = taxa_falha * (1 +taxa_crescimento);
        qnt_ciclos = qnt_ciclos + 1;
    }
    printf("Sua máquina ficará obsoleta em %d ciclos\n", qnt_ciclos);
    printf("Com taxa de falha de %f\n", taxa_falha);

    return EXIT_SUCCESS;

}