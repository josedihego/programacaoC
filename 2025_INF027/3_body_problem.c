#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int x1, y1, r1;
    int x2, y2, r2;
    printf("Informe x1: ");
    scanf("%d",&x1);
    printf("Informe y1: ");
    scanf("%d",&y1);
    printf("Informe o raio r1: ");
    scanf("%d",&r1);

    printf("Informe x2: ");
    scanf("%d",&x2);
    printf("Informe y2: ");
    scanf("%d",&y2);
    printf("Informe o raio r2: ");
    scanf("%d",&r2);
    bool dentro = (x1+r1 < x2+r2 && y1+r1<y2+r2 ) || (x2+r2 < x1+ r1 && y2+r2 < y1+r1);

    if(x1==x2 && y1==y2 && r1==r2){
        printf("Circulos se intersectam em infinitos pontos");
    }
    else if (dentro){
        printf("Um dos círculos contém o outro, mas não se tocam\n");
    }
    else if(dentro && (x1+r1==x2+r2 || y1+r1==y2+r2)){
        printf("Um dos círculos esta dentro do outro e se tocam em um ponto");
    }



}