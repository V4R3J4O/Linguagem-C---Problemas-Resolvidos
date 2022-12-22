#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int n;
    int contador = 0;

    printf ("Digite o numero natural inteiro que deseja saber se e primo: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            contador++;
        }
        
    }
    
    if (contador == 2)
    {
        printf("\n\nO %d E um numero primo!\n\n",n);
    }
    else
    {
        printf("\n\n %d NAO e um numero primo!\n\n",n);
    }
    
    
}