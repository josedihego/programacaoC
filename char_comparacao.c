#include <stdio.h>

int main(void)
{
    char c1 = 'a';
    char c2 = 'A';
    if (c1 < c2)
    {
        printf("%c < %c\n", c1, c2);
        printf("%d < %d\n", c1, c2);
    }
    else
    {
        printf("%c >= %c\n", c1, c2);
        printf("%d >= %d\n", c1, c2);
    }
}