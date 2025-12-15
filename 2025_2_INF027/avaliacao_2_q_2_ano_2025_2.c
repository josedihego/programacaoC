#include <stdio.h>
#include <stdlib.h>


int main(){
    int valores[11];
    for(int p = 0; p < 11; p = p+1){
        printf("Informe o valor sorteado: ");
        scanf("%d", &valores[p]);
    }
    int pontuacao = 1;
    int max = 1;
    int numero = valores[0];
    for(int p = 1; p < 11; p = p +1){
        if(numero == valores[p]){
            pontuacao = pontuacao +1;
        }
        else{
            if(pontuacao > max){
                max = pontuacao;
            }
            pontuacao = 1;
        }
        numero = valores[p];
    }
    printf("Pontuação máxima é de : %d\n", max);
}