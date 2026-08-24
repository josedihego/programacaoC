#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;
    int resto;
    printf("Informe o valor n1: ");
    scanf("%d",&n1);
    printf("Informe o valor n2: ");
    scanf("%d",&n2);
    resto = n1%n2;
    while(resto!=0){
        n1 = n2;
        n2 = resto;
        resto = n1 % n2;
    }
    printf("MDC é %d\n",n2);
}