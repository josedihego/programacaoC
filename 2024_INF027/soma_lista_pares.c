#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 4
int main(){
    int soma = 0;
    int soma_pares = 0;
    int qnt_pares = 0;
    int L [MAX];

    for(int i = 0; i < MAX; i = i +1){
        printf("Informe o %d° valor: ", i+1);
        scanf("%d", &L[i]);
    }

    for(int i=0; i < MAX; i = i +1){
        soma = soma + L[i];
        if(L[i]%2==0) {
            soma_pares = soma_pares + L[i];
            qnt_pares = qnt_pares +1;
        }
    }
    printf("A soma dos %d valores digitados é: %d\n", MAX, soma);
    printf("Existem %d números pares e sua soma é %d\n",qnt_pares,soma_pares);
    return EXIT_SUCCESS;
}