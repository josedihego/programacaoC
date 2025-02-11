#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define N 9
#define M 14

int main(){
    char gotas[N][M];
    for(int i = 0; i < N; i = i +1){
        for(int j = 0; j < M; j = j+1){
            scanf("%c",&gotas[i][j]);
        }
    }

    for(int i =0; i<N; i = i+1){
        for(int j =0; j<M; j=j+1){
            char g = gotas[i][j];
            if(g=='.'){
                bool c1 = gotas[i-1][j]=='o';
                bool c2 = gotas[i][j-1]=='o' && gotas[i+1][j-1]=='#';
                bool c3 = gotas[i][j+1]=='o' && gotas[i+1][j+1]=='#';
                if(j-1>=0 && i-1>=0){
                    if(c1 || c2 || c3){
                        gotas[i][j] = 'o';
                    }
                }
            }
        }
    }
}