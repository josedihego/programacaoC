#include <stdio.h>
#include<stdlib.h>
#include<math.h>

float calcular_distancia(float x1,float y1,float z1,float x2,float y2,float z2){
    float distancia = sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));
    return distancia;
}

int main(){
    for(int i = 0; i < 5; i = i + 1){
        //ler o x, o y e o z de um ponto
    }
    float res = calcular_distancia(3,4,5,1,2,2);
    printf("Distância entre pontos: %f", res);
}