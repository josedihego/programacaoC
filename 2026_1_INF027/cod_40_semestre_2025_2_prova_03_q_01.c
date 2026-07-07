#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 50

int main(){
    char alfabeto[TAM];
    char mensagem [TAM];
    printf("Informe o alfabeto: ");
    fgets(alfabeto,TAM,stdin);
    printf("Informe a mensagem: ");
    fgets(mensagem,50,stdin);

    int m = 0;
    bool mensagem_alien = true;
    while(mensagem[m]!='\0'){
        char letra = mensagem[m];
        // buscar se a letra pertence ao 
       // alfabeto
       // se não pertence você muda  mensagem_alien de true para false
       bool letra_ausente = true;
       int a = 0;
       while(alfabeto[a]!='\0'){
        if(letra==alfabeto[a]){
            letra_ausente = false;
        }
        a = a+1;
       }
       if(letra_ausente==true){
        mensagem_alien = false;
       }
       m = m+1;
    }
    if(mensagem_alien){
        printf("Mensagem alien\n");
    }
    else{
        printf("Mensagem não alien\n");
    }
}