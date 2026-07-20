#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<unistd.h>

int main(){
    srand(time(0));
    int tensao = rand() % 250;
    while(tensao >= 105 && tensao<=230){
        printf("Tensão de trabalho normal: %d\n",tensao);
        tensao = rand() % 250;
        sleep(3);
    }
    printf("Tensão fora do intervalo adequado %d\n", tensao);
    return EXIT_SUCCESS;
}