#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ZERO_ABS -273.15

int main(){
    float medidas [1000];
    bool maquina_funcionando = true;
    int posicao = 0;
    for(int i=0; i < 1000; i = i+1){
        medidas[i]= ZERO_ABS;
    }
    while(maquina_funcionando){
        printf("Informe uma opção:\n");
        printf("\t 1. cadastrar temperatura\n");
        printf("\t 2. calcular média\n");
        printf("\t 3. exibir máxima e mínima temperatura\n");
        int opcao;
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                printf("Informe a temperatura para cadastro:");
                scanf("%d",&medidas[posicao]);
                posicao = (posicao + 1) % 1000;
                break;
            case 2:
                float media;
                float soma = 0.0;
                int qnt = 0;
                for(int i = 0 ; i < 1000; i = i +1){
                    if(medidas[i]!= ZERO_ABS){
                        soma = soma + medidas[i];
                        qnt = qnt +1;
                    }
                }
                media = soma/qnt;
                printf("Média = %.2f\n", media);
                break;
            case 3:
            break;
        }
    }
}