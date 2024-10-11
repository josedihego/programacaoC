#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX 5

int main(){
    int valores [MAX];
    for(int i = 0; i < MAX; i = i +1){
        printf("Informe o valor de n°%d: ", i+1);
        scanf("%d", &valores[i]);
    }
}