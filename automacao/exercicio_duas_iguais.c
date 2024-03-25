#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main(){
    char * ultima = malloc(10 * sizeof(char));
    char * penultima = malloc(10 * sizeof(char));

    printf("Informe uma palavra: ");
    scanf("%s", ultima);
    while (strcmp(ultima,penultima)!=0)
    {
       printf("Informe uma palavra: ");
       strcpy(penultima, ultima);
       scanf("%s", ultima);
    }
    printf("%s","Programa finalizado. Duas palavras iguais\n");
    
    return EXIT_SUCCESS;
}