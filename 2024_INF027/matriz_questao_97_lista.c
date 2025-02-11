#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int matrix[5][5];
    for(int l=0; l<5;l = l+1){
        for(int c=0; c<5; c= c+1){
            //para prova versão 1
            //scanf("%d", &matrix[l][c]);
            //para nos aqui versão 2
            matrix[l][c] = rand()%10;
        }
    }
    for(int l=0; l < 5; l = l +1){
        for(int c=0; c<5; c= c+1){
            printf("%d ",matrix[l][c]);
        }
        printf("\n");
    }
    int x,y;
    printf("Informe a primeira linha que deseja trocar: ");
    scanf("%d",&x);
    printf("Informe a segunda linha que deseja trocar: ");
    scanf("%d",&y);
    x= x-1;
    y= y-1;
    for(int i =0; i < 5; i=i+1){
        int temp = matrix[x][i];
        matrix[x][i] = matrix[y][i];
        matrix[y][i] = temp;
    }
    printf("Depois da troca das linhas\n");
    for(int l=0; l < 5; l = l +1){
        for(int c=0; c<5; c= c+1){
            printf("%d ",matrix[l][c]);
        }
        printf("\n");
    }

   for(int i=0; i < 5; i = i +1){
        int temp = matrix[i][x];
        matrix[i][x] = matrix[i][y];
        matrix[i][y] = temp;
   }

     printf("Depois da troca das colunas\n");
    for(int l=0; l < 5; l = l +1){
        for(int c=0; c<5; c= c+1){
            printf("%d ",matrix[l][c]);
        }
        printf("\n");
    }

    // FORÇA BRUTA: resolve na prova
    // 00 04
    int temp = matrix[0][0];
    matrix[0][0] = matrix[0][4];
    matrix[0][4] = temp;
    // 11 13
    temp = matrix[1][1];
    matrix[1][1] = matrix[1][3];
    matrix[1][3] = temp;
    // 31 33
    temp = matrix[3][1];
    matrix[3][1] = matrix[3][3];
    matrix[3][3] = temp; 
    // 40 44
    temp = matrix[4][0];
    matrix[4][0] = matrix[4][4];
    matrix[4][4] = temp;

      printf("Depois da troca das diagonais\n");
    for(int l=0; l < 5; l = l +1){
        for(int c=0; c<5; c= c+1){
            printf("%d ",matrix[l][c]);
        }
        printf("\n");
    }
    // SOLUÇÃO IDEAL GENÉRICA

    int i = 0, j = 4;
    while( i<5 && j>=0){
        temp = matrix[i][i];
        matrix[i][i] = matrix[i][j];
        matrix[i][j] = temp; 
        i = i +1;
        j = j -1;
    }
    printf("Depois da troca das diagonais\n");
    for(int l=0; l < 5; l = l +1){
        for(int c=0; c<5; c= c+1){
            printf("%d ",matrix[l][c]);
        }
        printf("\n");
    }
}