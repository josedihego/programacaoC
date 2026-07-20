#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define M 7
#define N 18

int main(){
    //char caca_palavras[M][N];
    char caca_palavras[M][N] = {
        {'A', 'B', 'L', 'N', 'H', 'E', 'H', 'L', 'L', 'T', 'B', 'Q', 'J', 'F', 'R', 'G', 'Q', 'H'},
        {'K', 'J', 'U', 'L', 'O', 'C', 'A', 'L', 'I', 'Z', 'A', 'R', 'A', 'R', 'V', 'M', 'N', 'T'},
        {'F', 'E', 'O', 'G', 'E', 'Q', 'H', 'T', 'L', 'O', 'I', 'D', 'F', 'M', 'B', 'A', 'O', 'E'},
        {'R', 'W', 'B', 'N', 'U', 'S', 'G', 'E', 'V', 'I', 'X', 'O', 'I', 'O', 'X', 'G', 'U', 'S'},
        {'B', 'R', 'D', 'A', 'R', 'G', 'T', 'E', 'N', 'T', 'A', 'T', 'I', 'V', 'A', 'Y', 'J', 'T'},
        {'E', 'A', 'R', 'H', 'S', 'O', 'W', 'E', 'S', 'L', 'F', 'V', 'C', 'D', 'P', 'Z', 'J', 'E'},
        {'W', 'E', 'C', 'S', 'W', 'A', 'T', 'L', 'X', 'B', 'M', 'T', 'L', 'C', 'D', 'P', 'N', 'I'}
    };

    for(int l =0; l < M; l = l+1){
        for(int c=0; c < N; c =c+1){
            //scanf("%c", &caca_palavras[l][c]);
        }
    }
    int maior = M;
    if(N>M){
        maior = N;
    }
    char palavra[maior+1];
    fgets(palavra,maior+1,stdin);
    int tam_pal = 0;
    while(palavra[tam_pal]!='\n'){
        tam_pal = tam_pal+1;
    }
    printf("%s", palavra);
    // buscar nas linhas
    bool achou = false;
    for(int l =0; l< M; l = l +1){
        int pt = 0;
        int c = 0;
        bool comecou = false;
        while(palavra[pt]!='\n' && c < N){
            //printf("c=%d\n",c);
            if(palavra[pt]==caca_palavras[l][c]){    
                pt = pt+1;
                comecou = true;
            }
            else{
                pt = 0;
                if(comecou==true){
                    c = c-1;
                    comecou = false;
                }
            }
            c=c+1;
        }
        if(palavra[pt+1]=='\0'){
            achou = true;
        }
    }
    for(int c =0; c< N; c = c +1){
        int pt = 0;
        int l = 0;
        bool comecou = false;
        while(palavra[pt]!='\n' && l < M){
            printf("l=%d\n",l);
            if(palavra[pt]==caca_palavras[l][c]){    
                pt = pt+1;
                comecou = true;
            }
            else{
                pt = 0;
                if(comecou==true){
                    l = l-1;
                    comecou = false;
                }
            }
            l=l+1;
        }
        if(palavra[pt+1]=='\0'){
            achou = true;
        }
    }
    if(achou==true){
        printf("Pontuacao = %d\n", tam_pal);
    }
    else{
        printf("Pontuação = %d\n", -5);
    }
    printf("fim");


}