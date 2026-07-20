#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    char texto[200];
    char cobol[6] = "cobol";
    printf("Informe as 5 palavras separadas por hífen: ");
    fgets(texto,200,stdin);
    printf("%s\n",texto);
    bool falhou = false;
    int i = 0;
    int p =0;
    //cap-one-best-opinion-language
    for(i = 0; i < 200; i++){
        if(texto[i] == '-' || texto[i] == '\0')
            if(texto[i] == 'c' || texto[i-1] == 'c'){
                contador++;
                hifencont = -1;
            }
    }
}