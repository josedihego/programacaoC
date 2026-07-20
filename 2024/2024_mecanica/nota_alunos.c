#include<stdio.h>
#include<stdlib.h>
#define MAX 5
// quantidade de alunos aprovados(as) >= 7.0
int main(){
    float nota;
    float soma = 0.0;
    float maior = 0.0;
    float menor = 10.0;
    int qnt_apr = 0;
    for(int i=0; i <MAX; i = i +1){
        printf("Informe a nota do %dº aluno(a)\n",i+1);
        scanf("%f",&nota);
        soma = soma + nota;
        if(nota > maior){
            maior = nota;
        }
        if(nota < menor){
            menor = nota;
        }
        if(nota >= 7){
            qnt_apr = qnt_apr + 1;
        }
    }
    float media = soma/MAX;
    printf("Média = %.2f\n",media);
    printf("Maior nota é: %.2f\n", maior);
    printf("Menor nota é: %.2f\n", menor);
    printf("Quantidade de alunos(as) aprovado(as) = %d",qnt_apr);
}