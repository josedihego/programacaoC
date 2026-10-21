#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>


int main(){
    srand(time(NULL));
    char jogo [3][3] ={ {'_','_','_'},
                        {'_','_','_'},
                        {'_','_','_'}
                      };
    printf("Jogo:\n");
    for(int l=0; l < 3; l = l+1){
        for(int c =0; c< 3; c = c+1){
            printf("%c ",jogo[l][c]);
            fflush(stdout);
            sleep(1);
        }
        printf("\n");
    }
    printf("\n");

    printf("Informe uma jogada");
    int l, c;
    char jogada;
    scanf("%d,%d,%c",&l,&c,&jogada);
    printf("jogada na posição [%d][%d] é %c\n",l,c,jogada);
    jogo[l][c]= jogada;

    printf("Jogo:\n");
    for(int l=0; l < 3; l = l+1){
        for(int c =0; c< 3; c = c+1){
            printf("%c ",jogo[l][c]);
            fflush(stdout);
            sleep(1);
        }
        printf("\n");
    }
    printf("\n");

    l = rand()%3;
    c = rand()%3;
    jogo[l][c] = 'X';

    printf("Jogo:\n");
    for(int l=0; l < 3; l = l+1){
        for(int c =0; c< 3; c = c+1){
            printf("%c ",jogo[l][c]);
            fflush(stdout);
            sleep(1);
        }
        printf("\n");
    }
    printf("\n");
}