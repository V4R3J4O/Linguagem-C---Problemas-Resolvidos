#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int min (int v[],int tam)
{
    if (tam == 1)
    {
        return v[tam-1];
    }
    else
    {
        int maior = min(v,tam-1);
        if (maior < v[tam-1])
        {
            return maior;
        }
        else
        {
            return v[tam-1];
        }
        
    }
    
}


int main (void)
{
    srand(time(NULL));
    int vet[10];
    for (int i = 0; i < 10; i++)
    {
        vet[i] = rand()%101;
        printf("%d ",vet[i]);
    }
    printf("\n");

    printf("O menor elemento pertencente a esse vetor e : %d\n\n",min(vet,10));
}