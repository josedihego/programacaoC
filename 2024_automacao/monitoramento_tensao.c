#include<stdio.h>
#include<stdlib.h>

#define NUM_VER_DIA 5 //24*60*6 // OPÇÃO 1

int main(){
    int qnt_ok;
    int tensao;
    for(int i =0; i < NUM_VER_DIA;  i = i +1){
        printf("Informe a %dº tensão\n",i+1);
        scanf("%d",&tensao);
        if(tensao >= 100 && tensao <=250){
            qnt_ok = qnt_ok+1;
        }
    }
    float percentagem = ((qnt_ok * 1.0)/NUM_VER_DIA) * 100;
    printf("Percentagem de tempo com tensão normal é:%.2f\n %", percentagem);
}