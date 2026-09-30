#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(){
    float v1, v2, res;
    char op;
    bool invalido = false;
    while(true){
        printf("Informe o primeiro valor:");
        scanf("%f",&v1);
        printf("Informe o segundo valor:");
        scanf("%f",&v2);
        printf("Informe a operação desejada: ");
        scanf(" %c",&op);
       
        switch(op){
            case '+':
                res = v1+v2;
                break;
            case '-':
                res = v1 - v2;
                break;
            case '*':
                res = v1 * v2;
                break;
            case '/':
                if(v2!=0){
                    res = v1/v2;
                }
                else{
                    invalido = true;
                }
                break;
        }
         printf("Resultado:  %.2f %c %.2f = %.2f\n", v1, op, v2,res);
    }
}