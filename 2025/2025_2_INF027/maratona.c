#include <stdio.h>
#include <stdio.h>

int main(){
    int distancia = 100;
    int dia = 1;
    int soma = distancia;
    while(distancia < 42195){
        distancia = distancia + 300;
        soma = soma + distancia;
        dia = dia +1;
    }
    printf("Ela percore uma maratona no dia %d\n",dia);
    printf("Ao total ele percorerá aproximadamente %d km", soma/1000);
}