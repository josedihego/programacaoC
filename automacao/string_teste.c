#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    printf("%d\n", strcmp("Maria", "Antonia"));
    printf("%d\n", strcmp("Maria", "Maria"));
    printf("%d\n", strcmp("Antonia", "Maria"));

    return EXIT_SUCCESS;
}