#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>


int main(){
    int j = 0;
    for(int i = 0; i < 6; i = i + 1){
        j = j+i;
        printf("%d\n",i);
    }
    
    printf("%d\n", j);
}