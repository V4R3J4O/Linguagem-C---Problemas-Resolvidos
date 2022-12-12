#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int vetor[10];

    for (size_t i = 0; i < 10; i++)
    {
        printf("\n");
        printf("Insira um valor [%d]: ",i);
        scanf("%d",&vetor[i]);

        for (size_t j = 0; j <= i; j++)
        {
            if (vetor[j] == vetor[i] && j != i)
            {
                printf("Esse numero ja foi digitado, por favor insira um numero diferente! ");
                i--;
            }
            
        }
        
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    printf("\n\n");
}