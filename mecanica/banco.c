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

void imprimir_conta(Conta * c){
    printf("Conta: %s # %s # %.2f\n", c->numero, c->agencia, c->saldo);
}
void imprima_contas_banco(Banco * banco){
    int i = 0;
    while(i < banco->proxPL){
        imprimir_conta(banco->contas[i]);
        i = i + 1;
    }
}


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

void atualizar_conta(Banco * banco, Conta * con_atu){
    remover_conta(banco, con_atu->numero, con_atu->agencia);
    cadastrar_conta(con_atu, banco);
}

int main(){
    Banco *  ifbanco = malloc(sizeof(Banco));
    ifbanco->contas = malloc(500 * sizeof(Conta *));
    ifbanco->proxPL = 0;

    Conta * c_adailton = malloc(sizeof(Conta));
    Conta * c_fp = malloc(sizeof(Conta));
    Conta * c_xadrez = malloc(sizeof(Conta));

    c_adailton->numero = "4567-2";
    c_adailton->agencia = "8901-3";
    c_adailton->saldo = 1000000.02;

    c_fp->numero = "3456-7";
    c_fp->agencia = "8901-3";
    c_fp->saldo = 34000000.99;

    c_xadrez->numero = "4365-8";
    c_xadrez->agencia = "8901-01";
    c_xadrez->saldo = -188000000.89;

    cadastrar_conta(c_adailton, ifbanco);
    cadastrar_conta(c_fp,ifbanco);
    cadastrar_conta(c_xadrez, ifbanco);
    imprima_contas_banco(ifbanco);
}
