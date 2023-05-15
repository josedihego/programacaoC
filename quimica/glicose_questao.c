#include<stdlib.h>
#include<stdio.h>

int main(){
    int glicose = 0;
    int somatorio = 0;
    int quantidade = 0;
    while(glicose >=0){
        printf("%s", "Informe o valor da glicose");
        scanf("%d", &glicose);
        if(glicose>=0){
            somatorio = somatorio + glicose;
            quantidade = quantidade + 1;
        }
    }
    printf("média foi de: %d",somatorio/quantidade);
}