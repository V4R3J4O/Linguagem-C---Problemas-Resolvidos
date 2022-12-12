#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase,100,stdin);

    int i = 0;

    while (frase[i] != '\n')
    {
        if (frase[i] >= 65 && frase[i] <= 90)
        {
            frase[i] += 32;
        }
        i++;
    }
    
    printf("Esta e a nova frase: %s",frase);
}