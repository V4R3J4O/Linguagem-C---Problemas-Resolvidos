#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    printf("Digite uma frase: ");
    char frase[100];
    fgets(frase,100,stdin);

    int espacos = 0;

    int i = 0;
    while (frase[i] != '\n')
    {
        if (frase[i]==' ')
        {
            espacos++;
        }
    i++;
    }
    
    printf("\n\n");
    printf("Esta Frase possui um total de %d espacos.\n\n",espacos);
}