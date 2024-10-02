#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


int main(){
    int valor = 110;
    float medida =  8.5;
    char a = 'n';
    printf("%c\n",a);
    printf("%c\n",valor);
    bool sinto_fome;
    int resposta;
    printf("Você esta com fome?[1]sim [2]não [3]não sei: ");
    scanf("%d", &resposta);
    if(resposta==1) sinto_fome = true;
    else sinto_fome = false;
    if(sinto_fome){
        printf("Va para o Hangra\n");
    }
    else{
        printf("Permaneça em sala\n");
    }
}