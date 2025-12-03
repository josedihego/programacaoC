#include<stdio.h>
#include<stdlib.h>


int main(){
    int qnt_estacoes, num_passos, estacao_atacada;
    printf("Informe a quantidade de estações:");
    scanf("%d", &qnt_estacoes);
    printf("Informe o número de passos do bot:");
    scanf("%d", &num_passos);
    printf("Qual foi a estação devastada pelos passarinhos:");
    scanf("%d",&estacao_atacada);
    int passo;
    int estacao_atual = 1;
    int numero_passadas = 0;
    for(int p=0; p <num_passos; p = p+1){
        printf("Informe o passo número %d:", p+1);
        scanf("%d", &passo);
        if(passo == -1){
            if(estacao_atual==1){
                estacao_atual = qnt_estacoes;
            }
            else{
                estacao_atual = estacao_atual -1;
            }
        }
        else{
            if(estacao_atual==qnt_estacoes){
                estacao_atual = 1;
            }
            else{
                estacao_atual = estacao_atual+1;
            }
        }
        if(estacao_atual==estacao_atacada){
            numero_passadas = numero_passadas+1;
        }
    }
    if(num_passos < 2){
        printf("Número de passadas pela estação número %d é %d\n",estacao_atacada, numero_passadas);
    }
    else{
        printf("Número de passadas pela estação número %d são %d\n",estacao_atacada, numero_passadas);
    }
}