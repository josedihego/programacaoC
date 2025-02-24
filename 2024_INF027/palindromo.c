#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define TAM 100
int main(){
    char texto [TAM];
    printf("Informe uma frase:");
    fgets(texto,TAM,stdin);

    char invertido[TAM];

    // encontrando o barra zero
    int pos_zero = 0;
    while(texto[pos_zero]!='\0'){
        pos_zero = pos_zero +1;
    }
    pos_zero = pos_zero -1;
    texto[pos_zero]='\0';
    int j = 0;
    for(int i = pos_zero-1; i >=0; i = i -1){
        invertido[j] = texto[i];
        j = j+1;
    }
    invertido[pos_zero] = '\0';

    bool palindromo = true;
    for(int i =0; i < pos_zero; i=i+1){
        if(texto[i] != invertido[i]){
            palindromo = false;
        }
    }
    if(palindromo){
        printf("O texto é palindromo\n");
    }
    else{
         printf("O texto NÃO é palindromo\n");
    }
    printf("\t%s\n", texto);
    printf("\t%s\n",invertido);
}

