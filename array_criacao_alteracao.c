#include <stdio.h>
#include <stdlib.h>

int main(void){
    int codigos [] =  {30,40,80,90, 10, 15, 77, 80};
    printf("O  1° código é: %d\n", codigos[0]);
    printf("O  8° código é: %d\n", codigos[7]);
    codigos[0]= 77;
    codigos[7] = 99;
    printf("Depois da mudança:\n");
    printf("O  1° código é: %d\n", codigos[0]);
    printf("O  8° código é: %d\n", codigos[7]);

}