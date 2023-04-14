#include <stdio.h>
#include <stdlib.h>

int somar(int v1, int v2){
    int resultado = v1 + v2;
    return resultado;
}

int main(){
    int x;
    int y;
    printf("%s", "Informe o valor de x: ");
    scanf("%d", &x);
    printf("%s", "Informe o valor de y: ");
    scanf("%d", &y);
    int res_soma = somar(x,y);
    printf("x= %d, y = %d ", x,y);
    printf("Resultado da soma : %d\n", res_soma);


}