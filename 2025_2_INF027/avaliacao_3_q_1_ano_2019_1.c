#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

int main(){
    char alfabeto [] = "abcdefghijklmnopqrstuvwxyz";
    char achadas [26];
    int pla = 0;
    printf("Informe o texto:");
    char texto [100];
    fgets(texto,100,stdin);
    int p = 0;
    while(alfabeto[p]!= '\0'){
        char letra = alfabeto[p];
        bool achou = false;
        int i = 0;
        while(achou==false && texto[i]!='\0'){
            if(letra==texto[i]){
                achou = true;
                printf("%c - ",letra);
                achadas[pla] =letra;
                pla = pla +1;

            }
             i = i+1;
        }
        p = p+1;
    }

    p = 0;
    bool comecei_intervalo = false;
    while(p < pla){
        char letra = achadas[p];
        if(comecei_intervalo==true){
            if(letra -1 == achadas[p-1]){

            }
            else{
                printf("%c ", achadas[p-1]);
                printf("%c:", letra);
                comecei_intervalo = true; 
            }
    
        }
        else{
            printf("%c:",letra);
            comecei_intervalo = true;
        }
        p=p +1;
    }
    printf("%c\n", achadas[p-1]);


}