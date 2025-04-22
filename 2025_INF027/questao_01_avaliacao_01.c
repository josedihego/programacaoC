#include<stdio.h>
#include<stdlib.h>


int main(){
    float D, A;
    int dia_ent;
    printf("Clarice, qual valor da diária:");
    scanf("%f",&D);
    printf("Clarice, qual o valor do aumento:");
    scanf("%f",&A);
    printf("Informe o dia do check-in em Julho:");
    scanf("%d",&dia_ent);

    // Calculo dos dias de hospedagem
    int num_diarias = (31-dia_ent)+1;

    //Calculo do valor da diária
    float valor_diaria;
    if(dia_ent >=16){
        valor_diaria = D+(16-1)*A;
    }
    else{
        valor_diaria = D + (dia_ent-1)*A;
    }
    float resultado = num_diarias * valor_diaria;
    printf("Resulatdo = %.2f\n", resultado);

}