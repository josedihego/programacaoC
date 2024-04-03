#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int aleatorio = rand()%501;
    printf("%d\n",aleatorio);
}