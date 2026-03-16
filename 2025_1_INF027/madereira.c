#include<stdio.h>
#include<stdlib.h>

#define QNT_RIPAS 5

int main(){
    float altura, largura;// metros
    float densidade;// kg/m³
    float comp_ripas[QNT_RIPAS];// em metros cada um
    //preços
    float preco_50, preco_150, preco_200;
    float preco_kg_serragem; 

    printf("Informe a altura padrão (m):");
    scanf("%f",&altura);
    printf("Informe a largura padrão (m): ");
    scanf("%f",&largura);
    printf("Informe a densidade (kg/m³): ");
    scanf("%f",&densidade);
    for(int i=0; i < QNT_RIPAS; i = i +1){
        printf("Informe o comprimento(m) da ripa n° %d: ", i+1);
        scanf("%f",&comp_ripas[i]);
    }
    printf("Informe os valores (R$) para .5, 1.5 e 2.0 metros:");
    scanf("%f %f %f", &preco_50, &preco_150, &preco_200);
    printf("Informe o preço por kg da serragem:");
    scanf("%f",&preco_kg_serragem);

    // calcular o ganho com 0.5 m
    int qnt_ped_50 = 0;
    float comp_restos_50 = 0;
    for(int i =0; i < QNT_RIPAS; i = i +1){
        float comp =  comp_ripas[i];
        int qnt =  (int) comp / 0.5;
        float resto = comp - qnt * 0.5;
        qnt_ped_50 = qnt_ped_50 + qnt;
        comp_restos_50 = comp_restos_50 + resto;
    }
    float massa_restos_50 = (altura*largura*comp_restos_50)* densidade;
    float ganho_total = qnt_ped_50 * preco_50 + massa_restos_50 * preco_kg_serragem;
    printf("Serrando em pedaços de .5 metros temos o ganho total em R$ de %.2f\n", ganho_total);



}