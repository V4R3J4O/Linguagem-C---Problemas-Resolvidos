#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));
    int vetor[15];
    int memoria;
    int contador = 0;

    for (size_t i = 0; i < 15; i++)
    {
        if (i%2 == 0)
        {
            vetor[i] = rand()%100;
        }
        else
            vetor[i] = 0;
            
    }
    
    printf("Vetor gerado = { ");
    for (size_t i = 0; i < 15; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("}\n");
    
    while (contador <= 14)
    {
        for (size_t i = 0; i < 15; i++)
        {
            if (vetor[i]==0 && i != 14)
            {
                memoria = vetor[i];
                vetor[i] = vetor [i+1];
                vetor[i+1] = memoria;    
            }    
        }
        contador++;
    }
    
    printf("Vetor Compactado = { ");
    for (size_t i = 0; i < 15; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("}\n");

    
    
    
    
}