#include <stdio.h>

int main (void)
{
    int repeticoes;
    int valor;
    int maior;
    int contador = 1;

    printf ("Quantos numeros voce ira digitar? ");
    scanf ("%d",&repeticoes);

    printf ("Digite agora os numeros: \n");
    scanf ("%d",&valor);
    maior = valor;

    for (int i = 0; i < repeticoes-1; i++)
    {
        scanf("%d",&valor);

        if (valor > maior)
        {
            maior = valor;
            contador=1;
        }
        else if (valor == maior)
        {
            contador++;
        }
        else
        {
            continue;
        }
        
        
        
    }
    
    printf("\n\nO maior numero digitado foi o %d, e foi inserido %d vez(es)!",maior,contador);
}