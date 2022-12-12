#include <stdio.h>

int main (void)
{
    int soma = 0;
    int contador = 0;

    while (contador <= 50)
    {
        if (contador%2 == 0)
        {
            printf("%d\n",contador);
        }
        contador++;
    }
    
}