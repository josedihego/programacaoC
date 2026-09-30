#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("Informe o valor na base ACM: ");
    scanf("%d",&numero);
    printf("%d ", numero);
    int u, d, c, m;
    m = numero/1000;
    numero = numero%1000;
    c = numero/100;
    numero = numero%100;
    d = numero/10;
    u = numero%10;

    int resultado = m * 24 + c * 6 + d * 2 + u * 1;
    printf("em decima é %d\n",resultado);

}