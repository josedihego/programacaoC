#include <stdio.h>
#include <stdlib.h>

int soma(int v1, int v2){
    int resultado = v1+v2;
    return resultado;
}

int multiplicacao(int v1, int v2){
    int resultado = v1 * v2;
    return resultado;
}

int main(){
    int x = 15;
    int y = 20;
    int res_soma = soma(x,y);
    printf("Resultado soma: %d\n",res_soma);
    int res_mult = multiplicacao(x,y);
    printf("Resultado mult: %d\n", res_mult);
    return EXIT_SUCCESS;
}