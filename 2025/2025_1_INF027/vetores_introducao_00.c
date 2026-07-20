#include <stdio.h>
#include <stdlib.h>

int main(){
    char tipo_pagamentos[10]; // p = PIX c = CRÉDITO d = DÉBITO
    float pagamentos[10];

    // 1° pagamento:  via PIX no valor de 35.40 R$
    tipo_pagamentos[0] = 'p';
    pagamentos[0] = 35.40;

     // 2° pagamento:  via CRÉDITO no valor de 350.45 R$
    tipo_pagamentos[1] = 'c';
    pagamentos[1] = 350.45;

    printf("Qual o número da transação entre 1 e 10:");
    int transacao_numero;
    scanf("%d", &transacao_numero);
    printf("Qual o tipo da transação: p(PIX), d(DÉBITO) e c(CRÉDITO)?");
    scanf("%c", &tipo_pagamentos[transacao_numero-1]);
    printf("Qaul valor da transação?");
    scanf("%f", &pagamentos[transacao_numero-1]);
}