#include <stdio.h>
#include<stdlib.h>

int main(){
    int num1,num2;
    int seq = 0;
    printf("Informe um valor: ");
    scanf("%d",&num1);
    while(seq!=2){
        printf("Informe um valor: ");
        scanf("%d",&num2);
        if(num1==num2){
            seq = 2;
        }
        num1 = num2;
    }
    printf("Terminei\n");
}