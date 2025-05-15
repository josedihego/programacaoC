#include<stdio.h>
#include<stdlib.h>

int main(){
    float V = 1000;
    float j = 0.25;
    int m;
    for(m=0; V < 2000; m = m+1){
        V = V * (1+j);
    }
    printf("O valor dobra depois de %d meses\n",m);
    printf("Você deve ao final %.2f\n",V);
    return EXIT_FAILURE;
}