#include <stdio.h>
#include <stdlib.h>


int main(){
    int somatorio = 0;
    for(int n = 0; n < 10; n = n +1){
        somatorio = somatorio + n;
    }
    printf("Somatório é %d\n", somatorio);
    float media = somatorio/10.0;
    printf("Média %.2f\n",media);

}