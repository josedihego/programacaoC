#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>


int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x+y > 20 && x-y < 5){
        printf("A");
    }
    else{
        printf("B");
    }
}