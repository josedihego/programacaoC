#include <stdio.h>
#include <stdlib.h>


int  main(void){
   int idade = 15;

    if(idade < 13){
        printf("%s", "criança");
    }
    else if ( idade >= 13 && idade <18){
        printf("%s", "Adolescente");
    }
    else{
                printf("%s", "Adulto");

    }
}