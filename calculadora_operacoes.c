#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// pow(x,y)

int somar(int v1, int v2){
    int resultado = v1 + v2;
    return resultado;
}
int multiplicar(int v1, int v2){
    int resultado =  v1 * v2;
    return resultado;
}
int potenciar(int v1, int v2){
    int resultado = pow(v1,v2);
    return resultado;
}

int main(){
    int x;
    int y;
    printf("%s", "Informe o valor de x: ");
    scanf("%d", &x);
    printf("%s", "Informe o valor de y: ");
    scanf("%d", &y);
    int res_soma = somar(x,y);
    printf("Resultado da soma : %d\n", res_soma);
    int res_mult = multiplicar(x,y);
    printf("Resultado multiplicação: %d\n", res_mult);
    int res_pot = potenciar(x,y);
    printf("Resultado potenciar: %d\n", res_pot);
    
    return EXIT_SUCCESS;
}