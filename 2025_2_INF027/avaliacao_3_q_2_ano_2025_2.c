#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

#define N 4

int main(){
    char matriz [N][N] = {
        {'S', 'S', 'O', 'S'},
        {'S', 'L', 'L', 'S'},
        {'O', 'X', 'O', 'O'},
        {'N', 'S', 'S', 'N'}
    };
    for(int l =0; l < N; l = l+1){
        for(int c=0; c<N; c = c+1){
            printf("Informe matriz[%d][%d]:",l,c);
           // scanf("%c",&matriz[l][c]); //removi para testar
        }
    }
    int p_l;//posição da linha
    int p_c;//posição da coluna

    bool ganhou = false;
    bool loop = false;
    bool fora = false;
    printf("Informe a posição da queda: (linha,coluna):");
    scanf("(%d,%d)",&p_l,&p_c);
    int p_l_incial = p_l;
    int p_c_incial = p_c;
    while(ganhou==false && loop==false && fora==false){
        if(matriz[p_l][p_c]=='X'){
            ganhou=true;
        }
        if(matriz[p_l][p_c]=='N'){
            p_l = p_l-1;
        }
        else if(matriz[p_l][p_c]=='S'){
            p_l = p_l +1;
        }
        else if(matriz[p_l][p_c]=='L'){
            p_c = p_c +1;
        }
        else if(matriz[p_l][p_c]=='O'){
            p_c = p_c -1;
        }
        if(p_l < 0 || p_l >3 || p_c <0 || p_c >3){
            fora = true;
        }
        printf("(%d,%d)\n",p_l,p_c);
        if(p_l == p_l_incial && p_c == p_c_incial){
            loop = true;
            printf("Colocou loop true\n");
        }
    }
    if(ganhou==true){
        printf("Você ganhou o tesouro\n");
    }
    else{
        if(fora==true){
            printf("Você perdeu pois caiu fora\n");
        }
        else{
            printf("Você perdeu pois ficou em loop");
        }
    }
}