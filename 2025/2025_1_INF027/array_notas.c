#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    float notas[40];
    //preencher o arra
    for(int i = 0; i < 40; i = i +1){
        printf("Informe a nota do aluno(a) n° %d:\n", i+1);
        scanf("%f", &notas[i]);
    
    }
    for(int i = 0; i < 40; i = i +1){
        printf("Nota aluno n° %d é %.2f\n",i+1,
        notas[i]);
    }
}