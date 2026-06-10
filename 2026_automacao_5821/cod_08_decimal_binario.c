#include <stdio.h>
#include <stdlib.h>

int main(){

    int decimal, resto;
    int binario[32];
    int ppl = 0;
    printf("Informe um valor natural:");
    scanf("%d",&decimal);
    printf("Decimal %d em binário é ", decimal);
    while(decimal !=0){
        resto = decimal % 2;
        //printf("%d",resto);
        binario[ppl] = resto;
        ppl = ppl +1;
        decimal = decimal/2;
    }
    for(int i = ppl-1; i >=0; i=i-1){
        printf("%d",binario[i]);
    }
    printf("\n");
    //printf("Tamanho de um int em C é %lu bits \n", sizeof(int) * 8);
}