#include <stdio.h>
#include <stdlib.h>




int main()
{
    int x = 8;
    printf("x = %d\n", x);
    int *px = &x;
    x = 20;
    printf("x = %d\n", x);
    *px = 30;
    printf("x = %d\n", x);
}