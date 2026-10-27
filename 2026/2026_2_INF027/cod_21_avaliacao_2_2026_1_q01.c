#include <stdio.h>
#include <stdlib.h>

int main(){
    float chico = 1.50;
    float ze = 1.10;
    int anos = 0;
    while(ze <= chico){
        anos = anos +1;
        chico = chico + 0.02;
        ze = ze + 0.03;
    }
    printf("Depois de %d anos Zé (%.2f) é maior que Chico (%.2f)\n",anos, ze,chico);

}