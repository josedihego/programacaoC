#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //segurança:  nunca permita que o usuário forneça
    // o primeiro argumento de printf
    printf("%s\n", "Meu segundo programa!");
    printf("preço: R$ %.2f  \n", 3.50);
    return EXIT_SUCCESS;
}