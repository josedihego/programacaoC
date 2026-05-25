/**
 * Construa um programa que recebe uma lista de valores
inteiros do usuário, o tamanho dessa lista pode variar,
mas para efeitos de teste assuma o tamanho 10

Depois da leitura, seu programa deve informar o valor 
com maior frequência na lista, ou seja, aquele valor
que mais aparece

Ex: 0,4,5,6,8,2,9,2,0,2
O valor 2 é o que mais aparece com freuência de 3 vezes

Como fazer?
Ordenar o array
0,0,2,2,2,4,5,6,8,9
dessa maneira fica claro que o 0 aparece 2 vezes
o 2 aparece 3 vezes e os demais uma vez cada 
Assim a resposta deve ser 2 com frequência de 3 vezes
 
 */

 #include <stdio.h>
#include <stdlib.h>

void imprimir_vetor(int valores [], int tam){
    printf("\n<");
    for(int p=0; p < tam-1; p = p+1){
        printf("%d, ",valores[p]);
    }
    printf("%d >\n",valores[tam-1]);
}
#define TAM 10

int main(){
    int valores[TAM];
    for(int p = 0; p <TAM; p = p +1){
        printf("Informe o valor n° %d: ", p+1);
        scanf("%d",&valores[p]);
    }
     for(int p=1; p < TAM;p = p+1){
        int chave = valores[p];
        int q = p-1;
        while(chave < valores[q] && q>=0){
            valores[q+1] = valores[q];
            q = q -1;
        }
        valores[q+1] = chave;
    }
    int elemento = valores[0];
    int frequencia = 1;
    int vencedor = valores[0];
    int frequencia_vencedor = 1;
    for(int p=1; p < TAM; p = p+1){
        if(elemento==valores[p]){
            frequencia = frequencia +1;
        }
        else{
            if(frequencia > frequencia_vencedor){
                vencedor = elemento;
                frequencia_vencedor = frequencia;
            }
            elemento = valores[p];
            frequencia = 1;
        }
    }
    printf("Elemento com maior frequência é %d que aparece %d vezes", vencedor, frequencia_vencedor);
}