#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int MAX_CONTAS = 10000;

typedef struct Conta{
    float saldo;
    char * numero;
    char * agencia;
} Conta;

typedef struct Banco{
    Conta ** lista_contas;
    int proxPL;
}Banco;

void cadastrar_conta(Banco * banco, Conta * nova_conta ){
    banco->lista_contas[banco->proxPL] = nova_conta;
    banco->proxPL = banco->proxPL + 1;
}

Conta * buscar_conta(Banco * banco, char * numero_buscado, char * agencia_buscada){
    int i = 0;
    Conta * c = NULL;
    while( i < banco->proxPL){
       c  = banco->lista_contas[i];
       bool num_igual = strcmp(c->numero,numero_buscado);
       bool ag_igual = strcmp(c->agencia,agencia_buscada);
       if(num_igual && ag_igual){
           return c;
       }
    }
    return c;
}