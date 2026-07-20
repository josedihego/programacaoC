#include<stdio.h>
#include<stdlib.h>

int main(){
    int soma = 0;
    for(int k = 0; k < 101; k = k +2){
      soma = soma + k;
    }
    printf("Soma final é %d\n",soma);
}