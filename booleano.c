#include <stdbool.h>
#include <stdio.h>

_Bool aberto = 0;
bool pago = false;

int main(void) {
    if (aberto){
        printf("%s\n", "portão aberto");
    }
    else{
        printf("%s\n", "portão fechado");
    }
    if (pago){
        printf("%s\n", "pedido pago");
    }
    else{
        printf("%s\n", "pedido não pago");
    }
    return 0;
}