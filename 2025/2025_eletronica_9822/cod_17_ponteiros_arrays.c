#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define TAM 10

int calc_pares(int valores [], int tam){
    int qnt = 0;
    for(int i = 0; i < tam; i = i +1){
        if(valores[i]%2==0){
            qnt = qnt +1;
        }
    }
    return qnt;
}

void ordenar(int valores [], int tam, bool crescente){
    for(int i =0; i < tam; i = i +1){
        for(int j = i; j < tam; j = j+1){
            
            if(crescente==false && valores[i] < valores[j]){
                int temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp; 
            }
            if(crescente==true && valores[i] > valores[j]){
                int temp = valores[i];
                valores[i] = valores[j];
                valores[j] = temp; 
            }
        }
    }
}
void imprimir_array(int valores [], int tam){
    printf("\n[");
    for(int i = 0; i < tam; i = i +1){
        printf("%d, ", valores[i]);
    }
    printf("] \n");
}

// crie uma função que recebe dois arrays,
// informa qual deles apresenta a maior soma de valores
// e ao final imprime todos os valores dos dois arrays em ordem

void x_tudo(int listaP [], int tamP, int listaS [], int tamS){
    
}


int main(){
    srand(time(NULL));
    int * numeros;
    numeros = malloc(TAM * sizeof(int));
    for(int i = 0; i < TAM; i = i +1){
        numeros[i] = rand() % 100;
    }
    imprimir_array(numeros,TAM);
    int qnt = calc_pares(numeros, TAM);
    printf("Destes %d são pares\n",qnt);
    ordenar(numeros,TAM, false);
    imprimir_array(numeros, TAM);
    ordenar(numeros, TAM, true);
    imprimir_array(numeros,TAM);

}