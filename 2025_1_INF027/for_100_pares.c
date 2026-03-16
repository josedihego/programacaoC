#include <stdio.h>
#include <stdlib.h>

int main()
{
    // imprimir os 100 primeiros números pares
    int somatorio_alternativo =0;
    printf("\n100 primeiros pares:\n");
    for (int i = 0; i < 100; i = i + 1)
    {
        printf("%d° = %d\n", i + 1, i * 2);
        somatorio_alternativo = somatorio_alternativo+(i*2);
    }
    printf("\n100 primeiros impares:\n");
    for (int i = 0; i < 100; i = i + 1)
    {
        printf("%d° = %d\n", i + 1, (i * 2) + 1);
        somatorio_alternativo = somatorio_alternativo+((i*2)+1);
    }
    printf("\nSoma dos 200 primeiros números inteiros [0-199]\n");
    int somatorio = 0;
    for(int i=0; i<200; i = i+1){
        somatorio = somatorio + i;
    }
    printf("Somatorio: %d\n", somatorio);
    printf("Somatorio alternativo: %d\n", somatorio_alternativo);
    
}