#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

typedef struct Conta{
  float saldo;
  char * numero;
  char * agencia;
}Conta;

typedef struct Banco{
    Conta ** contas;
    int proxPL;
}Banco;


void cadastrar_conta(Conta * conta_nova, Banco * banco){
    banco->contas[banco->proxPL] = conta_nova;
    banco->proxPL = banco->proxPL + 1;
}

Conta * buscar_conta(Banco * banco, char * n_con, char * a_con){
    int i = 0;
    Conta * c;
    while(i < banco->proxPL){
        c = banco->contas[i];
        if(strcmp(c->numero,n_con) 
           && strcmp(c->agencia,a_con)){
             return c;
           }
           i = i +1;
    }
    return NULL;
}



void remover_conta(Banco * banco, Conta * con_rem){
    int i = 0;
    Conta * c_teste;
    while(i < banco->proxPL){
        c_teste = banco->contas[i];
        if(strcmp(c_teste->numero, con_rem->numero)
        && strcmp(c_teste->agencia, con_rem->agencia)){
            banco->contas[i] = banco->contas[banco->proxPL-1];
            banco->proxPL = banco->proxPL -1;
        }
    }
}



