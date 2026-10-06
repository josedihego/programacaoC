#include <stdio.h>
#include<stdlib.h>


int main(){
    float p_cur, p_med, p_lon;// curta, média, longa
    printf("Informe as probabilidades: ");
    scanf("c:%f-m:%f-l:%f", &p_cur, &p_med,&p_lon);
    //printf("valores lidos              c:%.2f-m:%.2f-l:%.2f\n", p_cur,p_med,//p_lon);

    float esp_cur = p_cur * 2;
    float esp_med = p_med * 2;
    float esp_lon = p_lon * 3;

    if(esp_cur > esp_med && esp_cur > esp_lon){// maior é  esp_cur
        printf("Garafão %.2f\n", esp_cur);
    }
    else{// então a maior é esp_med ou esp_lon
        if(esp_med > esp_lon){// maior é esp_med
            printf("Média %.2f\n",esp_med);
        }
        else{// maior é esp_lon
            printf("Longa %.2f\n",esp_lon);
        }
    }

}