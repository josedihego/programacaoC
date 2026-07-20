#include <stdio.h>
#include <stdlib.h>


int main(){
    int somatorio =0;
    for(int i = 0; i < 100; i = i +1){
        printf("impar = %d\n", (i * 2) + 1);
        somatorio = somatorio + (i * 2) + 1;
    }
    printf("Somatório dos 100 primeiros impares é %d\n", somatorio);
}