#include <stdio.h>
#include <stdlib.h>

int main(){
    const int i = 10;
    printf("valor de i = %d\n", i);
    i = 30;// ERRO, i tem o qualificador const

}
