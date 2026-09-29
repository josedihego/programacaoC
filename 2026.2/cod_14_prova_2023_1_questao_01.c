#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int x1, y1, h1, v1;
    int x2, y2, h2, v2;
    printf("Informe coordenadas e tamanhos do primeiro:");
    scanf("%d,%d,%d,%d", &x1, &y1, &h1, &v1);
    printf("Informe coordenadas e tamanhos do segundo:");
    scanf("%d,%d,%d,%d", &x2, &y2, &h2, &v2);
    bool x_intersecta = false;
    if(x2 <= x1){
        if(x2+h2 > x1){
            x_intersecta = true;
        }
    }
    else{
        if(x1+h1 > x2){
            x_intersecta = true;
        }
    }
    bool y_intersecta = false;
    if(y2 >= y1){
        if(y2-v2 < y1){
            y_intersecta = true;
        }
    }
    else{
        if(y1-v1 < y2){
            y_intersecta = true;
        }
    }

    if(x_intersecta && y_intersecta){
        printf("Tem intersecção\n");
        int xi, yi, hi, vi;
        if(x1 > x2){
            xi = x1;
        }
        else{
            xi = x2;
        }
        if(y1 > y2){
            yi = y2;
        }
        else{
            yi = y1;
        }
        // descobrindo hi
        if(x1+h1 > x2+h2){
            hi = h2;
        }
        else{
            if(x2< x1){
                hi = h2 - (x1-x2);
            }
            else{
                hi = h1 - (x2-x1);
            }
        }
        if(y1+v1 > y2+v2){
            vi = v2;
        }
        else{
            if(y2 > y1){
                vi = v2 - (y2-y1);
            }
            else{
                vi = v1 - (y1-y2);
            }
        }
        printf("intersecção %d %d %d %d\n ", xi,yi,hi,vi);
    }
    else{
        printf("Não tem intersecção\n");
    }

}