#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    int decimal;
    int resto;
    int binario[32];
    int ppl = 0;
    printf("Informe um valor decimal positivo: ");
    scanf("%d",&decimal);
    printf("%d em binário é ",decimal);
    while(decimal != 0){
        resto = decimal % 2;
        //printf("%d",resto);
        binario[ppl] = resto;
        ppl = ppl + 1;
        decimal = decimal/2;
    }
   
    for(int p = ppl-1; p >=0; p = p-1){
        printf("%d",binario[p]);
    }
     printf("\n");
    printf("tamanho em bits de um inteiro %lu\n", sizeof(int) * 8);
}