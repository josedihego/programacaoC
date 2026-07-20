#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool eh_consoante(char letra){
    char consoantes [] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    bool res = false;
    int p = 0;
    while(consoantes[p]!='\0'&& res==false){
        if(consoantes[p]==letra){
            res = true;
        }
        p = p +1;
    }
    return res;
}

int main(){
    char texto [256];
    printf("Informe um texto:");
    fgets(texto,256, stdin);
    int p = 0;
    int qnt = 0;
    while(texto[p]!='\0'){
        char c1 = texto[p];
        char c2 = texto[p+1];
        if(eh_consoante(c1)==true && eh_consoante(c2)==true){
            qnt = qnt+1;
            p = p +1;
            bool continua_consoante = true;
            while(continua_consoante==true){
                p = p +1;
                continua_consoante = eh_consoante(texto[p]);
            }

        }
        p = p +1;
    }
    printf("Quantidade de encontros consonantais é: %d\n",qnt);


}