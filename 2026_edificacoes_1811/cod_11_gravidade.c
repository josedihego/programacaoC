#include <stdio.h>
#include <stdlib.h>


#define GRAVIDADE_TERRA 9.81
#define GRAVIDADE_LUA 1.625

int main(){

    float massa;
    printf("Qual sua massa?");
    scanf("%f",&massa);

    float peso_terra = massa * GRAVIDADE_TERRA;
    float peso_lua = massa * GRAVIDADE_LUA;
    float razao = peso_lua/peso_terra;
    printf("Seu peso na Terra é %.2f kg.m/s²\n",peso_terra );
    printf("Seu peso na lua é %.2f kg.m/s²\n",peso_lua);
    printf("Você tem um peso na lua que é %.2f porcento do seu peso na terra\n", razao * 100);
}