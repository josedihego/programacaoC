#include<stdio.h>
#include<stdlib.h>

int main(){
    float chance_falha;
    float taxa_crescimento;
    int horas_ciclo;
    int horas_trabalhadas;
    printf("%s", "Informe a chance de falha:");
    scanf("%f", &chance_falha);
    printf("%s", "Informe a taxa de crescimento:");
    scanf("%f", &taxa_crescimento);
    printf("%s", "Informe quantas horas temos por ciclo:");
    scanf("%d", &horas_ciclo);
    printf("%s", "Informe quantas horas foram trabalhas:");
    scanf("%d", &horas_trabalhadas);
    int qnt_ciclos = horas_trabalhadas/horas_ciclo;
    for(int i =0; i < qnt_ciclos; i = i +1){
        chance_falha = chance_falha * (taxa_crescimento + 1);
    }
    printf("Depois de %d ciclos a chance de falha é %.2f %\n",qnt_ciclos,chance_falha*100);

}