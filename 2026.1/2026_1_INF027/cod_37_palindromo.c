#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#define MAX 20
int main(){
    char textoA[MAX];
    char textoB[MAX];
    printf("Informe a palavra para testar se esta é um palindromo:");
    fgets(textoA,MAX,stdin);
    int pos_final = 0;
    // aprendemos a encontrar a posição final do \0
    while(textoA[pos_final]!='\0'){
        pos_final = pos_final + 1;
    }
    pos_final = pos_final - 1;
    textoA[pos_final] = '\0';
    // apresM]endemos a copiar uma string em ordem inversa
    printf("O barra zero esta na %d\n",pos_final);
    int j = 0;
    for(int i = pos_final-1; i>=0; i = i -1){
        textoB[j] = textoA[i];
        j = j +1;
    }
    textoB[pos_final] = '\0';
    // a verificar se duas strings são iguais
    bool palindromo = true;
    int p = 0;
    while(textoA[p]!= '\0'){
        if(textoA[p]!=textoB[p]){
            palindromo = false;
        }
        p = p +1;
    }
    if(palindromo){
        printf("A palavra %s é palindroma\n", textoA);
    }
    else{
        printf("A palavra %s não é palindroma\n", textoA);
    }
}