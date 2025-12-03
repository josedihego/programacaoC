#include <stdio.h>
#include <stdlib.h>

int main()
{
    int o1, o2, o3;
    printf("Informe um octal com 3 dígitos:");
    scanf("%1d%1d%1d", &o1, &o2, &o3);
    int decimal = (o1 *(8*8)) + (o2 * 8) + (o3 * 1);
    printf("%d%d%d \u2088 = %d \u2081\u2080\n",o1,o2,o3,decimal);
}