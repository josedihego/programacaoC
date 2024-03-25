#include<stdio.h>
#include<stdlib.h>

#define MAX 1000
// mostrem a soma dos 1000 primeiros números pares
int main(){
    int res = 0;
    for(int j=0;  j< MAX; j = j + 1){
        printf("%d\n",j*2);
        res = res + (j*2);
    }
    printf("A soma dos %d primeiros números pares é: %d\n", MAX, res);
}