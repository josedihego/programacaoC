#include<stdlib.h>
#include<stdio.h>

int main(){
    int valor = 0;
    float soma_pares = 0;
    int quantidade = 0;
    while (!(valor > 100 && valor%2==1)){
            printf("%s", "Informe um valor:");
            scanf("%d", &valor);
            if(valor%2==0){
                soma_pares = soma_pares + valor;
                quantidade = quantidade + 1;
            }

    }
    printf("média dos valores pares: %f \n", soma_pares/quantidade);
}