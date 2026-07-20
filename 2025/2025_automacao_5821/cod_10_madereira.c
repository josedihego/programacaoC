#include <stdio.h>
#include <stdlib.h>

int main(){
    float C, L, A;
    float p5, p15, p22;
    float D;
    float pkg;
    printf("Informe o comprimento, largura e altura:");
    scanf("%f %f %f", &C, &L, &A);
    printf("Informe os preços .5 m, 1.5 m e 2.2 m:");
    scanf("%f %f %f", &p5, &p15, &p22);
    printf("Informe a densidade:");
    scanf("%f",&D);
    printf("Informe o preço por kg:");
    scanf("%f",&pkg);

    // calculo do ganho com cortes de 0.5 m
    int qnt_pedacos = 0;
    float sobra = C;
    for(sobra = C; sobra >= 0.5; sobra = sobra - 0.5){
        qnt_pedacos = qnt_pedacos +1;
    }
    float volume_sobra = sobra * L * A;
    float massa_sobra = volume_sobra *  D;
    float valor_ganho = (qnt_pedacos * p5) + (massa_sobra*pkg);

    printf("Quantidade pedaços .5 m: %d\n", qnt_pedacos);
    printf("Quantidade de kg de pó de madeira: %.2f\n",massa_sobra);
    printf("Valor total arrecadado: %.2f R$\n",valor_ganho);
    // calculo do ganho com cortes de 1.5 m

    // calculo do ganho com cortes de 2.2 m

    // decidir e mostrar qual o melhor esquema de corte
    // se com 0.5 m, 1.5 m ou 2.2 m

}