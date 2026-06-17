#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){
    int valores[TAM];// valores tem tamanho 10
    for(int p=0; p < TAM; p = p +1){
        printf("Informe o elemento n° %d:",p+1);
        scanf("%d",&valores[p]);
    }
    printf("Valores informados: [");
    for(int p=0; p < TAM-1; p = p+1){
        printf("%d, ", valores[p]);
    }
    printf("%d]\n",valores[TAM-1]);
}