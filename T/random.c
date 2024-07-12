#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include<time.h>



int main(){
    srand(time(0));
    int x = rand() % 20;
    int y = rand() % 10;
    if(x < y){
        printf("A");
    }
    else{
        printf("B");
    }
}   