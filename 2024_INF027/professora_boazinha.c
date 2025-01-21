#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10

int main(){
    int alunos[MAX];
    for(int i = 0 ; i < MAX; i = i +1){
        printf("Informe a presença do aluno(a) %d: ", i+1);
        scanf("%d", &alunos[i]);
    }
    int selecao_unicos[MAX];
    int pl = 0; // pl: proxima posição livre
    for(int i = 0; i < MAX; i = i +1){
        int aluno = alunos[i];
        bool presente = false;
        for(int j = 0 ; j < pl; j = j+1){
            if(selecao_unicos[j]==aluno){
                presente = true;
            }
        }
        if(!presente){
            selecao_unicos[pl] = aluno;
            pl = pl+1;
        }
    }
    printf("Número de alunos únicos é: %d\n",pl);
    for(int i = 0; i < pl; i = i +1){
        printf("%d, ", selecao_unicos[i]);
    }
    printf("\n");

}