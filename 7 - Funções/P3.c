#include <stdio.h>

int verifica (int x)
{
    if (x > 0)
    {
        return 1;
    }
    else if (x < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }   
}

int main (void)
{
    int numero;
    printf("Digite um numero: ");
    scanf(" %d",&numero);

    printf("O numero digitado: ");
    switch (verifica(numero))
    {
    case 1:
        printf("1 - Maior que zero.");
        break;
    case -1:
        printf("-1 - Menor que zero.");
        break;
    case 0:
        printf("0 - Igual a zero.");
        break;
    
    default:
        break;
    }
}