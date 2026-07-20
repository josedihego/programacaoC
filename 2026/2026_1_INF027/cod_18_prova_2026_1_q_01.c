#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_alunos;
    int capacidade;
    printf("Informe a quantidade de alunos: ");
    scanf("%d",&num_alunos);
    printf("Informe a capacidade da cabina: ");
    scanf("%d",&capacidade);

    int resul_div = num_alunos/(capacidade-1);
    int resto_div = num_alunos%(capacidade-1);
    int quant_viagens = resul_div;
    if(resto_div!=0){
        quant_viagens = resul_div +1;
    }
    printf("quantidade de vaigens é %d\n",quant_viagens);
    
}