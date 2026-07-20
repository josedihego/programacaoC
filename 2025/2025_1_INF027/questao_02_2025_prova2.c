#include <stdio.h>
#include <stdlib.h>


int main(){
    int N;// número estações
    int qnt_movimentos;// quantidade movimentos
    int estacao_devastada;

    printf("Informe o número de estações:");
    scanf("%d",&N);
    printf("Informe a quantidade de movimentos:");
    scanf("%d", &qnt_movimentos);
    printf("Informe a estação próxima a área devastada:");
    scanf("%d",&estacao_devastada);
    int estacao_robo = 1;
    int qnt =0;
    for(int i = 0; i < qnt_movimentos; i = i +1){
        int movimento;
        printf("Informe o movimento: 1 (horário) -1 (anti-horário): ");
        scanf("%d",&movimento);
        if(estacao_robo==8 && movimento==1){
            estacao_robo = 1;
        }
        else if(estacao_robo ==1 && movimento==-1){
            estacao_robo = 8;
        }
        else{
            estacao_robo = estacao_robo + movimento;
        }
        if(estacao_robo==estacao_devastada){
            qnt = qnt+1;
        }
    }
    printf("O robo passou pela estação %d por %d vezes\n", estacao_devastada, qnt);

}