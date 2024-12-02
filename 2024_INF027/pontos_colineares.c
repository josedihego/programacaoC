#include <stdio.h>
#include <stdlib.h>

int determinante(int x1, int y1, int x2, int y2, int x3, int y3){
    int det = x1*y2 + y1*x3 + x2*y3 - (y2*x3) - (x1*y3) - (y1*x2);
    return det;
}
int main(){
    int x1, y1, x2, y2, x3, y3;
    printf("Informe o valor de três pontos em 2D:\n");
    scanf("%d",&x1);
    scanf("%d",&y1);
    scanf("%d",&x2);
    scanf("%d",&y2);
    scanf("%d",&x3);
    scanf("%d",&y3);
    int det = determinante(x1,y1,x2,y2,x3,y3);
    if(det==0){
        printf("Os pontinhos são colineares\n");
    }
    else{
        printf("Os pontinhos não são colineares\n");
    }
}