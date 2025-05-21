#include<stdio.h>
#include<stdlib.h>


int main(){
    int N;
    int qnt_div = 0;
    printf("Informe um valor: ");
    scanf("%d",&N);
    for(int j=1; j <= N; j = j+1){
        if(N % j == 0){
            qnt_div = qnt_div +1;
        }
    }
    if(qnt_div==2){
        printf("PRIMO✅\n");
    }
    else{
        printf("NÃO PRIMO ⛔\n");
    }
}