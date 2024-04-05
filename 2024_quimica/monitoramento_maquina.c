#include<stdio.h>
#include<stdlib.h>

#define NUM_LEITURAS 5

int main(){
    int qnt_ok = 0;
    int tensao;
    for(int i =0 ; i < NUM_LEITURAS ; i = i +1){
      printf("Informe o valor da tensão:");
      scanf("%d",&tensao);  
      if(tensao >= 100 && tensao <=250){
        qnt_ok =  qnt_ok + 1;
      } 
    }
    float percentagem = ((qnt_ok * 1.0)/NUM_LEITURAS) * 100;
    printf("A percentagem de tempo com voltagem correta é: %.2f %", percentagem);
   
}