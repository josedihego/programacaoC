/**
 * Crie um programa para monitorar os dados produzidos por uma
 * sonda espacial. A sonda faz 30 leituras por minuto -- ou seja, 1 leitura a cada 2 segundos.
 * Seu programa deve ler 30 valores -- cada valor é uma letra/caractere.
 * Essas letras poderão ser apenas:
 * O - oxigênio
 * C - carbono
 * N - nitrogênio
 * H - hidrogênio
 * X - não identificado
 * Ao final, como saída, seu programa deve responder:
 * - Se a amostra é válida (16 leituras ou mais diferentes de X)
 *    -> Sendo válida, informar o elemento predominante
 * - Se a amostra é INVÁLIDA (15 ou mais leituras com X)
 */
#include <stdio.h>
#include <stdlib.h>
#define QNT 10

int main()
{
    char leituras[QNT];
    for (int p = 0; p < QNT; p = p + 1)
    {
        printf("Informe a leitura n°%d: ", p + 1);
        scanf(" %c", &leituras[p]);
    }
    int qntX = 0, qntO = 0, qntC = 0, qntN = 0, qntH = 0;
    for (int p = 0; p < QNT; p = p + 1)
    {
        switch (leituras[p])
        {
        case 'X':
            qntX = qntX + 1;
            break;
        case 'O':
            qntO = qntO + 1;
            break;
        case 'C':
            qntC = qntC + 1;
            break;
        case 'N':
            qntN = qntN + 1;
            break;
        case 'H':
            qntH = qntH + 1;
            break;
        }
    }
    if(qntX>=QNT/2){
        printf("Leituras ínvalidas");
    }
    else{
        if(qntC>qntH && qntC>qntO && qntC>qntN){
            printf("Carbono predomina com %d leituras\n",qntC);
        }
        else{
            if(qntH > qntO && qntH > qntN){
                printf("Hidrogênio predomina com %d leituras\n",qntH);
            }
            else{
                if(qntO > qntN){
                    printf("Oxigênio predomina com %d leituras\n",qntO);
                }
                else{
                    printf("Nitrogênio predomina com %d leituras\n", qntN);
                }
            }
        }
    }
}
