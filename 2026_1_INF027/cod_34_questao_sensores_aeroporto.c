#include <stdio.h>
#include <stdlib.h>

float media(float v1, float v2, float v3){
    float res = (v1+v2+v3)/3;
    return res;
}

float media_descarte(float v1, float v2, float v3){
    float media_geral = media(v1,v2,v3);
    float nova_media;
    float diff_v1, diff_v2, diff_v3;
    if(media_geral > v1){
        diff_v1 = media_geral - v1;
    }
    else{
        diff_v1 = v1 - media_geral;
    }
    if(media_geral > v2){
        diff_v2 = media_geral - v2;
    }
    else{
        diff_v2 = v2 - media_geral;
    }
    if(media_geral > v3){
        diff_v3 = media_geral - v3;
    }
    else{
        diff_v3 = v3 - media_geral;
    }
    if(diff_v1 > diff_v2 && diff_v1 > diff_v3){
        nova_media = (v2+v3)/2;
    }
    else{
        if(diff_v2 > diff_v3){
            nova_media = (v1+v3)/2;
        }
        else{
            nova_media = (v1+v2)/2;
        }
    }
    return nova_media;
}

#define NUN_SEN 2
#define NUN_MED 3
int main(){
   float medidas_sensores[NUN_SEN * NUN_MED];

   for(int s=0; s < NUN_SEN; s= s+1){
    printf("Informe as três leituras do sensor n° %d:",s+1);
    scanf("%f %f %f",medidas_sensores[s], medidas_sensores[s+1], medidas_sensores[s+2]);
   }
}