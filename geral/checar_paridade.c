#include <stdio.h>
#include <stdlib.h>

int main(){
   
    int valor_informado1;
    int valor_informado2;
    printf("%s", "Informe um valor inteiro:");
    scanf("%d",&valor_informado1);
    printf("%s", "Informe um segundo inteiro:");
    scanf("%d",&valor_informado2);
    if(valor_informado1%2==0 && valor_informado2%2==0){
        printf("%d, %d são pares\n", valor_informado1, valor_informado2);
    }
    else{
        printf("%d é impar ou %d é impar\n", valor_informado1, valor_informado2);
    }

    return EXIT_SUCCESS;
}