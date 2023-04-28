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
   printf("Soma é igual a %d", res_soma);

    return EXIT_SUCCESS;
}