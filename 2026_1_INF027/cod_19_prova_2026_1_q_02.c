#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int numero1;
    int numero2;
    int qnt_dif =0;

    printf("Informe n, número 1 e número 2:");
    scanf("%d,%d,%d",&n,&numero1,&numero2);
    printf("%d e %d", numero1, numero2);
    int resto1 = numero1 % 2;
    int resto2 = numero2 % 2;
    if(resto1!=resto2){
        qnt_dif = qnt_dif +1;
    }
    numero1 = numero1 /2;
    numero2 = numero2/2;

    resto1 = numero1 %2;
    resto2 = numero2 % 2;
    if(resto1!=resto2){
        qnt_dif = qnt_dif +1;
    }

    numero1 = numero1/2;
    numero2 = numero2/2;
    resto1 = numero1 %2;
    resto2 = numero2%2;
    if(resto1!=resto2){
        qnt_dif = qnt_dif + 1;
    }

    numero1 = numero1/2;
    numero2 = numero2/2;
    resto1 = numero1%2;
    resto2 = numero2%2;
    if(resto1!=resto2){
        qnt_dif = qnt_dif +1;
    }
    if(qnt_dif >= n){ // n <= qnt_dif
        printf(" são %d-binariamente distintos\n",n);
    }
    else{
         printf(" não são %d-binariamente distintos\n",n);
    }

}