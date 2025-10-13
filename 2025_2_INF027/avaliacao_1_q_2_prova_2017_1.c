#include <stdio.h>
#include <stdlib.h>


int main(){
    int N, M;
    float V;
    printf("Informe o valor da aposta: ");
    scanf("%f", &V);
    printf("Informe sua aposta: ");
    scanf("%d", &N);
    printf("Informe o resultado do sorteio: ");
    scanf("%d", &M);

    int N_m, N_c, N_d, N_u;
    N =  N % 10000;
    N_m = N / 1000;
    N = N % 1000;
    N_c = N / 100;
    N = N % 100;
    N_d = N / 10;
    N = N % 10;
    N_u = N;

    int M_m, M_c, M_d, M_u;
    M =  M % 10000;
    M_m = M / 1000;
    M = M % 1000;
    M_c = M / 100;
    M = M % 100;
    M_d = M / 10;
    M = M % 10;
    M_u = M;
    float premio = 0;
    if(N_m==M_m && N_c == M_c && N_d == M_d && N_u == M_u){
        premio = 3000 * V; 
    }
    else if(N_c == M_c && N_d == M_d && N_u == M_u){
        premio = 500 * V;
    }
    else if(N_d == M_d && N_u == M_u){
        premio = 50 * V;
    }
    else{
        // vai testar se o jogador ganhou no bicho
        
    }
}