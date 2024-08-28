#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int idades [13];
    for(int i =0; i < 13; i = i +1){
        printf("Informe a idade da pessoa n° %d: ",i+1);
        scanf("%d", &idades[i]);
    }
    int qnt_maiores = 0;
    for(int i =0; i < 13; i = i +1){
        if(idades[i] >= 18){
            qnt_maiores = qnt_maiores +1;
        }
    }
    printf("Maiores de idade: %d \n", qnt_maiores);
    printf("Menores de idade: %d \n",13-qnt_maiores);
    
    int mais_velho = idades[0];
    int mais_nova = idades[0];
    for(int i =1; i < 13; i = i +1){
        if(idades[i] > mais_velho){
            mais_velho = idades[i];
        }
        if(idades[i] < mais_nova){
            mais_nova  = idades[i];
        }
    }
    printf("Idade da pessoa mais velha: %d\n",mais_velho);
    printf("Idade da pessoa mais jovem é: %d \n", mais_nova);
}