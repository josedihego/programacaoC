#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    char * texto = malloc(500 * sizeof(char));
    char * palavra = malloc(10 * sizeof(char));
    printf("Informe texto: ");
    fgets(texto,500,stdin);
    printf("Informe a palavra: ");
    fgets(palavra,10,stdin);

    int t=0;//anda pelo texto
    int p=0;// anda pela palavra
    
    bool achei = false;
    while(texto[t]!='\n' && !achei){

        if(palavra[p]==texto[t]){
            if(palavra[p]=='\n'){
                achei = true;
            }
            p = p +1;
        }
        else{
            p=0;
        }
        t = t+1;
    }if(achei){
        printf("Achei\n");
    }
    else{
        printf("Não achei!\n");
    }

}