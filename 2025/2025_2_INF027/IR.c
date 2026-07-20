#include <stdio.h>
#include <stdlib.h>

#define DEDUCAO 564.8
#define F1  2259.20
#define F2_I 2259.21
#define F2_F 2826.65
#define F3_I 2826.66
#define F3_F 3751.05
#define F4_I 3751.06
#define F4_F 4664.68	
#define F5 4664.68

int main(){

    float renda;
    float imposto = 0;
    printf("Informe sua renda mensal: ");
    scanf("%f", &renda);
    renda = renda - DEDUCAO;

    // teste  F1
    if (renda > F1){
        // testar F2
        if(renda > F2_F){
            imposto = imposto + (F2_F - F2_I) * 0.075;
            //testar F3
            if(renda > F3_F){
                // testar F4
                imposto = imposto + (F3_F - F3_I)*0.15;
                if(renda > F4_F){
                    imposto = imposto + (F4_F-F4_I)* 0.225;
                    imposto = imposto + (renda - F5) * 0.275;
                }
                else{
                    imposto = imposto + (renda-F4_I) * 0.225;
                }
            }
            else{
                imposto = imposto +(renda-F3_I)* 0.15;
            }
        }
        else{
            imposto = imposto + (renda-F2_I) * 0.075;
        }
    }
    else{
        imposto = 0;
    }
    printf("Imposto a pagar sobre R$ %.2f é R$ %.2f\n", renda, imposto);
}