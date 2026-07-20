#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int main(){
    float notas[MAX];
    for(int i =0; i < MAX; i = i +1){
        printf("Informe a nota do aluno(a) nº%d:\n",i+1);
        scanf("%f",&notas[i]);
    }
    float soma = 0;
    float media = 0;
    for(int i=0; i < MAX; i = i +1){
        // atualizar a soma
        printf("Nota aluno(a) nº%d é %.2f\n",i+1,notas[i]);
    }
    // calcular e imprimir a média
}