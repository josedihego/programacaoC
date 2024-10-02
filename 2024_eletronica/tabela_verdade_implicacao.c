#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){
    char conceito;
    printf("informe o conceito: A, B, C, D, E, F ");
    scanf("%c", &conceito);
    int rendimento;
    printf("Informe o rendimento: [0,100] ");
    scanf("%d", &rendimento);
    bool p;
    if(conceito=='A') p = true;
    else p = false;
    bool q;
    if(rendimento >=90) q = true;
    else q = false;
    printf("Resultado: %d\n", !p || q);
}