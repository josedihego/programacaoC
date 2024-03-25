#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
  // malloc(100 * sizeof(int)) significa
  // alocar (malloc) 100 espaços na memória do tamanho
  // de um inteiro(int) 
  int * valores =  malloc(100 * sizeof(int))  ;
   for (int i = 0 ; i < 99; i = i +1){
    valores[i] = 7 + i* 7;
   }
    printf("elemtno 99 da sequência é = %d\n", valores[98]);
}