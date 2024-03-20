#include<stdio.h>
#include<stdlib.h>
// mostrem a soma dos 1000 primeiros números pares
int main(){
    int res = 0;
    for(int j=0;  j< 1000; j = j + 2){
        printf("%d\n",j);
    }
    printf("A soma dos 1000 primeiros números pares é: %d",res);
}