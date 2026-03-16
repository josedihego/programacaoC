#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    float notas[40];
    //preencher o arra
    for(int i = 0; i < 40; i = i +1){
        float nota_gerada = rand()%11 + rand()%11/10.0;
        if(nota_gerada >10){
            notas[i] = 2+8;
        }
        else{
            notas[i] = nota_gerada;
        }
    }
    // imprimir os valores de nota
    for(int i = 0; i < 40; i = i +1){
        printf("Nota aluno n° %d é %.2f\n",i+1,
        notas[i]);
    }
    // calcular a média
    float soma = 0;
    for(int i = 0; i < 40; i = i + 1){
        soma = soma +notas[i];
    }
    printf("Média = %.2f\n", soma/40);
    float maior, seg_maior;
    int pos_maior, pos_seg_maior;

    maior = notas[0];
    pos_maior = 0;
    for(int i =0; i < 40; i = i +1){
        if(notas[i] > maior){
            maior = notas[i];
            pos_maior = i;
        }
    }
    printf("A maior nota é %.2f e esta na posição %d\n",maior, pos_maior);

    seg_maior = notas[0];
    for(int i = 0; i < 40; i = i +1){
        if(i != pos_maior){
            if(notas[i] > seg_maior){
                seg_maior = notas[i];
                pos_seg_maior = i;
            }
        }
    }
    printf("Segunda maior nota é %.2f e esta na posição %d\n", seg_maior, pos_seg_maior);
}
