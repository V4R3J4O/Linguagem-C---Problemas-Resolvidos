#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int contador = 0;
    char binario[] = {"00010101101010001010111110010101101011001100"};
    int i = 0;
    printf("NESSA STRING: %s",binario);
    while (binario[i] == '0' || binario[i] == '1')
    {
        if (binario[i] == '0')
        {
            binario[i] = '1';
        }
        i++;
    }
    
    printf("\n\nTodos os zeros foram substituidos pelo numero 1: %s\n\n",binario);

}