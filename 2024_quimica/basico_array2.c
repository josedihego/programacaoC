#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

int main(){
  int idades[40];
  for(int i=0; i < 40; i = i +1){
    printf("Informe a nota da(o) aluna(o) %d:\n",i);
    scanf("%d",&idades[i]);
  }
}