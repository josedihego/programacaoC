#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor;
    printf("Informe um valor entre 0 e 999 na base decimal: ");
    scanf("%d",&valor);
    int copia_valor = valor;
    int alg1, alg2, alg3, alg4;
    alg1 = valor%7;
    valor = valor/7;
    alg2 = valor%7;
    valor = valor/7;
    alg3 = valor%7;
    valor=valor/7;
    alg4 = valor%7;
    printf("(%d%d%d%d)\u2087\n", alg4,alg3,alg2,alg1);
    int DV = (alg1+alg2+alg3+alg4)%7;
    printf("%d%d\n",copia_valor, DV);
}