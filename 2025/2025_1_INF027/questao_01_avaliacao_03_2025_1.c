#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    char texto[200];
    char cobol[6] = "cobol";
    char letras[10];
    printf("Informe as 5 palavras separadas por hífen: ");
    fgets(texto,200,stdin);
    printf("%s\n",texto);
    bool falhou = false;
    int i = 0;
    int p =0;
    int j = 0;
    //cap-one-best-opinion-language
    //fantasti-officio-dumb-onto-label
    letras[j] = texto[i];
    j = j+1;
    while(texto[i]!= '\0'){
        if(texto[i]=='-'){
            printf("posição hifen %d \n", i);
            letras[j] = texto[i-1];
            j = j+1;
            letras[j] = texto[i+1];
            j = j +1;
        }
        i = i+1;
    }
    letras[j] = texto[i-2];

    for(j=0; j < 10; j = j+1){
        printf("%c ", letras[j]);
    }

    bool bug = false;
    for(int k = 0 ; k < 5; k = k +1){
        if (!(cobol[k] == letras[2*k] || cobol[k] == letras[(2 * k) + 1])){
            bug = true;
        }
    }
    if(bug){
        printf ("BUG \n");
    }
    else{
        printf("COBOL\n");
    }
    

}