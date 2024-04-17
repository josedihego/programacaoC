#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>


int main(){
    srand(time(0));
    int x = (rand() % 100) + 1;
    int y = (rand() % 100) + 1;
    int n_erros = 0;
    int n_tentativas = 0;
    int n_vidas = 2;
    while(n_vidas > 0){
        int r1, r2;
        int g1, g2;
        printf("Qual o valor de %d + %d?",x,y);
        scanf("%d",&r1);
        g1 = x+y;
        if(x>y){
            printf("Qual o valor de %d / %d?", x,y);
            g2 = x/y;
        }
        else{
            printf("Qual o valor de %d / %d?", y,x);
            g2 =  y/x;

        }
        scanf("%d",&r2);
        if(r1!=g1 || r2!=g2){
            n_erros = n_erros +1;
            n_vidas = n_vidas - 1;
        }
        else{
            n_vidas = 2;
        }
        n_tentativas = n_tentativas + 1; 
        x = (rand() % 100) + 1;
        y = (rand() % 100) + 1;
    }
    printf("Você errou duas seguidas :(\n");
    printf("Você respondeu %d perguntas e errou %d\n", n_tentativas, n_erros);
    float percentagem = (n_erros/(n_tentativas*1.0)) * 100;
    printf("Você errou %.2f %% \n", percentagem);
}