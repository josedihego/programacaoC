#include <stdio.h>
#include <stdlib.h>

#define N 14

int main()
{

    /** Na prova pede assim
    int numeros [N];
    for(int i = 0; i < N; i = i +1){
        printf("Informe o valor da posição %d:", i +1);
        scanf("%d",&numeros[i]);
    }
    */
    // para agilizar nossos testes em aula
    // coloquei assim
    int numeros[N] = {9, 4, 3, 9, 1, 2, 4, 5, 1, 1, 9, 7, 0, 5};
    for (int numero = 0; numero <= 9; numero = numero + 1)
    {
        printf("Informe uma posição:");
        int posicao;
        scanf("%d", &posicao);
        posicao = posicao - 1;
        int qnt = 0;
        while (posicao >= 0)
        {

            int posicao2;
            printf("Informe a nova posição:");
            scanf("%d", &posicao2);
            posicao2 = posicao2 - 1;
            if (posicao2 >= 0)
            {
                if (posicao2 > posicao)
                {
                    for (int i = posicao; i < posicao2; i = i + 1)
                    {
                        if (numeros[i] == numero)
                        {
                            qnt = qnt + 1;
                        }
                    }
                }
                else
                {
                    for (int i = posicao; i > posicao2; i = i - 1)
                    {
                        if (numeros[i] == numero)
                        {
                            qnt = qnt + 1;
                        }
                    }
                }
            }
            posicao = posicao2;
        }
        printf("Quantidade de %d é: %d\n", numero, qnt);
    }
}