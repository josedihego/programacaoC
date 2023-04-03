#include <stdio.h>

float somar(float x, float y){
    return x+y;
}

int fatorial(int x){
    if(x ==0) return 1;
    else return x * fatorial(x-1);
}

int main(){
    float preco_far = 5.89;
    float preco_arroz = 4.30;

    float total = somar(preco_arroz, preco_far);
    printf("preço total da feira: %.2f R$\n", total);

    printf("fatorial de 10: %d\n", fatorial(10));
}