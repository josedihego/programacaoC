#include<stdio.h>
#include<stdlib.h>
#include <math.h>


int main(){
    float valor ;
    printf("Informe um valor: ");
    scanf("%f", &valor);
    float resultado = sqrt(valor);
    printf("Raiz quadrada de %.2f é %.4f\n",valor,resultado);
}