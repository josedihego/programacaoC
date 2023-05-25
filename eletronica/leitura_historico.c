#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool esta_contido(int valores[ ], int valor, int qnt){
    bool achou= false;
    int posicao = 0;
    while(!achou && posicao < qnt){
        if(valores[posicao]== valor) achou = true;
        posicao = posicao + 1;
    }
    return achou;
}

int main(){
    int tam;
    printf("%s", "Informe o tamanho do array:");
    scanf("%d", &tam);
    int * valores  = (int *)malloc(tam * sizeof(int));
    int valor;
    int qnt = 0;
    
    printf("%s", "Informe um valor:");
    scanf("%d", &valor);

    while (!esta_contido(valores,valor,qnt))
    {
        valores[qnt] = valor;
        qnt = qnt + 1;
        printf("%s", "Informe um valor:");
        scanf("%d", &valor);
    }
    printf("%s", "Você informou dois valores iguais");
    
    return EXIT_SUCCESS;
    
}

/*
 bool teste0 = esta_contido(valores,valor,qnt);
    printf("Esta contido ? %s\n", teste0? "SIM": "NÃO");
    valores[0] = 10;
    valores[1] = 20;
    qnt = 2;
    bool teste1 = esta_contido(valores,5,qnt);
    printf("Esta contido? %s\n", teste1? "SIM": "NÃO");
     bool teste2 = esta_contido(valores,20,qnt);
    printf("Esta contido? %s\n", teste2? "SIM": "NÃO");
    */