#include <stdio.h>
#include<stdlib.h>

int main(){
    int valores[10];
    int i = 0;
    int v;
    while(i<10){
        printf("Informe um valor: ");
        scanf("%d",&v);
        if(v>=50 && v <= 200){
            valores[i]= v;
            i = i +1;
        }
    }
    int maior = valores[0];
    for(int i = 1; i < 10; i = i+1){
        if(valores[i] > maior){
            maior = valores[i];
        }
    }
    printf("maior valor do array é: %d\n",maior);
}