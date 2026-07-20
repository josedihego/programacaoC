#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int dado1 = rand()%6;
    dado1 = dado1 +1;
    int dado2 = rand()%6;
    dado2 = dado2+1;
    int resposta;
    printf("Informe o valor do dado1 + dado2: ");
    scanf("%d",&resposta);
    if(resposta == dado1+dado2){
        printf("Você acertou! Parabéns!\n");
    }else{
        printf("Você errou! Tente novamente!\n");
    }
    printf("Dado 1 é:  %d\n",dado1);
    printf("Dado 2 é: %d\n",dado2);

    //int agora = time(NULL);
    //printf("Agora : %d\n", agora);
}
/**
 * Crie um programa que joga dois dados:
dado1 e dado2

Depois seu programa pergunta ao usuário qual
o valor de dado1+dado2

Se o usuário acerta essa soma, o programa imprime
"Parabéns você ganhou!"

Caso contrário o programa imprime:
"Não foi dessa vez, dado1= X e dado2 = Y"

 */