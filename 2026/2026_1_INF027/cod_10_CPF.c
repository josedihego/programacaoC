#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, v10, v11;
    printf("Informe seu CPF para validação:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &v10, &v11);
    int soma1 = d1 * 10 +
                d2 * 9 +
                d3 * 8 +
                d4 * 7 +
                d5 * 6 +
                d6 * 5 +
                d7 * 4 +
                d8 * 3 +
                d9 * 2;
    int resto1 = soma1 %11;
    int digito_verificador_1;
    if(resto1<2){
        digito_verificador_1 = 0;
    }
    else{
        digito_verificador_1 = 11 - resto1;
    }
    // verificação segundo dígito verificador
    int soma2 = d1 * 11 +
                d2 * 10 +
                d3 *  9 +
                d4 *  8 +
                d5 *  7 +
                d6 *  6 +
                d7 *  5 +
                d8 *  4 +
                d9 * 3 +
                digito_verificador_1 * 2;
    int resto2 = soma2 % 11;
    int digito_verificador_2;
    if(resto2 < 2){
        digito_verificador_2 = 0;
    }
    else{
        digito_verificador_2 = 11 - resto2;
    }
    printf("Digito verificado 1: %d\n",digito_verificador_1);
    printf("Dígito verificador 2: %d\n",digito_verificador_2);
}