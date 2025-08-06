#include <stdio.h>
#include <stdlib.h>

int main(){
    float altura = 1.70;
    char nome_maria [30] = "Maria do Bairro";
    float *  pa = &altura;
    char * pn = nome_maria;
    printf("Personagem %s , altura %.2f\n", pn, *pa);
    
    char nome_sucata[30] = "Rainha da Sucata";
    pn = nome_sucata;
    *pa = 1.60;
    printf("Personagem %s , altura %.2f\n", pn, *pa);

}