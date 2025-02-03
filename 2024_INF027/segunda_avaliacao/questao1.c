#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 100

int calc_proximo(int num){
    int digito1 = num/10;
    int digito2 = num%10;
    int res = (digito1*digito1) + (digito2*digito2);
    if(res>=100){
        res = res/2;
    }
    return res;
}

bool esta_contido(int valores [], int tam, int v){
    bool presente = false;
    for(int i = 0; i < tam; i = i +1){
        if(valores[i]==v){
            presente = true;
        }
    }
    return presente;
}

int main(){
    int primeiro;
    int proximo;
    int valores[TAM];
    do{
        printf("Informe o primeiro valor da sequência [0,100 [:");
        scanf("%d",&primeiro);
    }
    while(primeiro<0 || primeiro>99);
    valores[0] = primeiro;
    int pos = 1;
    
    bool ja_contido = false;
    while(!ja_contido){
        proximo = calc_proximo(valores[pos-1]);

    }
}