#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(){

   float * quantidades = malloc(400 * sizeof(float));
   float * precos = malloc(400 * sizeof(float));

   printf("%s", "Informe uma das opções:");
   printf("\t%s\n", "1. cadastrar substância");
   printf("\t%s\n", "2. remover substância");
   printf("\t%s\n", "3. consultar substância");
   printf("\t%s\n", "4. exibir somatório estoque substância");
   printf("\t%s\n", "5. exibir média estoque");



   return EXIT_SUCCESS;
}