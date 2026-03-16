#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define DEDUCAO 564.80
#define IMP_FAIXA_02 0.075
#define IMP_FAIXA_03 0.150
#define IMP_FAIXA_04 0.225
#define IMP_FAIXA_05 0.275
int main(){
    float salario;
    float imposto =0;
    printf("Informe seu salário mensal: ");
    scanf("%f",&salario);
    float renda = salario - DEDUCAO;

    // pagador(a)
    if(renda > 2259.20){
        if (renda >= 2826.65){
            imposto = imposto + (2826.65-2259.21 )*IMP_FAIXA_02;
            if(renda > 3751.05){
                imposto = imposto + ( 3751.05 - 2826.66)*IMP_FAIXA_03;
                if(renda > 4664.68){
                    imposto = imposto+(4664.68-3751.06)*IMP_FAIXA_04;
                    imposto = imposto+(renda-4664.68)*IMP_FAIXA_05;
                }
                else{
                    imposto = imposto + (renda- 3751.06)*IMP_FAIXA_04;
                }
            }
            else{
                imposto = imposto + (renda - 2826.66)*IMP_FAIXA_03;
            }
        }
        else{
            imposto = imposto + (renda-2259.21) * IMP_FAIXA_02;
        }
    }
    // não pagador(a) / isento(a)

    printf("Você pagará de IR 2025: %.2f\n",imposto);
}
