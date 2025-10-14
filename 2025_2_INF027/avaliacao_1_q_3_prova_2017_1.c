#include<stdio.h>
#include<stdlib.h>


int main(){
    float P1,C1, P2, C2;
    printf("Informe P1:");
    scanf("%f",&P1);
    printf("Informe P2:");
    scanf("%f",&P2);
    printf("Informe C1:");
    scanf("%f",&C1);
    printf("Informe C2:");
    scanf("%f",&C2);
    if ((P1*C1) == (P2*C2)){
        printf("Gangorra em equilíbrio ⚖️\n");
    }
    else{
        if((P1*C1) > (P2*C2)){
            printf("Gangorra para baixo no lado 1️⃣\n");
        }
        else{
            printf("Gangorra para baixo no lado 2️⃣\n");
        }
    }
}