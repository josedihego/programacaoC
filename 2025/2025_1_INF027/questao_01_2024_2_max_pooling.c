#include <stdio.h>
#include <stdlib.h>

#define T 6
#define P 6
#define TR T/P

int main(){
  
  /*
  int matrix [T][T];  
  for(int l = 0; l < T; l = l +1){
    for(int c =0; c < T; c = c+1){
       printf("Informe a posição da matrix[%d][%d]:", l, c);
       scanf("%d", &matrix[l][c]);

    }
  }
    */

  int matrix[T][T] = {
        { 3,  7,  1, 11,  5,  9},
        {12,  2,  8,  4, 10,  6},
        { 5,  9,  3,  7,  1, 11},
        {10,  6, 12,  2,  8,  4},
        { 1, 11,  5,  9,  3,  7},
        { 8,  4, 10,  6, 12,  2}
    };

    int resultado[TR][TR];

    for(int l=0; l < T; l = l + P){
        printf("l=%d\n",l);
        for(int c =0; c < T; c = c+P){
            printf("\t c= %d, ", c);
            int max = matrix[l][c];
            for(int i = l; i < l+P; i = i +1){
                for(int j = c; j < c+P; j = j +1){
                    if(matrix[i][j] > max){
                        max = matrix[i][j];
                    }
                }
            }
            printf(" max = %d\n", max);
            resultado[l/P][c/P] = max;
        }
    }
    printf("Resultado : \n");
    for(int l = 0 ; l < TR; l = l +1){
        for(int c =0; c < TR; c = c+1){
            printf("%d ", resultado[l][c]);
        }
        printf("\n");
    }
}