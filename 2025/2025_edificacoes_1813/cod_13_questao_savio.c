#include <stdio.h>
#include <stdlib.h>


int calc_soma_pa(int primeiro, int razao, int qnt_termos){
    int soma = primeiro;
    int termo = primeiro;
    printf("termo: %d\n", termo);
    for(int q =1; q < qnt_termos; q = q +1){
        termo = termo + razao;
        printf("termo:%d\n", termo);
        soma = soma + termo;
    }
    return soma;
}

int main(){
    int inicial;
    int razao;
    printf("Informe o valor inicial:");
    scanf("%d", &inicial);
    printf("Informe a razão:");
    scanf("%d",&razao);
    int soma10 = calc_soma_pa(inicial,razao, 10);
    int soma12 = calc_soma_pa(inicial,razao, 12);
    printf("Soma dos 10: %d\n", soma10);
    printf("Soma dos 12: %d\n", soma12);
}