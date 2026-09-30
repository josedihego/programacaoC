/**
 * 
 * 
Crie um programa que recebe um número por vez do usuário e para de ler valores apenas quando dois valores iguais forem informados em sequência.
Se parar, o programa deve imprimir a média dos valores lidos.
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){
    int num1, num2;
    int soma =0;
    int qnt = 0;
    printf("Informe um valor:");
    scanf("%d",&num1);
    printf("Informe um valor:");
    scanf("%d",&num2);
    soma = num1+num2;
    qnt = 2;
    while(num1!=num2){
        num1 = num2;
        printf("Informe um valor:");
        scanf("%d",&num2);
        soma = soma + num2;
        qnt = qnt +1;
    }
    printf("média: %.2f\n", (float)soma/qnt);
    printf("Terminei\n");
 }