#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>

#define N 4

int main(){
    char matriz [N][N];
    for(int l = 0; l < N; l = l+1){
        for(int c = 0; c < N; c = c+1){
            printf("informe o valor da posição matriz[%d][%d]: ",l,c);
            scanf("%d", &matriz[l][c]);
        }
    }
    printf("Informe as coordenadas de pouso:");
    int x, y;
    scanf("%d",&x);
    scanf("%d",&y);
    int q_mov=0;
    bool achei_tesouro = false;
    bool fora_matrix = false;
    while(q_mov <12 && achei_tesouro==false && fora_matrix==false){
        if(matriz[x][y]=='X'){
            achei_tesouro=true;
        }
        else if(matriz[x][y]=='S'){
            x=x+1;
        }
        else if(matriz[x][y]=='N'){
            x = x-1;
        }
        else if(matriz[x][y]=='L'){
            y=y+1;
        }
        else if(matriz[x][y]=='O'){
            y= y-1;
        }
        if(x<0 || y< 0 || x>=N || y >=N){
            fora_matrix = true;
        }
    }

}