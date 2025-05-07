#include <stdio.h>
#include <stdlib.h>


int main(){
    int somatorio = 0;
    for(int n = 0; n < 820; n = n +1){
        somatorio = somatorio + n;
    }
    printf("Somatório é %d\n", somatorio);
}