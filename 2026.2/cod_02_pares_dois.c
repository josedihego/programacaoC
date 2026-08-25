#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int n2;
    int n3;
    printf("Informe três valores seprados por vírgula");
    scanf("%d,%d,%d", &n1, &n2, &n3);
    // outra maneira, lê um por vez
    // scanf("%d",&n1);
    // scanf("%d",&n2);
    // scanf("%d",&n3);
    if (n1 == n2 && n3 != n2)
    { // n1==n2 && n3 != n1
        if(n1%2==0){
            printf("SIM\n");
        }
        else{
            printf("NÃO\n");
        }
    }
    else if (n2 == n3 && n2 != n1)
    { // n2==n3 && n3 != n1
        if(n2%2==0){
            printf("SIM\n");
        }
        else{
            printf("NÃO\n");
        }
    }
    else if (n1 == n3 && n3 != n2)
    {
        if(n1%2==0){
            printf("SIM\n");
        }
        else{
            printf("NÃO\n");
        }
    }
    else{
        printf("NÃO\n");
    }
}