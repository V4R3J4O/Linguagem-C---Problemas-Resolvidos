#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n;
    int contador = 1;

    printf ("Quantas linhas do triangulo de floyd voce deseja imprimir: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        printf("\n");

        for (int j = 1; j <= i; j++)
        {
            printf("%d ",contador);
            contador++;
        }
        
    }
    
}