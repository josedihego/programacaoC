#include <stdio.h>
#include <stdlib.h>

int main(void){
    int valor = 100;
    int * pi = &valor;
    printf("valor: %d\n", *pi);
    *pi = 200;
    printf("valor: %d\n", *pi);
    valor = 300;
    printf("valor: %d\n", *pi);

}