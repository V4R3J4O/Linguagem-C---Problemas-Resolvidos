#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    srand(time(NULL));

    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = rand()%200 - 100;
        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
        
    }
    
    printf("Vetor gerado com o valor zero ocupando os numeros que eram nega tivos:\n");
    printf("Vetor = { ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    printf("}\n\n");
}