#include <stdio.h>
#include <stdlib.h>


int main(){
    int comprimento, largura, area, classe;
    int qnt_lampadas, potencia;

    printf("Informe qual a classe do cômodo?");
    scanf("%d",&classe);
    printf("Informe o comprimento: ");
    scanf("%d", &comprimento);
    printf("Informe a largura: ");
    scanf("%d", &largura);
    area = comprimento * largura;
    if(classe==1){
        potencia = area * 12;
    }
    else if (classe==2){
        potencia = area * 15;
    }
    else{
        potencia = area * 20;
    }
    if(potencia%60 ==0){
        qnt_lampadas = potencia/60;
    }
    else{
        qnt_lampadas = (potencia/60) + 1;
    }
    printf("Quantidade de lampadas necessárias é %d\n", qnt_lampadas);
}