#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#define QNT 100

int main(){
    int idades [QNT];
    for(int i =0; i < QNT; i = i +1){
        printf("Informe a idade da pessoa n° %d: ",i+1);
        scanf("%d", &idades[i]);
    }
    int qnt_maiores = 0;
    for(int i =0; i < QNT; i = i +1){
        if(idades[i] >= 18){
            qnt_maiores = qnt_maiores +1;
        }
    }
    printf("Maiores de idade: %d \n", qnt_maiores);
    printf("Menores de idade: %d \n",QNT-qnt_maiores);
    
    int mais_velho = idades[0];
    int mais_nova = idades[0];
    int p_mv = 0;
    int p_mn = 0;
    for(int i =1; i < QNT; i = i +1){
        if(idades[i] > mais_velho){
            mais_velho = idades[i];
            p_mv = i;
        }
        if(idades[i] < mais_nova){
            mais_nova  = idades[i];
            p_mn = i;
        }
    }
    printf("A pessoa n° %d é a mais velha com idade: %d\n",p_mv+1, mais_velho);
    printf("A pessoa n° %d é a mais nova com idade é: %d \n",p_mn+1, mais_nova);
}