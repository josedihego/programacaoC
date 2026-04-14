#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor_aposta;
    int numero_apostado;
    int numero_sorteado;
    int milhar, centena, dezena, unidade;
    printf("Informe o valor da aposta: ");
    scanf("%f",&valor_aposta);
    printf("Informe o número apostado: ");
    scanf("%d",&numero_apostado);
    printf("Informe o valor sorteado: ");
    scanf("%d",&numero_sorteado);
    milhar = (numero_apostado/1000)%10;
    numero_apostado = numero_apostado % 1000;
    centena = numero_apostado /100;
    numero_apostado = numero_apostado % 100;
    dezena = numero_apostado/10;
    unidade = numero_apostado%10;
    printf("%d-%d-%d-%d\n", milhar,centena,dezena,unidade);
    
    int milhar_s, centena_s, dezena_s, unidade_s;
    milhar_s = numero_sorteado /1000;
    centena_s = (numero_sorteado%1000)/100;
    dezena_s = (numero_sorteado%100)/10;
    unidade_s = numero_sorteado%10;
    printf("sorteado: %d-%d-%d-%d\n",milhar_s,centena_s,dezena_s,unidade_s);

    if(milhar==milhar_s && centena==centena_s &&
    dezena==dezena_s && unidade==unidade_s){
        printf("Prêmio : %.2f\n", valor_aposta *3000);
    }
    else if(centena == centena_s && dezena==dezena_s && unidade == unidade_s){
        printf("Prêmio : %.2f\n", valor_aposta * 500);
    }
    else if(dezena== dezena_s && unidade == unidade_s){
        printf("Prêmio: %.2f\n",valor_aposta * 50);
    }
    else{
        int dezena_apostada = dezena*10+unidade;
        int grupo_apostado = dezena_apostada/4;
        if(dezena_apostada%4!=0){
            grupo_apostado = grupo_apostado + 1;
        }
        if(dezena_apostada==0){
            grupo_apostado = 25;
        }
        int dezena_sorteada = dezena_s*10 + unidade_s;
        int grupo_sorteado = dezena_sorteada/4;
        if(dezena_sorteada%4!=0){
            grupo_sorteado = grupo_sorteado +1; 
        }
        if(dezena_sorteada==0){
            grupo_sorteado= 25;
        }
        if(grupo_apostado==grupo_sorteado){
            printf("Prêmio : %.2f\n", valor_aposta * 16);
        }
    }
}