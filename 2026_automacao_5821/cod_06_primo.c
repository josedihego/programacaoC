#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("Informe um número:");
    scanf("%d",&numero);
    int qnt_divisores = 0;
    for(int i =1; i <=numero; i = i +1){
        if(numero%i==0){
            qnt_divisores = qnt_divisores+1;
        }
    }
    if(qnt_divisores==2){
        printf("É primo !\n");
    }
    else{
        printf("Não é primo\n");
    }
}