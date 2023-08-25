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

Conta * buscar_conta(Banco * ban, char * n_bus, char * a_bus){
    int i = 0;
    Conta * c;
    while( i < ban->proxPL){
        c = ban->contas[i];
        if(strcmp(c->numero,n_bus)
          && strcmp(c->agencia,a_bus)){
            return c;
          }
          i = i +1;
    }
    return NULL;
}

void remover_conta(Banco * banco, Conta * con_rem){
    int i = 0;
    Conta * c;
    while(i < banco->proxPL){
        c = banco->contas[i];
        if(strcmp(c->agencia, con_rem->agencia)
           && strcmp(c->numero, con_rem->numero)){
            banco->contas[i] = banco->contas[banco->proxPL-1];
            banco->proxPL = banco->proxPL - 1;
           }
           i = i + 1;
    }
}

void atualizar_conta(Banco * banco, Conta * conta){
    remover_conta(banco,conta);
    cadastrar_conta(conta, banco);
}
int main(){
    printf("%s\n", "Tudo ok");
    return EXIT_SUCCESS;
}



