#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c1, c2, c3;
    int s1, s2, s3;
    printf("Informe o código do cadeado:");
    scanf("%1d%1d%1d", &c1, &c2, &c3);
    printf("Informe a senha do cadeado:");
    scanf("%1d%1d%1d", &s1, &s2, &s3);
    int d1, d2, d3;
    if (c1 > s1)
    {
        d1 = (c1 - s1);
    }
    else
    {
        d1 = (s1 - c1);
    }
    if (c2 > s2)
    {
        d2 = (c2 - s2);
    }
    else
    {
        d2 = (s2 - c2);
    }
    if (c3 > s3)
    {
        d3 = (c3 - s3);
    }
    else
    {
        d3 = (s3 - c3);
    }
    int qnt_movimentos =0;
    if(d1 < 10-d1){
        qnt_movimentos = qnt_movimentos+ d1;
    }
    else{
        qnt_movimentos = qnt_movimentos + (10-d1);
    }
    if(d2 < 10-d2){
        qnt_movimentos = qnt_movimentos+ d2;
    }
    else{
        qnt_movimentos = qnt_movimentos + (10-d2);
    }
    if(d3 < 10-d3){
        qnt_movimentos = qnt_movimentos+ d3;
    }
    else{
        qnt_movimentos = qnt_movimentos + (10-d3);
    }
    printf("Quantidade de movimentos para abrir o cadeado é: %d 🔐\n", qnt_movimentos);
    
}