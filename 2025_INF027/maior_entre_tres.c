#include<stdio.h>

int main(){
    int n1,n2,n3;
    printf("Informe o valor de n1:");
    scanf("%d",&n1);
    printf("Informe o valor de n2:");
    scanf("%d",&n2);
    printf("Informe o valor de n3:");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3){
        printf("n1=%d é o maior\n",n1);
    }
    else{
        if(n2>n3){
            printf("n2=%d é o maior\n",n2);
        }
        else{
            printf("n3=%d é o maior\n",n3);
        }
    }
}