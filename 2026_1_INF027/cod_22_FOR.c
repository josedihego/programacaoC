
#include <stdio.h>
#include <stdlib.h>

#define QNT_IMPARES 200

int main(){
    int soma = 0;
    for(int impar=1; impar < 2 * QNT_IMPARES; impar = impar + 2){
        soma = soma + impar;
    }
    printf("Soma dos %d primeiros impares é %d\n",  QNT_IMPARES, soma);
}