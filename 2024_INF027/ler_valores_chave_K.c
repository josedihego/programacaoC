#include <stdio.h>
#include <stdlib.h>

int main(){
    int k;
    int v;
    int soma = 0;
    int qnt = 0;
    int maior;
    int menor;
    printf("Informe o valor da chave k: ");
    scanf("%d", &k);
    v = k +1; // k-1 ou
    maior = k;
    menor = k; 
    while(k!=v){
        printf("Informe o valor de v: ");
        scanf("%d", &v);
        if(v > maior) maior = v;
        if(v < menor) menor = v;
        soma = soma + v;
        qnt = qnt + 1;
    }
    printf("-----Resultados-----\n");
    printf("\t Média = %d\n", soma/qnt);
    printf("\t Menor = %d\n", menor);
    printf("\t Maior = %d\n", maior);

}