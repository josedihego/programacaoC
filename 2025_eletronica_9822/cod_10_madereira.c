#include <stdio.h>
#include <stdlib.h>

int main(){
    float C, L, A;
    float p5, p15, p22;
    float D, pkg;
    printf("Informe comprimento, largura e altura:");
    scanf("%f %f %f",&C, &L, &A);
    printf("Informe os preços para os tamanhos de ripas:");
    scanf("%f %f %f", &p5, &p15, &p22);
    printf("Informe a desidade da madeira:");
    scanf("%f",&D);
    printf("Informe o preço/kg de pó de madeira:");
    scanf("%f",&pkg);

    // colocar a máquina para cortar pedaços de 0.5 metros
    int qnt_pedacos5 = 0;
    float c;
    for(c = C; c>= 0.5; c = c - 0.5){
        qnt_pedacos5 = qnt_pedacos5 +1;
    }
    float volume_sobra_5 = c * A * L;
    float kg_sobra_5 = D * volume_sobra_5;
    float ganho_5 = (qnt_pedacos5 * p5) + (kg_sobra_5 * pkg);
    printf("Ganho com 0.5 m é: %.2f\n", ganho_5);
    printf("Número de ripas de 0.5 m é: %d\n", qnt_pedacos5);
    printf("Massa do pó de madeira: %.2f\n",kg_sobra_5);

    // colocar  a máquina para cortar pedaços de 1.5 metros
    
    // colocar  a máquina para cortar pedaços de 2.2 metros

    // Mostrar qual o melhor esquema de corte
}