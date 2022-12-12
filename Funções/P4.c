#include <stdio.h>

int quadradoperfeito (int x)
{
    int contador = 0;
    int multiplo;
    while (contador <= x/3)
    {
        multiplo = contador * contador;

        if (multiplo == x)
        {
            return 1;
        }

        contador++;

        if (contador == x/3 && multiplo != x)
        {
            return 0;
        }  
    }  
}

int main (void)
{
    int numero;

    printf("Digite o numero que deseja descobrir se e um quadrado perfeito: ");
    scanf(" %d",&numero);

    printf("\nO numero %d: ",numero);

    switch (quadradoperfeito(numero))
    {
    case 1:
        printf("E um quadrado perfeito.");
        break;
    case 0:
        printf("Nao e um quadrado perfeito.");
        break;
    
    default:
        break;
    }
}