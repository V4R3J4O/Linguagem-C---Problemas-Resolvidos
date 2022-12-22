#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    char frase [100];
    printf("Digite uma frase: ");
    fgets(frase,100,stdin);

    int i = 0, j = 0;
    char memoria;
    while (frase[i++] != '\n')
    {
        if (frase[i] == ' ')
        {
            while (frase[i+j]== ' ')
            {
                j++;    
            }
            
            memoria = frase[i+j];
            frase[i+j] = frase[i];
            frase[i] = memoria;
            j=0;
        }
        
    }
    
    printf("Esta e a frase sem os espacos: %s",frase);
}