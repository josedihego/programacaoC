#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int dia,mes,ano;
    int prox_dia, prox_mes, prox_ano;
    printf("Informe uma data dd-mm-aaaa: ");
    scanf("%d-%d-%d",&dia, &mes,&ano);
    printf("testando %d-%d-%d\n",dia,mes,ano);
    prox_mes = mes;
    prox_ano = ano;
    bool eh_bissexto;
    if(ano%4==0){
        eh_bissexto = true;
    }
    else{
       eh_bissexto = false;
    }
    // se ano divisível por 100 e não for divisível por 400
    // então NÃO é bissexto
    if(ano%100==0 && !(ano%400==0)){
       eh_bissexto = false;
    }
    //01, 03, 05, 07, 08, 10 e 12 : 31 dias
    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
        if(dia < 31){
            prox_dia = dia + 1;
        }
        else{
            prox_dia = 1;
            prox_mes = mes +1;
        }
    }
    //4, 06, 09 e 11: 30 dias
    else if(mes==4 || mes==6 || mes==9 || mes==11){
        if(dia < 30){
            prox_dia = dia+1;
        }
        else{
            prox_dia=1;
            prox_mes = mes +1;
        }
    }
    else{
        // para anos bissextos com 29 dias
        if(eh_bissexto){
            if(dia < 29){
                prox_dia = dia + 1;
            }
            else{
                prox_dia=1;
                prox_mes = mes +1;
            }

        }// para anos não bissextos com 28 dias
        else{
            if(dia < 28){
                prox_dia= dia + 1;
            }
            else{
                prox_dia = 1;
                prox_mes = mes +1;
            }
        }
    }
    if(prox_mes>12){
        prox_mes = 1;
        prox_ano = ano +1;
    }
    printf("Próximo dia %d-%d-%d\n",prox_dia,prox_mes,prox_ano);
    // 02: 28 dias se não bissexto OU 29 dias se bissexto

    return EXIT_SUCCESS;
}