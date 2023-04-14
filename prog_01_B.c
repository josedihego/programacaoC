#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// exercício fazer a subtração  65 - 34
// divisão  65/34
// potenciação 65 elevado a 34
int soma(int v1, int v2){
    int resultado = v1+v2;
    return resultado;
}
int potenciacao(int v1, int v2){
    int resultado = pow(v1,v2);
    return resultado;
}

int multiplicacao(int v1, int v2){
    int resultado = v1 * v2;
    return resultado;
}

int main(){
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d", &y);
    int res_soma = soma(x,y);
    printf("Resultado soma: %d\n",res_soma);
    int res_mult = multiplicacao(x,y);
    printf("Resultado mult: %d\n", res_mult);
    return EXIT_SUCCESS;
}