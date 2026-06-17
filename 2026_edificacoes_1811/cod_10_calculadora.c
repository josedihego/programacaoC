#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int op1, op2, resultado;
    char operacao;
    printf("Informe o primeiro operando: ");
    scanf("%d",&op1);
    printf("Qual operação você deseja: +, -, *, /?");
    scanf(" %c",&operacao);
    printf("Inform o segundo operando: ");
    scanf("%d", &op2);
    printf("%d%c%d=\n", op1,operacao,op2);
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
        resultado = op1/op2;
    }
    else{
        printf("opção inválida\n");
    }
    printf("%d\n",resultado);
}