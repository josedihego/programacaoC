#include <stdio.h>
#include <stdlib.h>

int main(){
    int qnt_neg_seg = 0;
    float valor;
    float soma =0;
    int qnt_valores =0;
    while(qnt_neg_seg < 3){
        printf("Informe um valor:");
        scanf("%f",&valor);
        if(valor < 0){
            qnt_neg_seg = qnt_neg_seg+1;
        }
        else{
            qnt_neg_seg = 0;
            soma = soma +valor;
            qnt_valores = qnt_valores + 1;
        }
    }
    printf("Erro no sensor. Fim da leitura ⛔\n");
    printf("Média = %.2f\n", soma/qnt_valores);
}