#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

typedef struct Conta{
    char * numero;
    char * agencia;
    float saldo;
} Conta;

typedef struct Banco{
    Conta ** contas;
    int proxPL;
}Banco;


void cadastrar_conta( Conta * nova_conta, Banco * banco){
      banco->contas[banco->proxPL] = nova_conta;
      banco->proxPL = banco->proxPL + 1;
}

Conta * buscar_conta(Banco * banco, char * n_bus, char * a_bus){
    int i = 0;
    Conta * atual = NULL;
    while(i < banco->proxPL){
        atual = banco->contas[i];
        if(strcmp(atual->numero,n_bus)
        && strcmp(atual->agencia, a_bus)){
            return atual;
        }
    }
    return NULL;
}