#include<stdio.h>
#include<stdlib.h>

#define T 2
int main(){
    float matriz[T][T];
    int R, G, B;
    for(int l=0; l < T; l = l+1){
        for(int c=0; c < T; c = c+1){
            printf("Informe os valores RGB:");
            scanf("%d-%d-%d",&R,&G,&B);
            matriz[l][c] = (0.299 * R) + (0.587 * G) + (0.114 * B);
        }
    }
    for(int l=0; l < T; l = l+1){
        printf("\n");
        for(int c=0; c < T; c = c+1){
            printf("%.2f ", matriz[l][c]);
        }
    }
    printf("\n");


}