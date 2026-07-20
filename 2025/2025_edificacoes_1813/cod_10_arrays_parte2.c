#include <stdio.h>
#include <stdlib.h>


int soma_pares(int valores [], int tamanho){
    int soma = 0;
    for(int i =0; i <tamanho; i = i +1){
       if(valores[i]%2==0){
         soma = soma + valores[i];
       } 
    }
    return soma;
}

// soma todos os valores
// soma_total
int soma_total(int valores[], int tam){
    int soma = 0;
    for(int i = 0; i < tam; i = i +1){
        soma = soma + valores[i];
    }
    return soma;
}
// soma apenas os impares
// nessa use: soma_total e soma_pares
int soma_impares(int valores[], int tam){
    int soma = soma_total(valores,tam) - soma_pares(valores,tam);
    return soma;
}

int main(){
    int idades [] = {17,22,35,16,88,90,17,16,22};
    int tam = 9;
    int res = soma_pares(idades,tam);
    printf("Soma dos pares é: %d\n",res);
    res = soma_impares(idades,tam);
    printf("Soma dos ímpares é: %d\n",res);
    res = soma_total(idades,tam);
    printf("Soma total é: %d\n",res);
}