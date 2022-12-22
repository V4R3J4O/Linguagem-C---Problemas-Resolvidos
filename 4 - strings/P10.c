#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char palavra[100];
    printf("Digite uma palavra: ");
    fgets(palavra,100,stdin);
    printf("\n\nEsta e a palavra de traz para frente: ");

    int i = 0;

    while (palavra[i] != '\n')
    {
        i++;
    }
    
    for (int j = (i-1); j >= 0; j--)
    {
        printf("%c",palavra[j]);
    }
    printf("\n\n");
}