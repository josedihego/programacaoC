#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    char texto [256];
    char consoantes [] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    printf("Informe um texto:");
    fgets(texto,256, stdin);
  
    int p_t = 0;
    int qnt = 0;
    while(texto[p_t] != '\0'){
        int c1 = texto[p_t];
        int p_c = 0;
        bool c1_consoante = false;
        while(consoantes[p_c]!= '\0' && c1_consoante!=true){
            if(consoantes[p_c]==c1){
                c1_consoante = true;
            }
            p_c = p_c+1;
        }
        if(c1_consoante==true){
            int c2 = texto[p_t+1];
            p_c = 0;
            bool c2_consoante =false;
            while(consoantes[p_c]!= '\0' && c2_consoante !=true){
                if(consoantes[p_c] == c2){
                    c2_consoante = true;
                }
                p_c = p_c+1;
            }
            if(c2_consoante ==true){
                qnt = qnt+1;
                p_t = p_t +1;
                char prox = texto[p_t];
                bool prox_e_cons = true;
                while(prox_e_cons==true){
                    p_t = p_t + 1;
                    prox = texto[p_t];
                    p_c = 0;
                    prox_e_cons = false;
                    while(consoantes[p_c] != '\0'){
                        if(prox == consoantes[p_c]){
                            prox_e_cons = true;
                        }
                        p_c = p_c+1;
                    }

                }

            }
        }
        p_t = p_t +1;
    }
    printf("Quantidade de encontro consonantal: %d\n", qnt);
}