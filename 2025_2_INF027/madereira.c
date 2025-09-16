#include <stdio.h>
#include <stdlib.h>


int main(){
    float comprimento, tam_ped, altura, largura, densidade;
    printf("Informe o comprimento:");
    scanf("%f",&comprimento);
    printf("Informe o tamnho de corte:");
    scanf("%f", &tam_ped);
    printf("Informe a altura da ripa:");
    scanf("%f",&altura);
    printf("Informe o largura da ripa:");
    scanf("%f",&largura);
    printf("Informe a densidade da madeira:");
    scanf("%f",&densidade);

    int qnt;
    float sobra, volume, massa;
    qnt = comprimento/tam_ped;
    printf("Quantidade de pedações é: %d\n",qnt);
    sobra = comprimento - (qnt * tam_ped);
    printf("Sobra é: %.2f m\n", sobra);
    volume = sobra * altura * largura;
    printf("Volume é: %.4f m³\n", volume);
    massa = volume * densidade;
    printf("Massa é %.2f kg\n", massa);

}