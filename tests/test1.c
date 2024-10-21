#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

typedef struct Produto{
  float preco;
  char * codigo;
}Produto;

typedef struct Supermercado{
    char * nome;
    Produto ** produtos;
    int proxPL;
}Supermercado;

float somar_produtos(Supermercado * sup){
    float soma = 0;
    for(int i = 0; i < sup->proxPL; i = i +1){
        soma = soma + sup->produtos[i]->preco;
    }
    return soma;
}


int main(){
    printf("%s\n", "fim");

}

