#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[50];
    printf("Informe um texto: ");
    fgets(texto, 50, stdin);
    int qnt_vogais=0;
    int p = 0;
    while (texto[p] != '\0')
    {
        if (texto[p] == 'a' || texto[p] == 'e' ||
            texto[p] == 'i' || texto[p] == 'o' ||
            texto[p] == 'u' || texto[p] == 'A' || 
            texto[p] == 'E' || texto[p] == 'I' || 
            texto[p] == 'O' || texto[p] == 'U')
        {
            qnt_vogais = qnt_vogais + 1;
        }
        p = p +1;
    }
    printf("Número de vogais no texto %s é %d\n", texto,qnt_vogais);
}