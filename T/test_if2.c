#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include<time.h>



int main(){
    srand(time(0));
    int x = 10;
    int y = rand() % 21;
    while(y > x){
        y = y -1;
        printf("%d\n",y);
    }
}