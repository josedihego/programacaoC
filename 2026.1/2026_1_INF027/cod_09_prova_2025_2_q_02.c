#include <stdio.h>
#include <stdlib.h>

int main()
{
    int comp_avenida;
    int dist_pontos;
    int dis_escola;
    printf("Informe o comprimento da avenida:");
    scanf("%d", &comp_avenida);
    printf("Informe a distância entre pontos:");
    scanf("%d", &dist_pontos);
    printf("Informe a distância da escola:");
    scanf("%d", &dis_escola);
    int numero_ponto;
    int dis_caminhada;
    numero_ponto = (dis_escola / dist_pontos) + 1;
    if (dis_escola % dist_pontos == 0)
    {
        printf("Desça na parada %d e lá é sua escola. Caminha 0 metros.\n", numero_ponto);
    }
    else
    {
        if (dis_escola % dist_pontos > dist_pontos / 2)
        {
            numero_ponto = numero_ponto + 1;
            dis_caminhada = ((numero_ponto-1) * dist_pontos) - dis_escola;
            printf("Desca na parada %d e caminha em direção ao início da avenida. Caminha %d metros\n", numero_ponto,dis_caminhada);
        }
        else
        {
            dis_caminhada = dis_escola - ((numero_ponto-1) * dist_pontos);
            printf("Desca na parada %d e caminha em direção ao fim da avenida. Caminhada %d metros\n", numero_ponto, dis_caminhada);
        }
    }
}