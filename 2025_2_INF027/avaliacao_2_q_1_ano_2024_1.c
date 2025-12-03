#include<stdio.h>
#include<stdlib.h>


int main(){
    int valor;
    printf("Informe o primeiro valor da sequência de Collatz: ");
    scanf("%d",&valor);
    int qnt = 0;
    if(valor==0){
        printf("Sequência infinita de zeros. [0, 0, ...]\n");
    }
    else{
        printf("[");
        while(valor!= 1){
            printf("%d, ", valor);
            if(valor%2==0){
                valor = valor/2;
            }
            else{
                valor = (3*valor)+1;
            }
            qnt = qnt +1;
        }
        printf("%d ]",valor);
        qnt = qnt +1;
        printf("Quantidade de elementos na sequência é: %d\n",qnt);
    }
    return EXIT_SUCCESS;
}