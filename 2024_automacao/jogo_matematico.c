#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int main(){
    srand(time(0));
    for(int i = 0; i < 10; i = i +1){
        int aleatorio = rand() % 7;
        if(aleatorio==0) aleatorio=1;
        printf("%d\n", aleatorio);
        sleep(5);
    }
}

