#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int vetor[10];
    int memoria;
    int contador = 1;
    int menor;

    for (size_t i = 0; i < 10; i++)
    {
        vetor[i] = rand()%100;
    }

    printf("Vetor com 10 elementos gerados aleatoriamente = { ");

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("}\n");

  
    while (contador <= 9)
    {
        for (size_t i = 0; i < 10; i++)
        {
            for (size_t j = 0; j < 10; j++)
            {
                if (i <= 5)
                {
                    if (vetor[j]>vetor[i])
                    {
                        memoria = vetor[i];
                        vetor[i] = vetor[j];
                        vetor[j] = memoria;
                    }
                }
                else
                {
                    if (vetor[j]<vetor[i])
                    {
                        memoria = vetor[i];
                        vetor[i] = vetor[j];
                        vetor[j] = memoria;
                    }
                } 
                
            }
            
        }
        contador++;
    }
    
    printf("Vetor ORGANIZADO = { ");

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("}\n\n");
}