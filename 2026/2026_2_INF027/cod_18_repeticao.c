#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(){
    double x = sqrt(10);
    printf("%f\n",x);
    int numero, numero_anterior;
    float soma = 0;
    int qnt_lidos=0, qnt_iguais;
    printf("Informe um número: ");
    scanf("%d",&numero);
    qnt_iguais =1;
    soma = numero;
    qnt_iguais = 1;
    qnt_lidos = 1;

    while(qnt_iguais!=3){
        numero_anterior = numero;
        printf("Informe um número: ");
        scanf("%d",&numero);
        soma = soma + numero;
        qnt_lidos = qnt_lidos +1;
        if(numero==numero_anterior){
            qnt_iguais = qnt_iguais +1;
        }
        else{
            qnt_iguais=1;
        }
    }
    printf("Três valores iguais foram informados. Parando....\n");
    printf("Fim do programa média dos lidos = %.2f\n", soma/qnt_lidos);


}