#include <stdio.h>
#include <stdlib.h>

int main(){
    int d;
    float D;
    float A;
    printf("Informe o dia de chegada:");
    scanf("%d",&d);
    printf("Informe o valor base da diária D:");
    scanf("%f",&D);
    printf("Informe o valor de aumento A:");
    scanf("%f",&A);
    int f_mult;
    if(d <=16){
        f_mult = d-1;
    }
    else{
        f_mult = 15;
    }
    int num_dia = 31 - (d-1);
    float total = (D + f_mult * A) * num_dia;
    printf("Custo total: %.2f\n", total);
}