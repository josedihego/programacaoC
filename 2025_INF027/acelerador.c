#include<stdio.h>
#include<stdlib.h>

int main(){
    int distancia;
    printf(" ⚛️ Informe a distância percorrída pela particula:");
    scanf("%d",&distancia);
    distancia = distancia -5;
    int numero_sensor = distancia % 8;
    if(numero_sensor >=1 && numero_sensor<=3){
        printf("A particula saíra pelo sensor %d\n", numero_sensor);
    }
    else{
        printf("A particula ⚛️ não saíra em nenhum dos sensores ⚡");
    }
}