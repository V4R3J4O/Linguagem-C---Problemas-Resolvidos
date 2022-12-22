#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    printf("Digite uma frase: ");
    char frase[50];
    fgets(frase,50,stdin);
    int ascii[50];
    int i = 0;
    while (frase[i] != '\n')
    {
        ascii[i] = frase[i] + 1;
        frase[i] = ascii[i];
        i++;
    }
    
    printf("\n\n");
    printf("Frase alterada: %s\n\n",frase);
}