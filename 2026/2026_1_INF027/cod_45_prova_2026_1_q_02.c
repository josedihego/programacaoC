#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define T 35

int main(){
    char palavra[T];
    char padrao [T];
    printf("informe o padrão:");
    fgets(padrao,T,stdin);
    printf("Informe a palavra:");
    fgets(palavra,T,stdin);
    int tam_palavra=0;
    int tam_padrao=0;
    int p = 0;
    while(palavra[p]!='\0'){
        tam_palavra = tam_palavra+1;
        p = p +1;
    }
    tam_palavra = tam_palavra-1;
    p = 0;
    while(padrao[p]!='\0'){
        tam_padrao = tam_padrao+1;
        p = p +1;
    }
    tam_padrao = tam_padrao-1;
    int qnt = 0;
    // tenho o tamanho da palavra e o tamanho do padrão
    for(int i=0; i < tam_padrao; i = i +2){
        qnt = qnt + padrao[i]-48;
    }
    //printf("qnt de caracteres esperado é %d\n",qnt);

    if(qnt==tam_palavra){
       // printf("Tem uma chance!\n");
        bool passou = true;
        for(int i = 0; i < tam_padrao; i = i +2){
            int numero = padrao[i]-48;
            char letra = padrao[i+1];
           // printf("Letra %c quantidade %d",letra,numero);
            int qnt_achados = 0;
            for(int p =0; p < tam_palavra; p = p+1){
                if(palavra[p]==letra){
                    qnt_achados = qnt_achados+1;
                }
            }
            if(qnt_achados!=numero){
                passou = false;
            }

        }
        if(passou){
            printf("ACEITO\n");
        }
        else{
            printf("BLOQUEADO\n");
        }

    }
    else{
        printf("BLOQUEADO\n");
    }

}