#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXIMO 50
int main()
{

    int lista_presenca[MAXIMO];
    int lista_sem_repeticao[MAXIMO];

    //char opcao = 'S';
    bool continuar = true;
    int i = 0;
    while (continuar == true)
    {
        printf("Informe o código do discente n° %d: ", i + 1);
        scanf("%d", &lista_presenca[i]);
        if(lista_presenca[i] < 0){
            continuar = false;
        }
        //scanf(" %c", &opcao);
        i = i +1;
    }
    int l =0;
    for(int j = 0; j < i; j = j+1){
        int numero_discente = lista_presenca[j];
        bool esta_contido = false;
        for(int k =0; k < l; k = k+1){
            if(lista_sem_repeticao[k]==numero_discente){
                esta_contido = true;
            }
        }
        if(esta_contido==false){
            lista_sem_repeticao[l]= numero_discente;
            l = l+1;
        }
    }
    l= l-1;// remove o negativo
    printf("Existem %d únicos discentes\n Elas/eles são:\n", l);
    for(int i =0; i < l; i = i+1){
        printf("Discente n° %d é %d\n",i+1,lista_sem_repeticao[i]);
    }
}