#include <stdio.h>
#include <stdlib.h>

void imprimir_vetor(int valores [], int tam){
    printf("\n<");
    for(int p=0; p < tam-1; p = p+1){
        printf("%d, ",valores[p]);
    }
    printf("%d >\n",valores[tam-1]);
}
#define TAM 10

int main(){
    int valores [TAM] = {-1,8,7,5,6,-10,2,20,60,0};
    printf("Antes:\n");
    imprimir_vetor(valores,TAM);

    for(int p=1; p < TAM;p = p+1){
        int chave = valores[p];
        int q = p-1;
        while(chave < valores[q] && q>=0){
            valores[q+1] = valores[q];
            q = q -1;
        }
        valores[q+1] = chave;
    }
    printf("Depois:\n");
    imprimir_vetor(valores,TAM);
    
    return EXIT_SUCCESS;

}