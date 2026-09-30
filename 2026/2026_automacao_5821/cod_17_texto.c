#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int main(){
    char * texto = malloc(100 * sizeof(char));
    printf("Informe o texto: ");
    fgets(texto,100,stdin);

    int qnt =0;
    while(texto[qnt]!='\n'){
        qnt= qnt+1;
    }

    int meio = qnt/2;
    bool palindromo = true;

    for(int i =0; i < qnt; i = i +1){
        if(texto[i] != texto[qnt-1-i]){
            palindromo = false;
        }
    }
    if(palindromo) printf("SIM\n");
    else printf("NÃO\n");
}