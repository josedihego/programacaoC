#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float encontrar_maior(float valores[]  , int tam){
    float maior = valores[0];
    for(int p = 1; p < tam; p = p +1){
        if(valores[p] > maior){
            maior = valores[p];
        }
    }
    return maior;
}



int main(){
    float lista [] = {3.2, 6.78, -1.3, 4.25, 10.15, 8.7, -1, 9.73};
    float res = encontrar_maior(lista,8);
    printf("🗼 maior valor é %.2f\n",res);

}