#include <stdio.h>
#include <stdlib.h>

#define NL 3
#define NC 3

int main()
{
    int matrix[NL][NC];
    for (int l = 0; l < NL; l = l + 1)
    {
        for (int c = 0; c < NC; c = c + 1)
        {
            printf("Informe o valor para l=%d e c=%d:", l, c);
            scanf("%d", &matrix[l][c]);
        }
    }
    int det = 
    (matrix[0][0] * matrix[1][1] * matrix[2][2]) + (matrix[0][1] * matrix[1][2] * matrix[2][0]) +
    (matrix[0][2] * matrix[1][0] * matrix[2][1]) - (matrix[0][2] * matrix[1][1] * matrix[2][0]) - (matrix[0][0] * matrix[1][2] * matrix[2][1]) - (matrix[0][1] * matrix[1][0] * matrix[2][2]);
    printf("det = %d\n",det);
}