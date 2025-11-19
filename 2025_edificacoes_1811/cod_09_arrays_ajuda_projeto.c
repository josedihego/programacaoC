#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lista_materias[20];
    int numero;
    int opcao;
    int pl = 0;
    while (pl < 20)
    {
        printf("O que deseja fazer:\n 1.adicionar material \n 2.buscar \n 3. Listas elementos\n");
        printf("Sua escolha:");
        scanf("%d", &opcao);
        if (opcao == 1)
        {
            printf("Você escolheu cadastrar\n");
            printf("Agora informe o número do material:");
            scanf("%d", &numero);
            lista_materias[pl] = numero;
            pl = pl +1;
        }
        else if (opcao == 2)
        {
            printf("Você escolheu buscar\n");
            printf("Agora informe o número do material buscado:");
            scanf("%d", &numero);
            int p = 0;
            while (lista_materias[p] != numero && p < pl)
            {
                p = p + 1;
            }
            if (p == pl)
            {
                printf("Elemento não encontrado\n");
            }
            else
            {
                printf("O elemento %d foi encontrado na posição %d\n", numero, p);
            }
        }
        else if (opcao == 3)
        {
            printf("Você escolheu a opção listar.\n");
            printf("\n[");
            for (int p = 0; p < pl; p = p + 1)
            {
                printf("%d ", lista_materias[p]);
            }
            printf("]\n");
        }
    }
}