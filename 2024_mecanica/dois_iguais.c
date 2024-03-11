#include<stdio.h>


int main(){
    int x, y, z;
    printf("Informe o valor de x:");
    scanf("%d",&x);
    printf("Informe o valor de y:");
    scanf("%d",&y);
    printf("Informe o o valor de z:");
    scanf("%d",&z);
    if(x==y || x==z || y==z){
        printf("SIM\n");
    }
    else{
        printf("NÃO\n");
    }

}