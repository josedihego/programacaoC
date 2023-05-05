#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor = 1;
    int somatorio = 0;
    int media;
    int qnt = 0;
    while (valor > 0){
       printf("%s", "Informe um valor:");
       scanf("%d", &valor);
       if(valor>0){
        somatorio = somatorio + valor;
        qnt = qnt + 1;
       }
    }
    if(qnt >0){
        media = somatorio/qnt;
        printf("média: %d\n", media);
    }
    else{
        printf("%s", "Nenhum valor válido foi informado.\n");
    }
    
}