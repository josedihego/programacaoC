#include <stdio.h>

int main(){
    int n1,n2,n3;
    printf("Informe o valor de n1:");
    scanf("%d",&n1);
    printf("Informe o valor de n2:");
    scanf("%d",&n2);
    printf("Informe o valor de n3:");
    scanf("%d",&n3);
    if(n2>n1 && n3>n2){
        printf("Você acertou :) Sequência: %d, %d, %d\n",n1,n2,n3);
    }
    else{
        if(n1>n2 && n2>n3){
            printf("Você errou totalmente:(\n");
        }
        else{
            printf("Você quase chegou lá :|\n");
        }
    }
}