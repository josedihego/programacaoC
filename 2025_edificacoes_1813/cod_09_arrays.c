#include <stdio.h>
#include <stdlib.h>


int main(){
    int valores [10];
    for(int i =0; i < 10; i = i +1){
        printf("Informe o valor n° %d:",i);
        scanf("%d", &valores[i]);
    }
    // Primeira questão: encontrar o maior

    int maior = valores[0];
    for(int i = 1; i < 10; i = i +1){
        if(valores[i] > maior){
            maior = valores[i];
        }
    }
    printf("O maior valor da lista é %d\n", maior);

}