#include <stdio.h>
#include <stdlib.h>


float calc_average(float scores[], int size){
     float sum = 0;
     for(int i = 0; i < size; i = i +1){
        sum = sum + scores[i];
    }
    return sum/size;
}

int main(){
    char name [100];
    float scores [3];
    printf( "qual seu nome: ");
    printf("Size of name before: %d",sizeof(name));
    fgets(name, sizeof(name), stdin);
    printf("Size of name after: %d",sizeof(name));

    for(int i = 0; i < 3; i = i +1){
        printf("Informe sua %d° nota: ", i+1);
        scanf("%f", &scores[i]);
    }
    printf("Olá %s",name);
    printf("Sua média foi de %.2f\n",calc_average(scores,3));
    return EXIT_SUCCESS;

}