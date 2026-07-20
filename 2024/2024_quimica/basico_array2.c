#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#define MAX 7
int main(){
  int idades[MAX];
  for(int i=0; i < MAX; i = i +1){
    printf("Informe a idade da(o) aluna(o) %d:",i);
    scanf("%d",&idades[i]);
  }
}