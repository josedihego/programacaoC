#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    float ult = 0, pen = 0, ant =0;
    bool tres_iguais = false;
    int qnt_lidos = 0;
    float soma = 0;
    while(tres_iguais==false){
        ant = pen;
        pen = ult;
        printf("Informe um valor:");
        scanf("%f",&ult);
        qnt_lidos = qnt_lidos + 1;
        if(qnt_lidos >=3){
            if(ult==pen && pen == ant){
                tres_iguais = true;
            }
        }
        soma = soma + ult;
    }
    printf("Média = %.2f\n", soma/qnt_lidos);
    printf("Valor repetido é: %.2f ", ult);
}