#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>


int main(){
    int j = 3;
    int r = 0;
    for(int i = 2; i < 7; i = i + 2){
        r = r + (i*i) + (j*j);
    }
    printf("%d\n",j);

    printf("%d\n", r);
}