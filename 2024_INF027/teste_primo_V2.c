#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int x;
    printf("Informe o valor de x a ser testado:");
    scanf("%d", &x);
    int num_div = 0;
    for(int i =1; i <= x; i = i +1){
        if(x%i==0) num_div = num_div + 1;
    }
    if(num_div==2){
        printf("O valor %d é primo :)\n",x);
    }
    else{
        printf("O valor %d não é primo :(\n",x);
    }
}