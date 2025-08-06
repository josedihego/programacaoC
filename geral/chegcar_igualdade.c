#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3;
    printf("%s:", "Informe o primeiro número");
    scanf("%d", &n1);
    printf("%s:", "Informe o segundo número");
    scanf("%d", &n2);
    printf("%s:", "Informe o terceiro número");
    scanf("%d", &n3);
    if(n1==n2 && n2==n3){
         printf("Os números %d, %d e %d são iguais\n", n1,n2,n3);
    }
    else if(n1 >= n2 && n1 >= n3){
        printf("%d é o maior dentre %d, %d e %d\n", n1,n1,n2,n3);
    }
    else if(n2 >= n1 && n2 >= n3){
         printf("%d é o maior dentre %d, %d e %d\n", n2,n1,n2,n3);
    }
    else{
         printf("%d é o maior dentre %d, %d e %d\n", n3,n1,n2,n3);
    }

}