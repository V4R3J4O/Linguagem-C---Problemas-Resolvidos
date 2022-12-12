#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int contador = 0;
    char binario[] = {"00010101101010001010111110010101101011001100"};
    int i = 0;

    while (binario[i] == '0' || binario[i] == '1')
    {
        if (binario[i] == '1')
        {
            contador++;
        }
        i++;
    }
    printf("NESSA STRING: %s",binario);
    printf("\nEXISTEM UM TOTAL DE %d 1's!\n\n",contador);
}