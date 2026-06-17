#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h> 

int main(){
    int op1, op2, resultado;
    bool valida = true;
    char operacao;
    printf("Informe o primeiro operando: ");
    scanf("%d",&op1);
    printf("Qual operação você deseja: +, -, *, /?");
    scanf(" %c",&operacao);
    printf("Inform o segundo operando: ");
    scanf("%d", &op2);
    printf("%d%c%d=", op1,operacao,op2);
    if(operacao=='+'){
        resultado = op1+op2;
    }
    else if(operacao=='-'){
        resultado = op1-op2;
    }
    else if(operacao=='*'){
        resultado = op1 * op2;
    }
    else if(operacao=='/'){
        if(op2!=0){
            resultado = op1/op2;
        }
        else{
           valida = false; 
        }

    }
    else{
        printf("opção \n");
        valida = false;
    }
    if(valida){
        printf("%d\n",resultado);
    }
    else{
        printf("inválida\n");
    }
}