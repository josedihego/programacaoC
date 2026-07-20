#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor, copia_valor;
    int b0, b1, b2, b3, b4, b5;
    printf("Informe um valor:");
    scanf("%d",&valor);
    copia_valor = valor;
    if(valor >=0 && valor <=31){
        b1 = valor%2;
        valor = valor/2;
        b2 = valor%2;
        valor = valor/2;
        b3 = valor%2;
        valor = valor/2;
        b4 = valor%2;
        valor = valor/2;
        b5 = valor%2;
        valor = valor/2;
        printf("%d em binário é %d%d%d%d%d 😆\n",copia_valor,b5,b4,b3,b2,b1);
        int qnt_uns = b1+b2+b3+b4+b5;
        if(qnt_uns%2==0){
            b0 = 0;
        }
        else{
            b0 = 1;
        }
        printf("Resposta: %d%d%d%d%d%d 🦄\n",b5,b4,b3,b2,b1,b0);
    }
    else{
        printf("Valor inválido 😥 \n");
    }
}