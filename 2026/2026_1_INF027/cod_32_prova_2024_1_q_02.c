#include <stdio.h>
#include <stdlib.h>


#define TAM 600

int main(){
    int janela[TAM];
    for(int p=0; p < TAM; p=p+1){
        janela[p] = 0;// 0 significa ABERTA
    }

    int posicao;
    for(int qnt=0; qnt<3; qnt = qnt+1){
        printf("Informe a posição da primeira janela n° %d:",qnt+1);
        scanf("%d",&posicao);
        for(int fechada=posicao; fechada < posicao+200; fechada= fechada+1){
            janela[fechada] = 1;
        }

    }
    int qnt_abertas = 0;
    for(int p = 0; p < TAM; p = p +1){
        if(janela[p] == 0){
            qnt_abertas = qnt_abertas+1;
        }
    }
    printf("%d cm² de área aberta\n", qnt_abertas*100);

}