#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// testa se numero é primo: true (SIM) false(NÃO)
bool eh_primo(int numero){
    int qnt_divisores = 2;
    for(int candidato=2; candidato < numero; candidato = candidato+1){
        if(numero%candidato==0){
            qnt_divisores= qnt_divisores+1;
        }
    }
    if(qnt_divisores==2 && numero >=2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int numero ;
    printf("Informe um número: ");
    scanf("%d",&numero);
    bool resultado = eh_primo(numero);
    if(resultado==true){
        int candidato_chen = numero + 2;
        //primeira parte sera ele impar e primo
        bool primeiro_teste;
        if(candidato_chen%2==1 && eh_primo(candidato_chen)==true){
            primeiro_teste = true;
        }
        else{
            primeiro_teste = false;
        }
        bool segundo_teste = false;
        for(int i = 1; i < candidato_chen; i = i +1){
            for(int j =1; j < candidato_chen; j = j+1){
                if(i*j==candidato_chen){
                    if(eh_primo(i)==true && eh_primo(j)==true){
                        segundo_teste = true;
                    }
                }
            }
        }
        if(primeiro_teste==true || segundo_teste==true){
            printf("É um número de Chen Jingrun");
        }
        else{
            printf("Não é um número de Chen Jingrun");
        }
    }
    else{
        printf("Número NÃO é de Chen Jingrun!");
    }
}