#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MIN -10
#define MAX 30

int main(){
    int ultimo = 0;
    int penultimo = 0;
    bool digitou_dois = false;

    while(true){
        printf("Informe um valor:");
        scanf("%d", &ultimo);
        if(digitou_dois){
            if(ultimo==penultimo || ultimo< MIN || ultimo> MAX){
                printf("AVISO\n");
            }
        }
        else{
            if(ultimo < MIN || ultimo > MAX){
                printf("AVISO\n");
            }
        }
        penultimo = ultimo;
        digitou_dois = true;

    }
}