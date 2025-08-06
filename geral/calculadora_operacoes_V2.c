#include <stdio.h>
#include <stdlib.h>


int somar(int v1, int v2){
   int res =  v1 + v2;
   return res;
}
int subtrair(int v1, int v2){
    int res = v1 - v2;
    return res;
}
int multiplicar(int v1, int v2){
    int res = v1 * v2;
    return res;
}
int dividir(int v1, int v2){
    int res = v1/v2;
    return res;
}
int main(){
    int p1v, p2v;
    printf("%s","Informe o primeiro valor:");
    scanf("%d", &p1v);
    printf("%s","Informe o segundo valor:");
    scanf("%d", &p2v);
    
   int res_soma =  somar(p1v,p2v);
   printf("Soma é igual a %d\n", res_soma);

   int res_subtracao = subtrair(p1v,p2v);
   printf("Subtração é igual a : %d\n", res_subtracao);

   int res_multiplicacao = multiplicar(p1v,p2v);
   printf("Multiplicação igual a: %d\n", res_multiplicacao);

   int res_divisao = dividir(p1v,p2v);
   printf("Divisão igual a: %d\n",res_divisao);

    return EXIT_SUCCESS;
}