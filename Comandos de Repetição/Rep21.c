#include <stdio.h>

int main (void)
{
    int inicio;
    int fim;
    int soma = 0;
    long long int multiplicacao = 1;

    printf ("Digite o inicio do intervalo: ");
    scanf ("%d",&inicio);
    printf ("\nDigite o fim do intervalo: ");
    scanf ("%d",&fim);

    for (int i = inicio; i <= fim; i++)
    {
        if (i%2 == 0)
        {
            soma+=i;
        }
        else
        {
            multiplicacao*=i;
        }
        
    }

    printf ("\nA soma dos algorismos pares contidos no intervalo fechado de [%d,%d] e igual a: %d\n",inicio,fim,soma);
    printf ("\nA multiplicacao dos algorismos impares contidos no intervalo fechado de [%d,%d] e igual a: %lld\n",inicio,fim,multiplicacao);
    
}