
/**
 * Crie um programa que leia 3 valores do tipo
 * inteiro e informa se estes três valores podem
 * formar um triângulo retângulo.
 * Para isso saiba que um triângulo retangulo satsifaz
 * hiotenusa^2 = cateto1^2 + cateto_2^2
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, c1, c2;
    int lado1, lado2, lado3;
    printf("Informe os tamanhos das varetas: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    // testaremos se lado1 é o maior
    if (lado1 > lado2 && lado1 > lado3)
    {
        h = lado1;
        c1 = lado2;
        c2 = lado3;
    }
    // se você for ao else baixo
    //  lado1 perdeu, portanto a disputa
    // segue entre lado2 e lado3
    else
    {
        if (lado2 > lado3)
        {
            h = lado2;
            c1 = lado1;
            c2 = lado3;
        }
        else
        {
            h = lado3;
            c1 = lado1;
            c2 = lado2;
        }
    }
    if((h*h) == (c1*c1 + c2*c2)){
        printf("Pitagoras disse que isso é um triângulo retângulo, parabéns! 😃\n");
    }
    else{
        printf("Tente novamente. Pitagoras não esta feliz 😞\n");
    }
}