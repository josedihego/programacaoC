#include <stdio.h>
#include <stdlib.h>

#define DESCONTO 0.11
#define MAX 570.88

int main(){
    float salario;
    printf("Informe o valor do salário: ");
    scanf("%f",&salario);
    float contribuicao_inss = salario * DESCONTO;
    if(contribuicao_inss > MAX){
        contribuicao_inss = MAX;
    }
    printf("Valor da cotribuição do INSS é %.2f R$\n",contribuicao_inss);

}