#include <stdio.h>
#include <stdlib.h>

int main(){
    float soma = 0;
    int N;
    printf("Informe N: ");
    scanf("%d",&N);
    int numero = 0;
    for(int i = 1; i <= N; i = i +1){
        numero = numero + i;
        soma = soma + (1.0/numero);
    }
    printf("Soma = %.8f\n",soma);
}