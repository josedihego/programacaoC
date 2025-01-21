#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void imprimir_array(int valores [], int tam){
    printf("[");
    for(int i=0; i < tam; i = i +1){
        if(i< tam-1)
            printf("%d,", valores[i]);
        else
            printf("%d", valores[i]);
    }
    printf("]\n");
}

void imprime_se_primo(int n){
    int qnt_div = 0;
    for(int i =1; i <= n; i = i +1){
        if(n%i==0) qnt_div = qnt_div+1;
    }
    if(qnt_div==2)
        printf("%d, ",n);
}
void imprimir_primos_do_array(int valores[], int tam){
    for(int i = 0; i < tam; i = i+1){
        imprime_se_primo(valores[i]);
    }
}

int main(){
    int valores_A [] = {2,3,4,5,6,12,1,23,11,32};
    int valores_B [] = {2,31,4,51,16,12,1,23,111,32};
    int valores_R[10];
    for(int i = 0; i < 10; i = i +1){
        valores_R[i] = valores_A[i] + valores_B[i];
    }
    imprimir_array(valores_A,10);
    imprimir_array(valores_B,10);
    imprimir_array(valores_R,10);

    printf("Primos do array A: ");
    imprimir_primos_do_array(valores_A, 10);
    printf("\n");
    printf("Primos do array B: ");
    imprimir_primos_do_array(valores_B, 10);
    printf("\n");
    printf("Primos do array R: ");
    imprimir_primos_do_array(valores_R, 10);
    printf("\n");

}