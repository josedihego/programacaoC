#include <stdio.h>
#include <stdlib.h>

int main()
{
    char h1, h2, h3;
    printf("Informe um octal com 3 dígitos:");
    scanf("%c%c%c", &h1, &h2, &h3);
    printf("%d - %d - %d\n", h1, h2, h3);
    // 48 55 55
    int d1, d2, d3;
    if (h1 >= 48 && h1 <= 57)
    {
        d1 = h1 - 48;
    }
    else
    {
        d1 = h1 - 55;
    }
    if (h2 >= 48 && h2 <= 57)
    {
        d2 = h2 - 48;
    }
    else
    {
        d2 = h2 - 55;
    }
    if (h3 >= 48 && h3 <= 57)
    {
        d3 = h3 - 48;
    }
    else
    {
        d3 = h3 - 55;
    }

    int decimal = (d1 * 16*16) + (d2 * 16) + (d3 * 1);
    printf("%c%c%c \u2081\u2086 = %d \u2081\u2080\n", h1, h2, h3, decimal);
}