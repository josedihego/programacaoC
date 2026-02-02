#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char alfabeto[100];
    char mensagem[200];

    printf("Informe o alfabeto:");
    fgets(alfabeto, 100, stdin);
    printf("Informe a mensagem:");
    fgets(mensagem, 200, stdin);
    bool mens_pode_ser_alien = true;
    int p_m = 0;
    while (mensagem[p_m] != '\n')
    {
        char letra = mensagem[p_m];
        printf("%c-",letra);
        bool achou = false;
        int p_a = 0;
        while (achou == false && alfabeto[p_a] != '\n')
        {
            if (letra == alfabeto[p_a])
            {
                achou = true;
            }
            p_a = p_a+1;
        }
        if (achou == false)
        {
            mens_pode_ser_alien = false;
        }
        p_m = p_m + 1;
    }
    if (mens_pode_ser_alien == true)
    {
        printf("Mensagem pode ser alienigena\n");
    }
    else
    {
        printf("Mensagem NÃO pode ser alienigena\n");
    }
}