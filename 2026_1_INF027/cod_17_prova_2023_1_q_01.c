#include <stdio.h>
#include <stdlib.h>

int main(){
    //primeira área
    float x1, y1, dv1, dh1;
    //segunda área
    float x2, y2, dv2, dh2;
    // variáveis da intersecção
    float xi, yi, dvi, dhi;
    printf("Informe a posição e dimensões da primeira área: ");
    scanf("%f,%f,%f,%f",&x1,&y1,&dv1,&dh1);
    printf("Informe a posição e dimensões da segunda área: ");
    scanf("%f,%f,%f,%f",&x2,&y2,&dv2,&dh2);

    // critérios de não intersecção
    if(x2 >= x1+dh1 || x2+dh2 <= x1 || y2-dv2 >= y1 || y2 <=y1-dv1){
        printf("Não ha intersecção entre os terrenos\n");
    }
    else{
        if(x2>x1){
            xi= x2;
        }
        else{
            xi = x1;
        }
        if(y1 > y2){
            yi= y1;
        }
        else{
            yi = y2;
        }
     
        if(x2 + dh2 > x1 + dh1){
            dhi = dh2 - ((x2+dh2) - (x1+dh1));
        }
        else{
            dhi = dh1 - ((x1+dh1)-(x2+dh2));
        }
    }


}