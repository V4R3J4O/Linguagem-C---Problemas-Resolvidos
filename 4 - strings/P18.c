#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main (void)
{
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase,100,stdin);

    char l1, l2;

    printf("\n\nAgora escolha que letra voce deseja alterar na frase: ");
    scanf(" %c",&l1);
    printf("\n\nAgora escolha a letras que voce deseja por no lugar: ");
    scanf(" %c",&l2);

    int i = 0;

    while (frase[i++] != '\n')
    {
        if (frase[i] == l1)
        {
            frase[i] = l2;
        }
        
    }
    
    printf("\n\nESTA E A FRASE ALTERADA: %s",frase);
    
}