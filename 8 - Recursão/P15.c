#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float serie (float n)
{
    if (n == 1)
    {
        return (1+pow(n,2))/n;
    }
    else
    {
        float soma = serie(n-1);
        soma += (1+pow(n,2))/n;
        return soma;
    }
    
    
}

int main (void)
{
    float valor;
    
    do
    {
        printf("Digite um valor valido para n: ");
        scanf("%f", &valor);
    } while (valor <= 0);
    
    printf("\nO valor da serie para n = %0.2f e: %0.2f\n\n",valor,serie(valor));
}