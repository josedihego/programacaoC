#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

#define NA 8
int main(){
    int idades[NA];
    for(int i =0; i < NA; i = i +1){
        printf("Informe a idade do aluno(a) n°%d: ",i+1);
        scanf("%d", &idades[i]);
    }
    int soma = 0;
    for(int i=0; i < NA; i = i +1){
        soma =  soma + idades[i];
    }
    printf("A soma das idades é: %d", soma);

}



