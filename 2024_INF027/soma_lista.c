#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 10
int main(){
    int soma = 0;
    int L [MAX];
    for(int i = 0; i < MAX; i = i +1){
        printf("Informe o %d° valor: ", i+1);
        scanf("%d", &L[i]);
    }
    return EXIT_SUCCESS;
}