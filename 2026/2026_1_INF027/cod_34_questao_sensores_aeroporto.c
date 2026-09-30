#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

#define NUN_SEN 10
#define NUN_MED 3
int main(){
   float leituras[NUN_SEN * NUN_MED];

   for(int s=0; s < NUN_SEN * NUN_MED; s= s+3){
        printf("Informe as três leituras do sensor n° %d:",(s/3)+1);
        scanf("%f %f %f",&leituras[s], &leituras[s+1], &leituras[s+2]);
   }

   float soma = 0;

   for(int p=0; p < NUN_SEN * NUN_MED; p = p +3){
       soma = soma + media(leituras[p], leituras[p+1], leituras[p+2]);
   }

   printf("Média geral é %.2f\n", soma/NUN_SEN);

   float soma_descartados = 0;
   for(int p=0; p < NUN_SEN * NUN_MED; p = p +3){
        soma_descartados = soma_descartados + media_descarte(leituras[p], leituras[p+1], leituras[p+2]);
   }
   printf("Média com descarte é %.2f\n", soma_descartados/NUN_SEN);

   int qnt_rec ;
   float rec;

   int qnt_rec_vitoriosa = 1;
   float rec_vitorioso = leituras[0];
   
   for(int p =0; p < NUN_SEN * NUN_MED; p = p +1){
      rec = leituras[p];
      qnt_rec = 0;
     for(int d = 0 ; d < NUN_SEN * NUN_MED; d = d+1){
        if(rec == leituras[d]){
            qnt_rec = qnt_rec +1;
        }
     }
     if(qnt_rec > qnt_rec_vitoriosa){
        qnt_rec_vitoriosa = qnt_rec;
        rec_vitorioso = rec;
     }

   }
   printf("A temperatura mais recorrente é %.2f que aparece %d vezes.\n",rec_vitorioso, qnt_rec_vitoriosa);
}