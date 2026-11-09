#include <stdio.h>
#include <stdlib.h>


int main(){
    int numero;
    printf("Informe um número: ");
    scanf("%d",&numero);
    int impar = 1;
    int cont = 0;
    while(numero >0){
        numero = numero - impar;
        impar = impar + 2;
        cont = cont + 1;
    }
    printf("Raiz é %d\n", cont);
}