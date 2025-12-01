#include<stdio.h>
#include<stdlib.h>

int soma(int valores [], int tamanho){
    int res = 0;
    for(int p =0; p <tamanho; p = p+1){
        res = res + valores[p];
    }
    return res;
}

int main(){
   int lista [5] ={5,89,900,-76,4560};
   int r = soma(lista,5);
   printf("Resultado = %d\n",r);
}