#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int valores[], int tam){
    for(int i = 0; i < tam; i = i +1){ // da primeira a última posição faça
        for(int j=tam-1; j > i; j = j-1 ){ // para cada elemento do final ate onde já estiver ordenado
            if(valores[j-1] > valores[j]){ // se o que estiver antes for maior que o estiver depois troque 
                int temp = valores[j];
                valores[j]= valores[j-1];
                valores[j-1] =  temp;
            }
        }
    }
}

void imprimir_vetor(int valores[], int tam){
    for(int i = 0; i < tam; i = i +1){
        printf("%d ", valores[i]);
    }
    printf("\n");
}

int main(){
    int valores[] = {5, 2, 4, 6, 1, 3};
    int tam = 6;
    imprimir_vetor(valores, tam);
    bubble_sort(valores, tam);
    imprimir_vetor(valores, tam);
    return 0;
}