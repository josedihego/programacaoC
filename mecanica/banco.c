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

Conta * buscar_conta(Banco * bnc, char * ag, char * num){
    int i = 0;
    Conta * c;
    while(i < bnc->proxPL){
        c = bnc->contas[i];
        if(strcmp(c->numero,num) 
           && strcmp(c->agencia,ag)){
            return c;
           }
           i = i +1;
    }
    return NULL;
}

void remover_conta(Banco * bnc, char * num, char * ag){
    int i = 0;
    Conta * c;
    bool removeu = false;
    while(i < bnc->proxPL && !removeu){
        c = bnc->contas[i];
        if(strcmp(c->numero, num)
         && strcmp(c->agencia,ag)){
            bnc->contas[i] = bnc->contas[bnc->proxPL-1];
            bnc->proxPL = bnc->proxPL -1;
            removeu = true;
         }
         i = i + 1;
    }
}


