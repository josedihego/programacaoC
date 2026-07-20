#include <stdio.h>
#include <stdlib.h>

void troca(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
void troca_pon(int * px, int *py){
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main(){
    int x, y;
    x = 8;
    y = 5;
    printf("Antes x= %d e y = %d\n", x,y);
    troca(x,y);
    printf("Depois x= %d e y = %d\n", x,y);
    troca_pon(&x,&y);
    printf("Depois com ponteiro x= %d e y = %d\n", x,y);

}