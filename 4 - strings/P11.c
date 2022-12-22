#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    printf("Digite uma frase: ");
    char frase[100];
    fgets(frase,100,stdin);
    printf("\n Esta e a frase escrita sem as vogais: ");

    int i = 0;
    while (frase[i] != '\n')
    {
        if (frase[i] != 'a' && frase[i] != 'e' && frase[i] != 'i' && frase[i] != 'o' && frase[i] != 'u' && frase[i] != 'A' && frase[i] != 'E' && frase[i] != 'I' && frase[i] != 'O' && frase[i] != 'U')
        {
            printf("%c",frase[i]);
        }
    i++;
    }
    
    printf("\n\n");
}