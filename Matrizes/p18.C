#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int matriz[3][3];
    int vetor[3] = {0};
    
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            matriz[i][j] = rand()%200 -100;
            vetor[j] = vetor[j] + matriz[i][j];
        }
        
    }
    printf("Matriz 3x3:\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\nVetor contendo a soma de cada coluna: [ ");

    for (size_t i = 0; i < 3; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("]\n\n");
}