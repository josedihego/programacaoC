#include <stdio.h>
#include <stdlib.h>

int main(){
    float x1,y1,v1,h1;
    float x2,y2,v2,h2;
    float x_inter, y_inter, h_inter, v_inter;

    printf("Informe as coodenadas do primero retangulo");
    scanf("(%f,%f)",&x1,&y1);
    printf("Informe a vertical e a horizontal:");
    scanf("%f,%f",&v1,&h1);
    printf("Informe as coodenadas do segundo retangulo");
    scanf("(%f,%f)",&x2,&y2);
    printf("Informe a vertical e a horizontal:");
    scanf("%f,%f",&v2,&h2);
    if(x2 >= x1 + h1 || x2+h2 <= x1 || y2 <= y1-v1
        || y2-v2 >= y1){
        printf("Não tem intersecção\n");
    }
    else{
        if(x2 < x1){
            x_inter = x1;
            h_inter = h2-(x1-x2);
        }
        else{
            x_inter = x2;
            h_inter = (x1+h1) - x2;
        }
        if(y2 < y1){
            y_inter = y2;
        }
    }
}