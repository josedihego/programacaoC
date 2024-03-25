#include <stdlib.h>
#include <stdio.h>

void trocar(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void){
    int idade_maria = 30;
    int idade_carla = 25;
     printf("Idade maria %d\n", idade_maria);
    printf("Idade carla %d\n", idade_carla);
    printf("Depois\n");
    trocar(&idade_maria,&idade_carla);
    printf("Idade maria %d\n", idade_maria);
    printf("Idade carla %d\n", idade_carla);
    return 0;
}