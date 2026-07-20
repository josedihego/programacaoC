#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

#define NA 5
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
    printf("A soma das idades é: %d\n", soma);
    printf("A média de idades é: %d\n", soma/NA);

    int mais_experiente = idades[0];
    for(int i=1; i < NA; i = i +1){
        if(mais_experiente < idades[i]){
            mais_experiente =  idades[i];
        }
    }
    int mais_jovem = idades[0];
    for(int i=1; i < NA; i = i +1){
        if(mais_jovem > idades[i]){
            mais_jovem = idades[i];
        }
    }
    printf("Idade do aluna(o) mais experinte é: %d\n", mais_experiente);
    printf("Idade do aluna(o) mais jovem é: %d \n", mais_jovem);
}



