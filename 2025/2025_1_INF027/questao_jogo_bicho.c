#include <stdio.h>
#include <stdlib.h>

int main(){
    float V;//valor da aposta
    int N;//aposta
    int M;// aposta sorteada
    int m5,m4,m3,m2,m1;
    int n5,n4,n3,n2,n1;
    printf("Informe o valor da aposta:");
    scanf("%f",&V);
    printf("Informe sua aposta:");
    scanf("%d",&N);
    printf("Informe a aposta sorteada:");
    scanf("%d",&M);
    n1 = N%10;
    N = N/10;
    n2 = N%10;
    N= N/10;
    n3 = N%10;
    N = N/10;
    n4 = N%10;
    N = N/10;
    n5 = N%10;
    printf("N1 = %d%d%d%d%d\n",n5,n4,n3,n2,n1);
    m1 = M%10;
    M = M/10;
    m2 = M%10;
    M = M/10;
    m3 = M%10;
    M = M/10;
    m4 = M%10;
    M = M/10;
    m5 = M%10;
    float premio = 0;
    if(n1==m1 && n2==m2 && n3==m3 && n4==m4){
        premio = V* 3000;
    }
    else if(n1==m1 && n2==m2 && n3==m3){
        premio = V * 500; 
    }
    else if(n1==m1 && n2==m2 ){
        premio = V * 50;
    }
    else{// nesse caso o jogador PODE ter ganhado 
        // o animal
        int animal_jogo = n2*10+n1;
        int animal_sorteado = m2*10+m1;
        int grupo_jogo;
        int grupo_sorteado;
        if(animal_jogo %4 == 0){
            grupo_jogo = animal_jogo/4;
        }
        else{
            grupo_jogo = animal_jogo/4 + 1;
        }
        if(animal_sorteado %4==0){
            grupo_sorteado = animal_sorteado/4;
        }
        else{
            grupo_sorteado = animal_sorteado/4+1;

        }
        if(grupo_jogo == grupo_sorteado){
            premio = V * 16;
        }

    }
    printf("Prémio %.2f\n", premio);

}