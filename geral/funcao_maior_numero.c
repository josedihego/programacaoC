#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int main(void)
{
    int x = 10;
    int y = 50;
    int z = max(x, y);
    printf("%d é o maior entre %d e %d\n", z, x, y);
}