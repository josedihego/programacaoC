#include <stdio.h>
#include <stdlib.h>



int main(){
    int qnt_tokens;
    float custo;
    printf("Informe o número de tokens consumidos:");
    scanf("%d",&qnt_tokens);
    //quais são as faixas
    if(qnt_tokens <=10000){//1 faixa
        custo = (qnt_tokens/1000.0) * 2;
    }
    else if(qnt_tokens>10000 && qnt_tokens <=50000){
        //2 faixa
        custo = 10000/1000.0 * 2;
        custo = custo + ((qnt_tokens-10000)/1000.0 )* 2.2;

    }
    else{
        custo = 10000/1000.0 * 2;
        custo = custo + ((40000/1000.0) * 2.2);
        custo = custo + ((qnt_tokens-50000)/1000.0)*2.5;
        // 3 faixa

    }
    printf("Custo total de %d é %.2f USD",qnt_tokens,custo);
}