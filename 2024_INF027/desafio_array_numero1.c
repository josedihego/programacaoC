#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    int valores_A [] = {2,3,4,5,6,12,1,23,11,32};
    int valores_B [] = {2,31,4,51,16,12,1,23,111,32};
    for(int i = 0; i < 10; i = i+1){
        bool achei_igual = false;
        for(int j =0; j < 10; j = j+1){
            if(valores_A[i]==valores_B[j]){
                achei_igual = true;
            }
        }
        if(!achei_igual){
            printf("%d ", valores_A[i]);
        }
    }
    printf("\n");


}