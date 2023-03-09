#include <stdio.h>

void trocar(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("trocar: a = %d, b = %d\n", a, b);
}

int main(void)
{
    int a = 12;
    int b = 15;
    trocar(a, b);
    printf("main: a = %d, b = %d\n", a, b);
    return 0;
}