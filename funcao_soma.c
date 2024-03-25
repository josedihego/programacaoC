
#include <stdio.h>
#include <stdlib.h>

int soma(float a, float b){
    int res = a + b;
    return res;
}


int main(void)
{
    int saldo = soma(5300,-300);
    printf("saldo: %d\n", saldo);
    saldo = soma(saldo, -500);
    printf("saldo: %d\n", saldo);
}