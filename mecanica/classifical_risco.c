#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


int main(){
    bool esta_febre;
    bool esta_dor;
    bool esta_falta_ar;
    int batimentos;
    char * resposta = malloc(4 * sizeof(char));
    
    printf("%s", "Paciente esta com febre?");
    scanf("%s", resposta);
    if(strcmp(resposta,"sim")==0){
        esta_febre = true;
    }
    else{
        esta_febre = false;
    }


    printf("%s", "Paciente esta com falta de ar?");
    scanf("%s", resposta);
    if(strcmp(resposta,"sim")==0){
        esta_falta_ar = true;
    }
    else{
        esta_falta_ar =  false;
    }
     printf

}