#include<stdio.h>
#include<stdlib.h>


int main(){
    int distancia = 5000;
    int d;
    int somatorio;
    for(d = 1; distancia < 42195; d= d +1){
        distancia = distancia + 200;
    }
    printf("🏅 No dia n° %d a corredora completará %d m\n", d,distancia);
}