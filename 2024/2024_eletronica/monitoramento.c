#include <stdio.h>
#include <stdlib.h>

int main(){
    float tensao;
    printf("Informe a leitura de tensão:");
    scanf("%f", &tensao);
    while(tensao >= 105 && tensao<=230){
        printf("%s", "Tensão de trabalho normal\n");
        printf("%s","Informe a leitura de tensão:");
        scanf("%f",&tensao);
    }
    printf("%s","Tensão fora do intervalo adequado\n");
    return EXIT_SUCCESS;
}