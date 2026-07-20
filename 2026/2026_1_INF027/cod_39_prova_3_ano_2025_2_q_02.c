#include <stdio.h>
#include <stdlib.h>

#define M 4

int main(){
    printf("Mudou\n");
     char tabuleiro[M][M] = {
        {'S', 'S', 'O', 'S'},
        {'S', 'L', 'S', 'S'},
        {'O', 'N', 'O', 'O'},
        {'N', 'S', 'S', 'N'}
    };// numero linhas primeiramente, numero de colunas segundamente

    // preenchimento usual da matriz
    for(int l=0; l < M; l = l +1){
        for(int c=0; c < M; c = c+1){
            //printf("Informe o elemento [%d][%d]:", l,c);
            //scanf(" %c",&tabuleiro[l][c]);
        }
    }

   
    int x;
    int y;
    printf("Informe as coordenadas onde você quer cair: ");
    scanf("(%d,%d)",&x,&y);
    printf("você caiu em (%d,%d)\n", x, y);

    int passos = 0;
    // passos < M * M : enquanto for menor que 16 (M*M) você não esta em loop
    //tabuleiro[x][y]!='X' , você não ganhou ainda
    // x>=0 && x<=M-1 && y>=0 && y<=M-1 : você ainda esta no tabuleiro
    // se TUDO acima for verdade você ainda se move
    while(passos < 2 * M * M && tabuleiro[x][y]!='X' && x>=0 && x<=M-1 && y>=0 && y<=M-1){
        char movimento = tabuleiro[x][y];
        switch(movimento){
            case 'N':
                x = x -1;
                break;
            case 'S':
                x = x+1;
                break;
            case 'L':
                y = y +1;
                break;
            case 'O':
                y = y-1;
                break;
        }
        passos = passos+1;
        //printf("você esta em (%d,%d) depois de %d passos\n",x,y,passos);
    }
    if(tabuleiro[x][y]=='X'){
        printf("Vitória depois de %d passos\n",passos);
    }
    else{
        if(passos>= 2 * M*M){
            printf("Pedeu. Preso para sempre kkkk \n");
        }
        else{
            printf("Você foi expelido do tabuleiro \n");
        }
    }
}