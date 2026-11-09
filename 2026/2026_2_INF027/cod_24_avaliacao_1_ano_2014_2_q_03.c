#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int qnt;
    printf("Qual a quantidade de dígitos? ");
    scanf("%d",&qnt);
    int numeros[qnt];
    for(int p=0; p <qnt; p = p +1){
        scanf("%d",&numeros[p]);
    }
    bool multiplicar = true;
    int soma = 0;
    for(int p = qnt-1; p >= 0; p = p -1){
        if(multiplicar){
            //mul
            soma = soma + (numeros[p]*2)%9;
        }
        else{
            soma = soma + numeros[p];
            // opção 2: não faz nada com o número 
            // opção 1:%9;
        }
        multiplicar = !multiplicar;
    }
    printf("Soma = %d\n", soma);
    if(soma%10==0){
        printf("Número válido!\n");
    }
    else{
        printf("Número inválido\n");
    }
}