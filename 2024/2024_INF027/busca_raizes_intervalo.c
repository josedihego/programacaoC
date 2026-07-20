#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int a, b, c;
    printf("Informe os valores de a, b e c:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    bool achou = false;
    int x = 0;
    while(!achou && x <= 1000){
        int fx = (a * (x*x)) + (b * x) + c;
        if(fx == 0){
            achou = true;
            printf("Achei uma raiz: %d\n", x);
        }
        x = x + 1;
    }
    if(!achou){
        printf("Infelizmente não existe raíz entre [0-1000]\n");
    }


}