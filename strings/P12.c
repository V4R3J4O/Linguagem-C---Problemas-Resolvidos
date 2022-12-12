#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    printf("Digite uma frase: ");
    char frase[100];
    fgets(frase,100,stdin);
    
    int vogais = 0;
    int i = 0;
    while (frase[i] != '\n')
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
        {
            vogais++;
        }
    i++;
    }
    
    printf("\n\n");
    printf("Essa frase possui um total de %i vogais.",vogais);

    printf("Digite um caractere para ser substituido no lugar das vogais da frase escrita: ");
    char substituto;
    scanf(" %c",&substituto);
    i = 0;
    while (frase[i] != '\n')
    {
        if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
        {
            frase[i] = substituto;
        }
    i++;
    }

    printf("\n\nEsta e a nova frase: %s\n\n",frase);
}