#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int vetor[19];
    int primo = 1;
    int contador1 = 1;
    int contador2 = 0;
    int ligado = 1;

    for (size_t i = 0; i < 10; i++)
    {
        vetor[i] = rand()%100;
    }
    
    printf ("Vetor de 10 numeros inteiros pertencentes a [0,100] = { ");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("}\n");

    printf("\nNumeros primos contidos no vetor e suas respectivas posicoes (0,9):\n");

    
    for (size_t i = 0; i < 10; i++)
    {
        while (contador1 <= vetor[i])
        {
            if (vetor[i]%contador1 == 0)
            {
                contador2++;
            }
            contador1++;  
        }

        if (contador2 == 2)
        {
            printf("%d na posicao %d", vetor[i], i);
            printf("\n");
        }
        contador2 = 0;
        contador1 = 1;
        
    }
        
    
}