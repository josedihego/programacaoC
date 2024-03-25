#include <stdio.h>
enum dias { dom, seg, ter, qua, qui, sex, sab };
enum estado {operante, inoperante, manutencao, descarte};


int main(){
    enum dias hoje =  dom;
    enum dias dia_coleta = seg;
    if(hoje == dia_coleta){
        puts("Hoje é dia de coleta");
    }
    else{
      puts("Hoje NÃO é dia de coleta");
    }    
}