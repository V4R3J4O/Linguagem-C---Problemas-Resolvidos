#include <stdio.h>

int main (void)
{
    int valor;
    int centenas,dezenas,unidades;

    printf("Digite um numero entre 100 - 999: ");
    scanf("%d",&valor);

    centenas = (valor%1000)/100;
    dezenas = (valor%100)/10;
    unidades = valor%10;

    printf("%d\n",centenas);
    printf("%d\n",dezenas);
    printf("%d\n",unidades);
}