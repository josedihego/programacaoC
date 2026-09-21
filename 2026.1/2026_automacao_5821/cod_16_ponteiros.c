#include <stdio.h>
#include <stdlib.h>


int trocar(int * a, int * b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main(){
    char * nome = malloc(50 * sizeof(char));
    printf("Qual seu nome?");
    fgets(nome,50,stdin);
    printf("Olá %s", nome);
    int i = 0;
    while(nome[i]!='\0'){
        printf("%c\n", nome[i]);
        i = i +1;
    }
    printf("tamanho %d\n", i-1);
    int x = 5;
    int y = 10;
    printf("antes: x = %d e y = %d\n", x,y);
    trocar(&x,&y);
    printf("depois: x = %d e y = %d\n", x, y);
}