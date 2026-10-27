#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int N;
    int B;
    printf("Informe N:");
    scanf("%d",&N);

    for(int B=2; B < N-1; B = B+1){
        // O for vai fazer o B passar por todas
        //as bases todos os valores  1< B <N-1
        // então se N = 8 , então B será
        //1< B <7 , então B irá passo a passo
        // ter os valores 2,3,4,5,6
        int N_copia = N;
        int r_gab = N_copia%B;
        bool brasileiro = true;
        while(N_copia/B!=0){
            int r = N_copia%B;
            if(r!=r_gab){
                brasileiro = false;
            }
            N_copia = N_copia/B;
        }
        if(brasileiro==true){
            printf("Número %d é brasileiro na base %d\n",N,B);
        }
    }
}