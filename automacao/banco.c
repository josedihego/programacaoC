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
        i = i + 1;
    }
}

void atualizar_conta(Banco * banco, Conta * con_atua){
    remover_conta(banco, con_atua);
    cadastrar_conta(banco, con_atua);
}

int main(){

    Banco * banco_logic = malloc(sizeof(Banco));
    banco_logic->proxPL = 0;
    banco_logic->contas = malloc(1000 * sizeof(Conta *));

    Conta * conta_cleverson = malloc(sizeof(Conta));
    Conta * conta_levi = malloc(sizeof(Conta));
    Conta * conta_lorena = malloc(sizeof(Conta));

    conta_cleverson->agencia = "9272-08";
    conta_cleverson->numero = "234-8";
    conta_cleverson->saldo = 100000.32;

    conta_levi->agencia = "1203-10";
    conta_levi->numero = "2020-4";
    conta_levi->saldo = 20000.50;

    conta_lorena->agencia = "5698-08";
    conta_lorena->numero = "3456-09";
    conta_lorena->saldo = 900000.70;

    cadastrar_conta(conta_cleverson,banco_logic);
    cadastrar_conta(conta_levi,banco_logic);
    cadastrar_conta(conta_lorena,banco_logic);
}



