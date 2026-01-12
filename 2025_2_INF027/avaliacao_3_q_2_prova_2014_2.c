#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    char texto [256];
    char consoantes [] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    printf("Informe um texto");
    fgets(texto,256, stdin);

    int p = 0;
    int qnt = 0;
    while(texto[p] != '\0'){
        int c1 = texto[p];
        int pi = 0;
        bool c1_consoante = false;
        while(consoantes[pi]!= '\0' && c1_consoante!=true){
            if(consoantes[pi]==c1){
                c1_consoante = true;
            }
            pi = pi+1;
        }
        if(c1_consoante==true){
            int c2 = texto[p+1];
            pi = 0;
            bool c2_consoante =false;
            while(consoantes[pi]!= '\0' && c2_consoante !=true){
                if(consoantes[pi] == c2){
                    c2_consoante = true;
                }
                pi = pi+1;
            }
            if(c2_consoante ==true){
                qnt = qnt+1;
            }
        }
        p = p +1;
    }
}