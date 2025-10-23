#include<stdio.h>
#include<stdlib.h>

void trocar(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
void boa_troca(int * px, int * py){
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main(){
    int x = 8;
    int y = 5;
    printf("antes x= %d e y= %d\n", x, y);
    trocar(x,y);
    printf("depois x= %d e y= %d\n", x, y);
    boa_troca(&x,&y);
    printf("depois da troca boa x= %d e y= %d\n", x, y);


}