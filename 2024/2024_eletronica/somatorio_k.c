#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float smt = 0.0;
    for(int k = 1; k <= 100; k = k +1){
        float r = k *(M_PI / 180.0);
        smt = smt + pow(k,2)*log2(k)+ sin(r);
    }
    printf("O somatório é %.2f\n", smt);
}