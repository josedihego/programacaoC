#include <stdio.h>
#include <stdlib.h>

int f(int a, int b)
{
    if (a < b)
        return b + 1;
    else
        return a - 1;
}
int main()
{
    int x = 10, y = 20;
    if (3 != 3)
    {
        int z = f(x, y);
         printf("z = %d\n", z);
    }
    printf("%s", "z não recebe nada nunca");
}