#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calc_distancia(float x1, float y1, float x2, float y2){
    return sqrt((x2-x1)*(x2-x1) + (y2-y1)* (y2-y1));
}


int main(){
    float x1 = 0, y1 = 0;
    float x2, y2;
    float distancia_total = 0;
    do{
        printf("Informe o próximo ponto:");
        scanf("%f,%f",&x2,&y2);
        float dis = calc_distancia(x1,y1,x2,y2);
        distancia_total = distancia_total + dis;
        x1 = x2;
        y1 = y2;
    } while(x2!=0 || y2!=0); //  x2!=0 && y2!=0
    printf("Distância percorrida é %.2f\n",distancia_total);

}