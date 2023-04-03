#include <stdio.h>

void trocar(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

int main(void)
{
    int x = 12;
    int y = 15;
    trocar(x, y);
    printf("main: x = %d, y = %d\n", x, y);
    return 0;
}