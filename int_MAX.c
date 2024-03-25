#include <stdio.h>
#include <limits.h>

int main(void){
    int a = 34;
    int max =  INT_MAX;
    printf("a = %d \n", a);
    printf("max = %d \n", max);
    
    int alem  =  max + a;
    printf("alem = %d \n", alem);
    
    long int alem2 = max + a;
    printf("alem2 = %d \n", alem2);
}