#include <stdio.h>
#include <stdlib.h>

int main(){
    // imprimir 5O primeiros números ímpares
    // usando um while em C

    int impar = 1;
    int i = 0;
    while(i <50){
        printf("%d\n",impar);
        impar = impar + 2;
        i = i +1;
    }
}