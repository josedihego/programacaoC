#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main(){

   float * quantidades = malloc(400 * sizeof(float));
   float * precos = malloc(400 * sizeof(float));

   printf("%s", "Informe uma das op��es:");
   printf("\t%s\n", "1. cadastrar subst�ncia");
   printf("\t%s\n", "2. remover subst�ncia");
   printf("\t%s\n", "3. consultar subst�ncia");
   printf("\t%s\n", "4. exibir somat�rio estoque subst�ncia");
   printf("\t%s\n", "5. exibir m�dia estoque");



   return EXIT_SUCCESS;
}