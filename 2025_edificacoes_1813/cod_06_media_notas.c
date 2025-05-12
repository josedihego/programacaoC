#include <stdio.h>
#include <stdlib.h>

/*
Meu objetivo é calcular a média de 5 notas
A média é a soma das notas dividida pelo número de notas
Exemplo: 7.5 8.2 10 3.0 9.0 
Somatório: 7.5 + 8.2 + 10 + 3.0 + 9.0 = 37.7
Dividido por 5, temos a média: 37.7/5 = 7.74
*/
int main(){

    float somatorio = 0;
    float nota;
    for(int n=0; n < 5; n = n+1){
        printf("Informe a nota n° %d:",n);
        scanf("%f",&nota);
        somatorio = somatorio + nota;
    }    
    float media = somatorio/5;
    printf("Média do aluno = %.2f\n", media);

}