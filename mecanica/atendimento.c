#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    
    bool esta_frio = true;
    bool esta_ventando = false;
    bool ceu_nublado = false;
    if(esta_frio && esta_ventando && ceu_nublado){
        printf("%s", "Ira  chover em breve\n");
    }
    else{
       if(esta_frio && ceu_nublado){
        printf("%s", "Existe chance de chuva\n");
       }
       else{
        printf("%s", "Sem chance de chuva\n");
       }
    }
    return EXIT_SUCCESS;
}