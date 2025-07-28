#include <stdio.h>
#include <stdlib.h>

#define T 6
#define P 2
int main(){
  int matrix [T][T];  
  for(int l = 0; l < T; l = l +1){
    for(int c =0; c < T; c = c+1){
        printf("Informe a posição da matrix[%d][%d]:", l, c);
        scanf("%d", &matrix[l][c]);
    }
  }

  int matrix[6][6] = {
        { 3,  7,  1, 11,  5,  9},
        {12,  2,  8,  4, 10,  6},
        { 5,  9,  3,  7,  1, 11},
        {10,  6, 12,  2,  8,  4},
        { 1, 11,  5,  9,  3,  7},
        { 8,  4, 10,  6, 12,  2}
    };
}