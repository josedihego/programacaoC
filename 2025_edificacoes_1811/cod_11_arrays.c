#include <stdio.h>
#include <stdlib.h>


#define T 10

int main(){
    int lista[T];
    int pl = 0;
    char opcao = 'C';
    while(opcao != 'F'){
        printf("Informe uma opção:\n \t F (finalizar) \t C (cadastrar) \t R (remover): ");
        scanf("%c",&opcao);
        if(opcao == 'C'){

        }
        else if(opcao == 'R'){
            printf("Informe o número a ser removido");
            int numero;
            scanf("%d",&numero);
            int p;
            while(lista[p] != numero && p < pl){
                p = p+1;
            }
            if(p <pl){
                lista[p] = lista[pl-1];
                pl = pl -1;
            }
        }
    }
}