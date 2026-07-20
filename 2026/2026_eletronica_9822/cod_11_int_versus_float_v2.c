#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int dias = 5;
    dias = ceil(dias * (1+0.12));
    printf("dias = %d\n", dias);
}