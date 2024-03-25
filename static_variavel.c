#include <stdio.h>
#include <stdlib.h>

void increment()
{
    static int x = 0;
    x = x+ 1;
    printf("increment foi chamada %d vezes\n", x);
}

int main(void)
{
    for (int i = 0; i < 5; i = i +1)
        increment();
    return 0;
}