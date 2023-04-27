// Criar um programa que faz a leitura de valores
//até que o usuário informa dois números iguais em 
//sequencia
// nesse momento o programa informa a média dos valores lidos

#include<stdio.h>
#include<stdlib.h>

int main(){
    int ultimo;
    int penultimo;
    printf("%s","Informe um número:");
    scanf("%d", &penultimo);
    printf("%s","Informe um número:");
    scanf("%d", &ultimo);
    int somatorio = ultimo+penultimo;
    int qnt = 2;
    while(ultimo != penultimo){
        penultimo = ultimo;
        printf("%s", "Informe um número:");
        scanf("%d", &ultimo);
        somatorio =  somatorio + ultimo;
        qnt = qnt + 1;
    }
    printf("Média de valores lidos %d\n", somatorio/qnt);
}