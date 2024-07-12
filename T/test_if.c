#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>


int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x==y || x!=y || x >10){
        printf("A");
    }
    else{
        printf("B");
    }
}