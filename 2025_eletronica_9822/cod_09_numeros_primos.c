#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero;
    printf("Informe um número para ser testado:");
    scanf("%d",&numero);

    if((numero<2 || numero%2==0)&& numero!=2) {
        printf("O número NÃO é primo ⛔ \n");
    }
    else{
        int qnt_div = 0;
        for(int d=1; d<= numero; d=d+1){
            if(numero%d==0){
                qnt_div = qnt_div+1;
            }
        }
        if(qnt_div==2){
            printf("Número é primo ✅\n");
        }
        else{
            printf("O número NÃO é primo ⛔ \n");
        }
    }
}