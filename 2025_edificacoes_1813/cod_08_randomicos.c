#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int dado = rand()%6;
    dado = dado +1;
    printf("Dado é %d\n",dado);
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