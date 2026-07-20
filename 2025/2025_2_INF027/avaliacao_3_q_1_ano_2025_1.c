#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define T 100
int main()
{

    bool eh_cobol = true;
    char texto[T];
    char cobol[5] = "cobol";
    printf("Informe o texto: ");
    fgets(texto, T, stdin);
    printf("%s", texto);
    // cap-one-best-opinion-language
    int i = 0;
    int qnt_hifens = 0;
    int tamanho_palavra = 0;
    while (texto[i] != '\0' && eh_cobol)
    {
        char c = texto[i];
        if (c != '-')
        {
            tamanho_palavra = tamanho_palavra + 1;
        }
        else
        {
            if (cobol[qnt_hifens] != texto[i - 1] && cobol[qnt_hifens] != texto[i - tamanho_palavra])
            {
                eh_cobol = false;
            }
            tamanho_palavra = 0;
            qnt_hifens = qnt_hifens + 1;
        }

        i = i + 1;
        if (texto[i] == '\0')
        {

            if (cobol[qnt_hifens] != texto[i - 1] &&
                cobol[qnt_hifens] != texto[i - tamanho_palavra])
            {
                eh_cobol = false;
            }
        }
    }
    if (eh_cobol)
    {
        printf("COBOL\n");
    }
    else
    {
        printf("BUG\n");
    }

    return EXIT_SUCCESS;
}