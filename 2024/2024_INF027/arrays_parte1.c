#include <stdio.h>
#include <stdlib.h>

int main(){
    int valores [10];
    float soma = 0;
    for(int i =0; i<10; i = i +1){
        printf("Informe o valor n° %d: ",i+1);
        scanf("%d", &valores[i]);
    }
    for(int i = 0; i < 10; i = i +1){
        soma = soma + valores[i];
    }
    printf("Média de valores: %.2f\n",soma/10);

}