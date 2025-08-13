#include <stdio.h>
#include <stdlib.h>

float somar_array(float valores[], int tam){
    float resultado = 0;
    for(int p=0; p < tam; p = p +1){
        resultado = resultado + valores[p];
    }
    return resultado;
}

float calcular_media_array(float valores[], int tam){
    return somar_array(valores,tam)/tam;
}


int main(){
    float massas [8] = {1.52,7.89,1.22,8.99,3.56,7.88,7.5,1.88};
    float soma = somar_array(massas,8);
    float media = calcular_media_array(massas,8);
    printf("Soma = %.2f g\n",soma);
    printf("Média = %.4f g\n",media);
}