#include <stdio.h>
#include<stdlib.h>


int main(){
    int N;
    printf("Informe um número para teste:");
    scanf("%d", &N);
    if(N<2){
        printf("Não é primo ⛔\n");
    }
    else{
        int qnt_div = 0;
        for(int j=1; j <= N; j = j + 1){
            if(N % j == 0){
                qnt_div = qnt_div + 1;
            }
        }
        if(qnt_div==2){
            printf("O número é primo!✅\n");
        }
        else{
            printf("O número não é primo! ⛔ \n");
        }
    }
}