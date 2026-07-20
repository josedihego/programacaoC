#include <stdio.h>
#include <stdlib.h>

int main(){
    int distancia;
    printf("Informe a distância percorrida pela partícula: ");
    scanf("%d",&distancia);
    distancia = distancia - 3;
    int resto = distancia % 8;
    if(resto==3){
        printf("Saída 1\n");
    }
    else if(resto==4){
        printf("Saída 2\n");
    }
    else if(resto==5){
        printf("Saída 3\n");
    }
    else{
        printf("Valor inválido\n");
    }
}