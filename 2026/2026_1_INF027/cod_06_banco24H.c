#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saque;
    int q200, q100, q50, q20, q10;
    // agora o usuário informa o valor do saque
    printf("Informe o valor desejado: ");
    scanf("%d", &saque);
    // faremos nossos testes, serão 3:
    //  Teste 1: verifica se valor maior ou igual a 10
    if (saque >= 10 && saque <= 1000)
    {

        if (saque % 10 == 0)
        {
            printf("Suas notas são 🤑: \n");
            q200 = saque / 200;
            // opcao 1
            // saque = saque - q200 * 200;
            // opcao 2998
            saque = saque % 200;
            q100 = saque / 100;
            saque = saque % 100;
            q50 = saque / 50;
            saque = saque % 50;
            q20 = saque / 20;
            saque = saque % 20;
            q10 = saque / 10;
            saque = saque % 10;
            if (q200 > 0)
            {
                printf("%d notas de R$ 200\n", q200);
            }
            if (q100 > 0)
            {
                printf("%d notas de R$ 100\n", q100);
            }
            if (q50 > 0)
            {
                printf("%d notas de R$ 50\n", q50);
            }
            if (q20 > 0)
            {
                printf("%d notas de R$ 20\n", q20);
            }
            if (q10 > 0)
            {
                printf("%d notas de R$ 10\n", q10);
            }
        }
        else
        {
            printf("Valores devem ser multiplos de 10 R$\n");
        }
    }
    else
    {
        printf("Não é possivel sacar menos que 10 R$ ou mais que 1000 R$\n");
    }
}