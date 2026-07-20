#include <stdio.h>
#include <stdlib.h>

#define VERMELHO     "\x1b[31m"
#define VERDE   "\x1b[32m"
#define RESET   "\x1b[0m"

int main(){
    for(int k = 0; k <= 20; k = k+1){
        printf(VERMELHO "%d -"RESET,k);
    }
    printf(VERDE"\nFim\n"RESET);
}