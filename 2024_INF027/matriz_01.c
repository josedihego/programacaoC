#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int matrix[6][8];
    for(int l=0; l <6; l=l+1){
        for(int c=0; c<8; c=c+1){
            matrix[l][c] = rand()%100;
        }
    }
     for(int l=0; l <6; l=l+1){
        for(int c=0; c<8; c=c+1){
            if(matrix[l][c] <10)
                 printf("0%d ",matrix[l][c]);
            else
                printf("%d ",matrix[l][c]);
        }
        printf("\n");
    }
    printf("Informe: \n");
    printf("\t 1. mostar maior valor da linha\n");
    printf("\t 2. mostrar maior valor da coluna\n");
    printf("\t 3. mostrar soma diagonal\n");
    int opcao;
    scanf("%d",&opcao);
    int maior;
    switch(opcao){
        case 1:
        int le;// linha escolhida
        printf("Informe a linha(1-6):");
        scanf("%d",&le);
        le = le -1;// coneverter de (1-6) para (0-5)
        maior = matrix[le][0];
        for(int c=0; c<8; c= c+1){
            if(maior < matrix[le][c]){
                maior = matrix[le][c];
            }
        }
        printf("Maior valor da linha %d é : %d\n",le+1,maior);
        // mostar maior valor da linha
        break;
        case 2:
        int ce;//coluna escolhida
        printf("Informe a coluna(1-8)");
        scanf("%d", &ce);
        ce = ce-1;// coneverter de (1-8) para (0-7)
        maior = matrix[0][ce];
        for(int l=0; l< 6; l=l+1){
            if(maior < matrix[l][ce]){
                maior = matrix[l][ce];
            }
        }
        printf("Maior elemento da coluna %d é: %d\n",ce+1,maior);
        break;
        case 3:
        //mostrar soma diagonal
        // mostramos a soma da diagonal
        //(0,0)(1,1)(2,2)(3,3)(4,4)(5,5)
        int soma = 0;
        for(int i =0 ; i <=5; i = i +1){
            soma = soma + matrix[i][i];
        }
        printf("Soma dos elementos da diagonal\n");
        printf("\t(0,0)(1,1)(2,2)(3,3)(4,4)(5,5) é: ");
        printf("%d\n", soma);
        break;
        default:
        printf("Opção inválida. Fim do programa\n");
        break;

    }
    
}