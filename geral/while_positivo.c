#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor = 1.0;
    float soma = 0.0;
    float media;
    int contador = 0;
    while(valor > 0 ){
        printf("%s", "Informe uma valor positivo para continuar:");
        scanf("%f", &valor);
        if(valor >0 ){
            soma = soma + valor;
            contador = contador +1;
        }
    }
    media = soma/contador;
    printf("Média %g\n", media);
    

}