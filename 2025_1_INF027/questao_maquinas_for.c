#include <stdio.h>
#include <stdlib.h>

int main()
{

    for (int x = 1; x <= 10000; x = x + 1)
    {
        int prod_M1 = (x * x) + (3 * x) + 8;
        for (int y = 1; y <= 10000; y = y + 1)
        {
            int prod_M2 = (3 * y * y) + (4 * y) - 16;
            if(prod_M1==prod_M2){
                printf("Máquinas produzem o mesmo para:\n");
                printf("\t x= %d e y= %d\n", x,y);
            }
        }
    }
}