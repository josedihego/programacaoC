#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogar_dado(){
    int res = (rand()%6)+1;
    return res;
}

int main(){
    srand(time(NULL));
    int res = jogar_dado();
    printf("res = %d\n",res);
}