#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>

#define TAM 50
int main(){
    char original [TAM];
    char invertido [TAM];
    printf("Informe uma palavra a ser testada>");
    scanf("%s",original);
    int i = 0;
    while(original[i]!= '\0'){
        i = i+1;
    }
    printf("Tamanho de %s é %d\n", original,i);
    int indice = 0;
    for(int j = i-1; j >= 0; j = j-1){
        invertido[indice] = original[j];
        indice = indice+1;
    }
    invertido[indice] = '\0';
    bool eh_palindromo = true;
    int k = 0;
    while(original[k]!='\0'){
        if(original[k] != invertido[k]){
            eh_palindromo = false;
        }
        k = k+1;
    }
    if(eh_palindromo==true){
        printf("A palavra %s é palindromo\n", original);
    }
    else{
        printf("A palavra %s não é palindromo\n",original);
    }

    


}