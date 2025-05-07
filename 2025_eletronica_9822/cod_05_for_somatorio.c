#include <stdio.h>
#include <stdlib.h>

int main(){
    int somatorio = 0;
    for(int i = 0; i < 100; i = i +1){
        somatorio = somatorio + i;
    }
    printf("Somatório = %d\n", somatorio);
}