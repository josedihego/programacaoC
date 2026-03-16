#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int qnt = (int)1.1/0.5;
    printf("quantidade = %d\n",qnt);

    float resto = 1.1 - qnt*0.5;
    printf("Resto do corte= %.2f\n",resto); 

}