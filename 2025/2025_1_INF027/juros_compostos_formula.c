#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float VI = 1000;
    float j = 0.03;
    float VF = 2* VI;

    float qnt_meses = log10(VF/VI)/log10(1+j);
    printf("Depois de %.0f meses a dívida dobra\n", ceil(qnt_meses));
}