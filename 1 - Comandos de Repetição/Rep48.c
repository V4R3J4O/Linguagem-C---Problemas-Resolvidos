#include <stdio.h>

int main (void)
{
    int soma = 1;
    int ultimo = 1;
    int penultimo = 0;
    int somapar = 0;


    while (soma <= 4000000)
    {
        soma = ultimo + penultimo;
        if (soma%2 == 0)
        {
            somapar += soma;
            printf("%d, ",somapar);
        }
        penultimo = ultimo;
        ultimo = soma;

    }
    

}