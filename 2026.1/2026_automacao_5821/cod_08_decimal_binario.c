#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int decimal, resto, copia_decimal;
    int binario[32];
    int ppl = 0;
    printf("Informe um valor natural:");
    scanf("%d",&decimal);
    copia_decimal = decimal;
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
    bool palindromo = true;
    int meio = ppl/2;

    int c = 0; // c cresce
    int d = ppl-1;// d decresce 
    for(c= 0; c < meio; c = c+1){
        if(binario[c]!=binario[d]){
            palindromo = false;
        }
        d = d-1;
    }
    if(palindromo){
        printf("%d em binário é palindromo\n", copia_decimal);
    }
    else{
        printf("%d em binário NÃO é palindromo\n", copia_decimal);
    }
    
}