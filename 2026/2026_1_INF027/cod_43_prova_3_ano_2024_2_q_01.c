#include <stdio.h>
#include <stdlib.h>


#define D 4
#define F 2

int main(){
    int imagem[D][D];
    int resultado[D/F][D/F];

    for(int l = 0; l < D/F; l = l +F){
        for(int c=0; c < D/F; c = c+F){
            // andar dentro do bloco
            int max = imagem[l][c];
            for(int i =l; i < l+F;i =i+1){
                for(int j=c; j< c+F;j = j+1){
                    if(max < imagem[i][j]){
                        max = imagem[i][j];
                    }
                }
            }
            resultado[l/F][c/F] = max;
        }
    }
}