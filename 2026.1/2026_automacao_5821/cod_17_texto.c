#include<stdio.h>
#include<stdlib.h>


int main(){
    char * texto = malloc(100 * sizeof(char));
    printf("Informe o texto: ");
    fgets(texto,100,stdin);

    int qnt =0;
    while(texto[qnt]!='\n'){
        qnt= qnt+1;
    }
}