#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){
    int valores[TAM];

    for(int j = 0; j < TAM; j = j+1){
        printf("Informe o valor n° %d:", j+1);
        scanf("%d",&valores[j]);
    }
    // imprimir o array na ordem em que os valores foram informados

    printf("Valores informados [");
    for(int k=0; k < TAM-1; k = k+1){
        printf("%d, ",valores[k]);
    }
    printf("%d]\n", valores[TAM-1]);

    // exercício: imprimir em ordem inversa a ordem informada
    

}