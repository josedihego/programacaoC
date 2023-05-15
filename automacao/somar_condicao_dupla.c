#include<stdio.h>
#include<stdlib.h>

int main(){
    int valor = 0;
    int soma_pares = 0;
    int qnt_pares = 0;

    while (!(valor>100 && valor%2==1)){
        printf("%s", "Informe um valor:");
        scanf("%d", &valor);
        if(valor%2==0){
            soma_pares = soma_pares + valor;
            qnt_pares = qnt_pares +1;
        }
    }
    printf("Média dos pares: %d", soma_pares/qnt_pares);

}