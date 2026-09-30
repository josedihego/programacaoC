#include <stdio.h>
#include <stdlib.h>

int main(){
    //imprimir os 50 primeiros números impares

    int impar = 1;
    for(int i=0; i < 50; i = i +1){
        printf("%d\n",impar);
        impar = impar + 2;
    }
}