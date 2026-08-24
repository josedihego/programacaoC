#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h> 

int main(){
    float op1, op2, resultado;
    bool valida = true;
    char operacao;
    printf("Informe o primeiro operando: ");
    scanf("%f",&op1);
    printf("Qual operação você deseja: +, -, *, /, r?");
    scanf(" %c",&operacao);
    if(operacao!='r'){
        printf("Inform o segundo operando: ");
        scanf("%f", &op2);
        printf("%.2f%c%.2f=", op1,operacao,op2);
    }
    else{
        printf("raiz de %.2f =  ", op1);
    }
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
    else if(operacao=='r'){
        resultado = sqrt(op1);
    }
    else{
        printf("opção \n");
        valida = false;
    }
    if(valida){
        printf("%.2f\n",resultado);
    }
    else{
        printf("inválida\n");
    }
}